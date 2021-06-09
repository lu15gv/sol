//
//  File.swift
//  
//
//  Created by Luis Antonio Gomez Vazquez on 05/04/21.
//

import Foundation
import ArgumentParser

struct LLVMLink: ParsableCommand {
    
    private enum LLVMError: LocalizedError {
        case llvmDis
        case output
        
        var errorDescription: String {
            switch self {
            case .llvmDis:
                return "ERROR: missing llvm-dis path, please provide it."
            case .output:
                return "ERROR: missing output path, please provide it."
            }
        }
    }
    
    static var configuration = CommandConfiguration(commandName: "link",
                                                    abstract: "Links IR files from derived data. This is used in release pipeline.")
    
    @Option(name: [.short, .long], help: "Output file path")
    var output: String?
    
    @Option(name: [.long], help: "File that contains DerivedData paths, usually named 'env.sh' in root project directory.")
    var dependenciesPathsFile: String?
    
    @Option(name: [.long], help: "Target names that won't be linked. Separate them with a comma. E.g. Target 1,Target2")
    var targetsWhiteList: String?
    
    @Option(name: [.long], help: "JSON file that contains symbols that should be replaced to avoid errors.")
    var symbolsFile: String?
    
    @Option(name: [.long], help: "Path to llvm-link executable.")
    var llvmLink: String?
    
    @Option(name: [.long], help: "Path to llvm-dis executable.")
    var llvmDis: String?
    
    @Option(name: [.long], help: "Path to swift executable.")
    var swift: String = "/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/swift"
    
    @Option(name: [.long], help: "Path to rpl executable.")
    var rpl: String = "/usr/local/bin/rpl"
    
    @Flag(name: [.short, .long], help: "Wheter or not add bitcode. To enable this, you must have compiled with bitcode enabled.")
    var enableBitcode: Bool = false
    
    @Option(name: [.long], help: "Build configuration. 'Debug' or 'Release'")
    var configuration: String?
    
    private func outputFileName() throws -> String {
        guard let outputFileName = output else {
            throw LLVMError.output
        }
        return outputFileName
    }
    
    func run() throws {
        let derivedDataPaths = DerivedDataPaths(dependenciesPathsFile: dependenciesPathsFile)
        let derivedDataManager = try DerivedDataManager(derivedDataPaths: derivedDataPaths, configuration: configuration)
        let linker = LLVMLinkWrapper(llvmLinkPath: llvmLink)
        let outputIRFileByTarget = linkIRByTarget(derivedData: derivedDataManager, linker: linker)
        try fixDuplicatedSymbols(outputIRFileByTarget: outputIRFileByTarget)
        try linkAllIRTargets(linker: linker, outputIRFileByTarget: outputIRFileByTarget)
    }
    
    // MARK: - Fix duplicated symbols
    private func fixDuplicatedSymbols(outputIRFileByTarget: [String]) throws {
        guard let symbolsFile = symbolsFile else {
            print("Replace symbols phase was not necessary")
            return
        }
        guard let llvmDis = llvmDis,
              let url = URL(string: "file://" + symbolsFile) else {
            throw LLVMError.llvmDis
        }
        let symbolsData = try Data(contentsOf: url)
        let jsonDecoder = JSONDecoder()
        let replaceable = try jsonDecoder.decode(Replaceable.self, from: symbolsData)
        for library in replaceable.libraries {
            if let libraryPath = outputIRFileByTarget.first(where: { $0.contains(library.name) }) {
                print("Fixing \(library.name) symbols:")
                let llvmDisArguments = [libraryPath, "-o", libraryPath]
                shell(launchPath: llvmDis, arguments: llvmDisArguments)
                for symbol in library.symbols {
                    var file = LLVMFile(url: libraryPath)
                    if let old = symbol.old {
                        file.replace(old: old, new: symbol.new)
                        file.save()
                    } else if let regex = symbol.regex {
                        file.replace(regex: regex, with: symbol.new)
                        file.save()
                    } else {
                        print("WARNING: missing 'old' symbol or 'regex' in symbols.json")
                    }
                }
            }
        }
    }

    // MARK: - Link all target
    private func linkAllIRTargets(linker: LLVMLinkWrapper, outputIRFileByTarget: [String]) throws {
        print("Linking all modules: WholeApp.ir")
        print(outputIRFileByTarget.description())
        try linker.link(linkFilesPaths: outputIRFileByTarget, outputFileName: outputFileName())
    }
}

// MARK: - Link IR By Target
extension LLVMLink {
    private func linkIRByTarget(derivedData: DerivedDataManager, linker: LLVMLinkWrapper) -> [String] {
        var outputIRFileByTarget: [String] = []
        let totalFilesToLink = derivedData.data.linkFileList.count
        for (index, linkFileURL) in derivedData.data.linkFileList.enumerated() {
            if verify(linkFileURL: linkFileURL, whiteList: getWhiteList()) {
                continue
            }
            let linkFile = LLVMFile(url: linkFileURL)
            let outputFileName = linkFileURL.path.replacingOccurrences(of: ".LinkFileList", with: ".ir")
            let swiftIRFiles = derivedData.getSwiftIRFiles(linkFile: linkFile)
            if !compileSwift(swiftIRFiles: swiftIRFiles, derivedData: derivedData) {
                continue
            }
            outputIRFileByTarget.append(outputFileName)
            if let targetName = outputFileName.split(separator: "/").last {
                printProgress(total: totalFilesToLink, index: index, targetName: String(targetName))
            }
            linker.link(linkFilesPaths: linkFile.lines, outputFileName: outputFileName)
        }
        return outputIRFileByTarget
    }
    
    private func verify(linkFileURL: URL, whiteList: [String]) -> Bool {
        for target in whiteList {
            if linkFileURL.path.contains(target) {
                print("Target skipped: \(linkFileURL.path)")
                return true
            }
        }
        return false
    }
    
    private func getWhiteList() -> [String] {
        guard let targetsWhiteList = targetsWhiteList?.split(separator: ",") else {
            return []
        }
        return targetsWhiteList.map{ String($0) }
    }
    
    private func compileSwift(swiftIRFiles: [String], derivedData: DerivedDataManager) -> Bool {
        for swiftIRFile in swiftIRFiles {
            let outputFileName = swiftIRFile.replacingOccurrences(of: ".bc", with: ".o")
            guard let targetName = derivedData.getTargetName(forOutputFileName: outputFileName),
                  let moduleName = derivedData.getModuleName(forTargetName: targetName, outputFileName: outputFileName) else {
                return false
            }
            runSwift(swiftIRFile: swiftIRFile, moduleName: moduleName, outputFileName: outputFileName)
        }
        return true
    }
    
    private func runSwift(swiftIRFile: String, moduleName: String, outputFileName: String) {
        
        var arguments: [String] = ["-frontend", "-c", "-primary-file", swiftIRFile,
                                   "-emit-bc", "-target", "arm64-apple-ios12.0",
                                   "-Xllvm", "-aarch64-use-tbi", "-Osize",
                                   "-disable-llvm-optzns", "-module-name",
                                   String(moduleName), "-o", outputFileName]
        if enableBitcode {
            arguments.insert("-embed-bitcode", at: 4)
        }
        // Shell debug
        print("Swiftc: \(swift)\nArguments:\n\(arguments.description(separator: " "))\n")
        shell(launchPath: swift, arguments: arguments)
    }
    
    private func printProgress(total: Int, index: Int, targetName: String) {
        let state = (index + 1) * 100 / total
        let linking = "Linking: \(targetName)".padding(toLength: 45, withPad: " ", startingAt: 0)
        print("\(linking) Total modules generated: \(state)%")
    }
}
