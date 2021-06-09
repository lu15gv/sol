//
//  File.swift
//  
//
//  Created by Luis Antonio Gomez Vazquez on 26/05/21.
//

import Foundation

enum LLVMError: Error {
    case runtimeError(String)
}

extension LLVMError: LocalizedError {
    var errorDescription: String? {
        switch self {
        case .runtimeError(let message):
            return message
        }
    }
}
