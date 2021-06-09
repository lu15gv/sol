//
//  File.swift
//  
//
//  Created by Luis Antonio Gomez Vazquez on 19/04/21.
//

import Foundation
import ArgumentParser

struct LogParser: ParsableCommand {
    
    private enum ArgumentError: LocalizedError {
        case xcodeBuildLogFile
        
        var errorDescription: String {
            switch self {
            case .xcodeBuildLogFile:
                return "ERROR: missing xcodeBuildLogFile path, please provide it."
            }
        }
    }
    
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
            throw ArgumentError.xcodeBuildLogFile
        }
        let derivedDataPaths = try getDerivedDataPaths(lines: lines, project: project)
        let derivedDataPathsRaw = derivedDataPaths.getRawFormat()
        let certificateID = try getCertificateID(lines: lines)
        guard let outputs = outputs else {
            throw ArgumentError.xcodeBuildLogFile
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
            throw ArgumentError.xcodeBuildLogFile
        }
        let xcodeBuildLogFilePath = "file://" + xcodeBuildLogFile
        guard let xcodeBuildLogFileURL = URL(string: xcodeBuildLogFilePath) else {
            throw ArgumentError.xcodeBuildLogFile
        }
        let file = LLVMFile(url: xcodeBuildLogFileURL)
        return file
    }
    
    private func getAllLinkerArguments(lines: [String]) throws -> String {
        guard let target = target, let project = project else {
            throw ArgumentError.xcodeBuildLogFile
        }
        let index = lines.firstIndex(where: { $0.contains("Ld ") && $0.contains("(in target '\(target)' from project '\(project)')") })
        guard let linkerDescriptionIndex = index else {
            throw ArgumentError.xcodeBuildLogFile
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
            throw ArgumentError.xcodeBuildLogFile
        }
    }
    
    private func clean(arguments: String) -> String {
        return arguments.replacingOccurrences(of: "    ", with: "")
    }
}
