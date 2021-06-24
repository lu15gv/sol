//
//  File.swift
//  
//
//  Created by Luis Antonio Gomez Vazquez on 19/04/21.
//

import Foundation
import ArgumentParser

struct LogParser: ParsableCommand {
    
    static var configuration = CommandConfiguration(commandName: "log-parser",
                                                    abstract: "It finds and parses linker arguments from Xcode log and runs linker with those arguments.")
    
    @Option(name: [.long], help: "File that contains Xcode build file.")
    var xcodeBuildLogFile: String?
    
    @Option(name: [.long], help: "Project name.")
    var project: String?
    
    @Option(name: [.long], help: "Target name.")
    var target: String?
    
    @Option(name: [.long], help: "Path were outputs will be saved.")
    var outputs: String?
    
    @Option(name: [.long], help: "Build configuration. 'Debug' or 'Release'")
    var configuration: String?
    
    func run() throws {
        let xcodeBuildLogFile = try getLogFile()
        let lines = xcodeBuildLogFile.lines
        let allArguments = try getAllLinkerArguments(lines: lines)
        let cleanedArguments = clean(arguments: allArguments)
        guard let project = project else {
            throw LLVMError.runtimeError("Missing '--project' parameter. Please provide it")
        }
        let derivedDataPaths = try getDerivedDataPaths(lines: lines, project: project)
        let derivedDataPathsRaw = derivedDataPaths.getRawFormat()
        let certificateID = try getCertificateID(lines: lines)
        guard let outputs = outputs else {
            throw LLVMError.runtimeError("Missing '--outputs' parameter. Please provide it")
        }
        let env = derivedDataPathsRaw + "\nCERT_ID=" + certificateID
        let envPath = "file://" + outputs + "/env.sh"
        let linkerArgumentsPath = "file://" + outputs + "/base_link_arguments.txt"
        let fileHandler: FileHandler = FileHandler()
        fileHandler.save(text: env, to: URL(string: envPath))
        fileHandler.save(text: cleanedArguments, to: URL(string: linkerArgumentsPath))
    }
    
    private func getLogFile() throws -> LLVMFile {
        guard let xcodeBuildLogFile = xcodeBuildLogFile else {
            throw LLVMError.runtimeError("Missing '--xcode-build-log-file'. Please provide it")
        }
        let xcodeBuildLogFilePath = "file://" + xcodeBuildLogFile
        guard let xcodeBuildLogFileURL = URL(string: xcodeBuildLogFilePath) else {
            throw LLVMError.runtimeError("Unable to create url for strinf url: \(xcodeBuildLogFilePath)")
        }
        let file = LLVMFile(url: xcodeBuildLogFileURL)
        return file
    }
    
    private func getAllLinkerArguments(lines: [String]) throws -> String {
        guard let target = target, let project = project else {
            throw LLVMError.runtimeError("Missing '--target' and/or '--project' name parameters. Please provide them")
        }
        let index = lines.firstIndex(where: { $0.contains("Ld ") && $0.contains("(in target '\(target)' from project '\(project)')") })
        guard let linkerDescriptionIndex = index else {
            throw LLVMError.runtimeError("Unable to find 'Ld' line in xcodebuild.log wich contains: '(in target '\(target)' from project '\(project)')'")
        }
        let linkerArgumentsIndex = linkerDescriptionIndex + 2
        return lines[linkerArgumentsIndex]
    }
    
    private func getDerivedDataPaths(lines: [String], project: String) throws -> DerivedDataPaths {
        return try DerivedDataPaths(lines: lines, projectName: project, configuration: configuration)
    }
    
    private func getCertificateID(lines: [String]) throws -> String {
        if let codeSign = lines.first(where: { $0.contains("/usr/bin/codesign --force --sign ") }) {
            let slices = codeSign.replacingOccurrences(of: "/usr/bin/codesign --force --sign ", with: "")
            let id = slices.split(separator: " ")[0]
            return String(id)
        } else {
            throw LLVMError.runtimeError("Unable to find codesign line in xcodebuild.log wich conatins: '/usr/bin/codesign --force --sign '")
        }
    }
    
    private func clean(arguments: String) -> String {
        return arguments.replacingOccurrences(of: "    ", with: "")
    }
}
