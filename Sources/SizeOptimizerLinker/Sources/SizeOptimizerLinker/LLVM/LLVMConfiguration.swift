//
//  File.swift
//  
//
//  Created by Luis Antonio Gomez Vazquez on 26/05/21.
//

import Foundation

enum LLVMConfiguration: String {
    case debug = "Debug"
    case release = "Release"
    init(configuration: String?) throws {
        if let configuration = configuration {
            if let llvmConfiguration = LLVMConfiguration.init(rawValue: configuration) {
                self = llvmConfiguration
            } else {
                throw LLVMError.runtimeError("Configuration '\(configuration)' not supported, please add support to it in LLVMConfiguration")
            }
        } else {
            throw LLVMError.runtimeError("Missing configuration flag. Please provide it")
        }
    }
    var path: String {
        switch self {
        case .debug:   return "Debug-iphoneos"
        case .release: return "Release-iphoneos"
        }
    }
}
