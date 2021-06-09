//
//  File.swift
//  
//
//  Created by Luis Antonio Gomez Vazquez on 05/04/21.
//

import Foundation
import ArgumentParser

struct ClangLinker: ParsableCommand {
    
    private enum ArgumentError: LocalizedError {
        case xcodeBuildLogFile
        case linkFileList
        
        var errorDescription: String {
            switch self {
            case .xcodeBuildLogFile:
                return "ERROR: missing xcodeBuildLogFile path, please provide it."
            case .linkFileList:
                return "ERROR: unable to find linklist parameter."
            }
        }
    }
    
    static var configuration = CommandConfiguration(commandName: "clang-linker",
                                                    abstract: "Finds and parses linker arguments from Xcode log and runs linker with those arguments.")
    
    @Option(name: [.long], help: "File that contains Xcode link argumnets. Generate it with 'log-parser'")
    var linkArgumentsFile: String?
    
    @Flag(name: [.short, .long], help: "Wheter or not add bitcode. To enable this, you must have compiled with bitcode enabled.")
    var enableBitcode: Bool = false
    
    @Option(name: [.long], help: "LinkFileList path file.")
    var linkFileList: String?
    
    @Option(name: [.long], help: "Executable path file.")
    var executableFile: String?
    
    @Option(name: [.long], help: "Build configuration. 'Debug' or 'Release'")
    var configuration: String?
    
    func run() throws {
        let allArguments = try getLinkArgumentsFile().lines[0]
        let argumentsBitcode = bitcode(arguments: allArguments)
        let argumentsList = split(arguments: argumentsBitcode)
        let (argumentsWithoutStaticImports, staticNames) = try removeStaticLibrariesImports(arguments: argumentsList)
        let argumentsWithoutStaticCalls = removeStaticLibrariesCalls(arguments: argumentsWithoutStaticImports, staticNames: staticNames)
        let argmentsWithLinkFileList = try replace(value: linkFileList, for: "-filelist", in: argumentsWithoutStaticCalls)
        let argmentsWithOutput = try replace(value: executableFile, for: "-o", in: argmentsWithLinkFileList)
        let clang = argmentsWithOutput[0]
        var arguments = argmentsWithOutput
        arguments.remove(at: 0)
        // Shell debug
        print("Clang linker:\(clang)\nArguments:\n\(arguments.description(separator: " "))\n")
        shell(launchPath: clang, arguments: arguments)
    }

    private func getLinkArgumentsFile() throws -> LLVMFile {
        guard let linkArgumentsFile = linkArgumentsFile else {
            throw ArgumentError.xcodeBuildLogFile
        }
        let linkArgumentsFilePath = "file://" + linkArgumentsFile
        guard let linkArgumentsFileURL = URL(string: linkArgumentsFilePath) else {
            throw ArgumentError.xcodeBuildLogFile
        }
        let file = LLVMFile(url: linkArgumentsFileURL)
        return file
    }
    
    private func split(arguments: String) -> [String] {
        let arguments = arguments.replacingOccurrences(of: "\\\\ ", with: "\\*").replacingOccurrences(of: "\\ ", with: "\\*")
        let array = arguments.split(separator: " ").map{ String($0.replacingOccurrences(of: "\\*", with: " ")) }
        return array
    }
    
    private func removeStaticLibrariesImports(arguments: [String]) throws -> (arguments: [String], staticNames: [String]) {
        var argumentsFiltered: [String] = []
        var staticNames: [String] = []
        let llvmConfiguration = try LLVMConfiguration(configuration: configuration)
        for argument in arguments {
            if argument.hasPrefix("-L") && argument.contains("\(llvmConfiguration.path)/") {
                print("removed \(argument)")
                if let name = argument.split(separator: "/").last {
                    staticNames.append(String(name))
                }
            } else {
                argumentsFiltered.append(argument)
            }
        }
        return (argumentsFiltered, staticNames)
    }
    
    private func removeStaticLibrariesCalls(arguments: [String], staticNames: [String]) -> [String] {
        var argumentsFiltered: [String] = []
        outerLoop: for argument in arguments {
            if argument.hasPrefix("-l") {
                for staticName in staticNames {
                    let fullName = "-l" + staticName
                    if argument == fullName {
                        continue outerLoop
                    }
                }
                argumentsFiltered.append(argument)
            } else {
                argumentsFiltered.append(argument)
            }
        }
        return argumentsFiltered
    }
    
    private func bitcode(arguments: String) -> String {
        var arguments = arguments
        if !enableBitcode {
            arguments = arguments.replacingOccurrences(of: "-fembed-bitcode ", with: "")
//            arguments = arguments.replacingOccurrences(of: "-Xlinker -bitcode_verify -Xlinker -bitcode_hide_symbols ", with: "")
        }
        return arguments
    }
    
    private func replace(value: String?, for flag: String, in arguments: [String]) throws -> [String] {
        if let flagIndex = arguments.firstIndex(of: flag),
           let value = value {
            let valueIndex = flagIndex + 1
            var arguments = arguments
            arguments[valueIndex] = value
            return arguments
        } else {
            throw ArgumentError.linkFileList
        }
    }
}
