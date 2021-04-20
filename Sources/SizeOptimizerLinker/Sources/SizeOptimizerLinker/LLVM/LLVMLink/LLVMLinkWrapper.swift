//
//  File 2.swift
//  
//
//  Created by Luis Antonio Gomez Vazquez on 05/04/21.
//

import Foundation

struct LLVMLinkWrapper {
    
    private let chunkInstructionSize = 500
    private let llvmLinkPath: String
    
    init(llvmLinkPath: String?) {
        guard let llvmLinkPath = llvmLinkPath else {
            print("ERROR: missing llvm-link path, please provide it")
            exit(1)
        }
        self.llvmLinkPath = llvmLinkPath
    }
    
    func link(linkFilesPaths: [String], outputFileName: String) {
        let chunks = linkFilesPaths.chunked(into: chunkInstructionSize)
        let total = chunks.count
        for (index, chunk) in chunks.enumerated() {
            link(index: index, total: total, chunk: chunk, outputFileName: outputFileName)
        }
    }
    
    private func link(index: Int, total: Int, chunk: [String], outputFileName: String) {
        var arguments = chunk + ["-o", outputFileName]
        if index > 0 {
            arguments = [outputFileName] + arguments
        }
        shell(launchPath: llvmLinkPath, arguments: arguments)
        printProgress(total: total, index: index)
    }
    
    private func printProgress(total: Int, index: Int) {
        let state = (index + 1) * 100 / total
        print("Linking... \(state)%")
    }
}
