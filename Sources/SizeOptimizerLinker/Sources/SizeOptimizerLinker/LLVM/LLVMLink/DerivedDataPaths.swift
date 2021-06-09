//
//  File 2.swift
//  
//
//  Created by Luis Antonio Gomez Vazquez on 05/04/21.
//

import Foundation

struct DerivedDataPaths {
    
    enum DependencyName: String {
        case objRoot = "OBJROOT"
        case builtProductsDir = "BUILT_PRODUCTS_DIR"
    }
    
    private var dependenciesPaths: [String: String] = [:]
    
    init(dependenciesPathsFile: String?) {
        guard let dependenciesPathsFile = dependenciesPathsFile else {
            print("ERROR: Missing dependencies paths")
            exit(1)
        }
        
        let path = "file://" + dependenciesPathsFile
        
        guard let url = URL(string: path) else {
            print("ERROR: unable to create '\(dependenciesPathsFile)' URL")
            exit(1)
        }
        
        guard let dependenciesNamesAndPathsRaw = try? String(contentsOf: url, encoding: .utf8) else {
            print("ERROR: unable to parse dependencies for url: \(url)")
            exit(1)
        }
        
        self.init(raw: dependenciesNamesAndPathsRaw)
    }
    
    init(lines: [String], projectName: String, configuration: String?) throws {
        let llvmConfiguration = try LLVMConfiguration(configuration: configuration)
        if let builtProductsDir = lines.first(where: { $0.contains("export BUILT_PRODUCTS_DIR\\") && $0.hasSuffix("/\(llvmConfiguration.path)") }) {
            self.dependenciesPaths["BUILT_PRODUCTS_DIR"] = clean(raw: builtProductsDir, key: "BUILT_PRODUCTS_DIR")
        }
        if let objRoot = lines.first(where: { $0.contains("export OBJROOT\\")} ) {
            self.dependenciesPaths["OBJROOT"] = clean(raw: objRoot, key: "OBJROOT")
        }
        if let contentsFolderPath = lines.first(where: { $0.contains("export CONTENTS_FOLDER_PATH\\") && $0.hasSuffix(".app") }) {
            self.dependenciesPaths["CONTENTS_FOLDER_PATH"] = clean(raw: contentsFolderPath, key: "CONTENTS_FOLDER_PATH")
        }
        if let configurationTempDir = lines.first(where: { $0.contains("export CONFIGURATION_TEMP_DIR\\") && $0.hasSuffix("\(projectName).build/\(llvmConfiguration.path)") }) {
            self.dependenciesPaths["CONFIGURATION_TEMP_DIR"] = clean(raw: configurationTempDir, key: "CONFIGURATION_TEMP_DIR")
        }
    }
    
    private func clean(raw: String, key: String) -> String {
        return raw.replacingOccurrences(of: "    export \(key)\\=", with: "")
    }
    
    private init(raw dependenciesNamesAndPathsRaw: String) {
        
        /* Raw example:
         
        BUILT_PRODUCTS_DIR=/.../DerivedData/.../Release-iphoneos
        OBJROOT=/.../DerivedData/.../IntermediateBuildFilesPath
         
         */

        let dependenciesNamesAndPaths = dependenciesNamesAndPathsRaw.split(separator: "\n")
        var temporalDependenciesPaths: [String: String] = [:]
        for dependencyNameAndPathRaw in dependenciesNamesAndPaths {
            let dependencyNameAndPath = dependencyNameAndPathRaw.split(separator: "=")
            let dependencyName = String(dependencyNameAndPath[0])
            let dependencyPath = String(dependencyNameAndPath[1])
            temporalDependenciesPaths[dependencyName] = dependencyPath
        }
        self.dependenciesPaths = temporalDependenciesPaths
    }
}

// MARK: - Internal methods

extension DerivedDataPaths {
    func path(for dependencyName: DependencyName) -> String {
        if let dependencyPath = dependenciesPaths[dependencyName.rawValue] {
            return dependencyPath
        } else {
            print("ERRROR: missing '\(dependencyName.rawValue)' path")
            exit(1)
        }
    }
}

extension DerivedDataPaths {
    func getRawFormat() -> String {
        let keyAndPaths = self.dependenciesPaths.map{ $0.key + "=" + $0.value }
        return keyAndPaths.joined(separator: "\n")
    }
}
