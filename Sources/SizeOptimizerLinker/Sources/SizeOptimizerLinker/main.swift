//
//  File.swift
//  
//
//  Created by Luis Antonio Gomez Vazquez on 18/04/21.
//

import ArgumentParser

struct LLVM: ParsableCommand {
    static var configuration = CommandConfiguration(commandName: "llvm",
                                                    abstract: "It creates linked files to be used in sizeOptimizer script",
                                                    version: "0.1",
                                                    subcommands: [LLVMLink.self, ClangLinker.self, LogParser.self])
}

LLVM.main()
