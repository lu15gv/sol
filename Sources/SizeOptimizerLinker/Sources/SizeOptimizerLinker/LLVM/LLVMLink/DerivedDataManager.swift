//
//  File 2.swift
//  
//
//  Created by Luis Antonio Gomez Vazquez on 05/04/21.
//

import Foundation

struct DerivedData {
    var linkFileList: [URL] = []
    var swiftFileList: [URL] = []
}

struct DerivedDataManager {
    
    var data: DerivedData = DerivedData()
    let paths: DerivedDataPaths
    private let llvmConfiguration: LLVMConfiguration
    
    init(derivedDataPaths: DerivedDataPaths, configuration: String?) throws {
        self.paths = derivedDataPaths
        let llvmConfiguration = try LLVMConfiguration(configuration: configuration)
        self.llvmConfiguration = llvmConfiguration
        //../DerivedData/RappiUI-ezrfcixsrofvcxbcisyqamzioovk/Build/Intermediates.noindex/ArchiveIntermediates/RappiUI-Example/IntermediateBuildFilesPath
        let intermediates = derivedDataPaths.path(for: .objRoot)

        // ../IntermediateBuildFilesPath/Pods.build
        // ../IntermediateBuildFilesPath/RappiUI.build
        // ...
        let projects = getAllProjects(intermediates: intermediates)
        
        // ../IntermediateBuildFilesPath/Pods.build/Release-iphoneos
        // ../IntermediateBuildFilesPath/RappiUI.build/Release-iphoneos
        // ...
        let releaseiPhoneos = projects.map{ append(llvmConfiguration.path, to: $0) }
        
        // ../Release-iphoneos/Alamofire.build
        // ../Release-iphoneos/AppConfig.build
        // ...
        let targets = getAllTargets(releaseiPhoneos: releaseiPhoneos)

        // ../Release-iphoneos/Alamofire.build/Objects-normal/arm64
        // ../Release-iphoneos/AppConfig.build/Objects-normal/arm64
        // ...
        let arm64 = targets.map{ append("Objects-normal/arm64", to: $0) }
        
        // LinkFileList
        // ../Alamofire.build/Objects-normal/arm64/Alamofire.LinkFileList
        // ../AppConfig.build/Objects-normal/arm64/AppConfig.LinkFileList
        // ...
        
        // SwiftFileList
        // ../Alamofire.build/Objects-normal/arm64/Alamofire.SwiftFileList
        // ../AppConfig.build/Objects-normal/arm64/AppConfig.SwiftFileList
        // ...
        let (linkFileList, swiftFileList) = getAllLinkFilesByTarget(arm64: arm64)
        
        self.data = DerivedData(linkFileList: linkFileList, swiftFileList: swiftFileList)
    }
    
    
    private func getAllProjects(intermediates: String) -> [URL] {
        guard let intermediatesURL = URL(string: intermediates) else {
            print("ERROR: unable to create \(intermediates) url")
            exit(1)
        }
        
        guard let projects = intermediatesURL.contentsOfDirectory() else {
            print("ERROR: no project directories found in \(intermediates)")
            exit(1)
        }
        
        return projects
    }
    
    private func getAllTargets(releaseiPhoneos: [URL]) -> [URL] {
        var targets: [URL] = []
        releaseiPhoneos.forEach { (project) in
            guard let projectTargets = project.contentsOfDirectory() else {
                return
            }
            targets.append(contentsOf: projectTargets)
        }
        return targets
    }
    
    private func getAllLinkFilesByTarget(arm64: [URL]) -> (linkFileList: [URL], swiftFileList: [URL]) {
        var temporalLinkFileList: [URL] = []
        var temporalSwiftlists: [URL] = []
        arm64.forEach { (target) in
            guard let buildTargetFiles = target.contentsOfDirectory() else {
                return
            }
            let linkFileList = buildTargetFiles.filter{ $0.path.hasSuffix(".LinkFileList") }
            let swiftFileList = buildTargetFiles.filter{ $0.path.hasSuffix(".SwiftFileList") }
            if !linkFileList.isEmpty {
                temporalLinkFileList.append(contentsOf: linkFileList)
            }
            if !swiftFileList.isEmpty {
                temporalSwiftlists.append(contentsOf: swiftFileList)
            }
        }
        return (temporalLinkFileList, temporalSwiftlists)
    }
    
    private func append(_ sufix: String, to original: URL) -> URL {
        guard let url = URL(string: original.path + "/" + sufix) else {
            print("ERROR: unable to create url")
            exit(1)
        }
        return url
    }
    
    func getTargetName(forOutputFileName outputFileName: String) -> String? {
        let outputFilePathSections = outputFileName.split(separator: "/")
        guard let releaseIphoneosIndex = outputFilePathSections.firstIndex(where: { $0 == llvmConfiguration.path } ) else {
            print("ERROR, module not found for: \(outputFileName)")
            return nil
        }
        let targetNameIndex = releaseIphoneosIndex + 1
        let targetName = String(outputFilePathSections[targetNameIndex])
        return targetName
    }
    
    func getModuleName(forTargetName targetName: String, outputFileName: String) -> String? {
        var moduleName = ""
        // Eg: AppConfig.build
        let shortTargetName = targetName.split(separator: ".")[0] // Eg: AppConfig
        // ../DerivedData/../BuildProductsPath/Release-iphoneos/AppConfig
        let modulePath = paths.path(for: .builtProductsDir) + "/" + shortTargetName
        if let moduleContentPaths = URL(string: modulePath)?.contentsOfDirectory(),
           let finallModuleName = getModuleName(fromTarget: targetName, moduleContentPaths: moduleContentPaths) {
            moduleName = finallModuleName
        } else {
            guard let finallModuleName = getModuleName(fromOutputFileName: outputFileName) else {
                return nil
            }
            moduleName = finallModuleName
        }
        return moduleName
    }
    
    private func getModuleName(fromTarget targetName: String, moduleContentPaths: [URL]) -> String? {
        // ../DerivedData/../BuildProductsPath/Release-iphoneos/AppConfig.modulemap
        guard let moduleMap = moduleContentPaths.first(where: { $0.path.hasSuffix(".modulemap")} ) else {
            return nil
        }
        
        // AppConfig
        // Note: shortTargetName and moduleName are not always equal
        guard let swiftModuleName = moduleMap.path.split(separator: "/").last?.split(separator: ".").first else {
            print("ERROR: couldn't generate module name for: \(moduleMap)")
            return nil
        }
        return String(swiftModuleName)
    }
    
    private func getModuleName(fromOutputFileName outputFileName: String) -> String? {
        // ...IntermediateBuildFilesPath/Olimpica.build/.../RappiDefaultServiceHeaderConfiguration.o
        let outputFileNameComponents = outputFileName.split(separator: "/")
        guard let index = outputFileNameComponents.firstIndex(where: { $0 == "IntermediateBuildFilesPath" } ) else {
            print("ERROR: IntermediateBuildFilesPath not found for: \(outputFileName)")
            return nil
        }
        let moduleNameIndex = index + 1
        let fullModuleName = outputFileNameComponents[moduleNameIndex]
        // Olimpica.build
        let moduleName = fullModuleName.split(separator: ".")
        return String(moduleName[0])
    }
    
    /// It uses .SwiftFileList to find wath paths from .LinkFileList where generated from a swift file (.LinkFileList contains MachO path files from swift, objectice-c, c++ and c files).
    /// - Parameters:
    ///   - linkFile: File data for current target .LinkFileList
    ///   - swiftFileList: Array of URLs for .SwiftFileList
    /// - Returns: Array of .bc file paths. .bc paths correspond only to IR files that were generated by a swift file.
    func getSwiftIRFiles(linkFile: LLVMFile) -> [String] {
        // IR: Intermediate Representation, for swift files -> .bc
        let allIRPaths = linkFile.lines
        var swiftIRPaths: [String] = []
        //.../DerivedData/RappiUI-ezrfcixsrofvcxbcisyqamzioovk/.../AppConfig.build/Objects-normal/arm64/AppConfig-dummy.o
        var rootPath = allIRPaths[0].split(separator: "/")
        _ = rootPath.popLast()
        //.../DerivedData/RappiUI-ezrfcixsrofvcxbcisyqamzioovk/.../AppConfig.build/Objects-normal/arm64/
        let root = rootPath.joined(separator: "/")
        //.../DerivedData/RappiUI-ezrfcixsrofvcxbcisyqamzioovk/.../AppConfig.build/Objects-normal/arm64/AppConfig.SwiftFileList
        let expectedSwiftFileList = linkFile.url.path.replacingOccurrences(of: ".LinkFileList", with: ".SwiftFileList")
        if let expectedURL = URL(string: "file://" + expectedSwiftFileList), data.swiftFileList.contains(expectedURL) {
            // SwiftFileList exists
            let swiftFileNames = LLVMFile(url: expectedURL).lines.map{ String($0.split(separator: "/").last!) }

            for swiftFileName in swiftFileNames {
                var slices = swiftFileName.split(separator: ".")
                let lastIndex = slices.count - 1
                slices[lastIndex] = "o"
                let swiftFileNameNewExtension = slices.joined(separator: ".")
                var swiftObjectPath = "/" + root + "/" + swiftFileNameNewExtension
                swiftObjectPath = swiftObjectPath.replacingOccurrences(of: "\\", with: "")
                if let index = allIRPaths.firstIndex(where: { $0 == swiftObjectPath}) {
                    let swiftIRPath = allIRPaths[index].replacingOccurrences(of: ".o", with: ".bc")
                    swiftIRPaths.append(swiftIRPath)
                }
            }
        }
        return swiftIRPaths
    }
}
