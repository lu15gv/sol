//
//  File.swift
//  
//
//  Created by Luis Antonio Gomez Vazquez on 08/04/21.
//

import Foundation

// It's not possible to override launchPath in shellOut
// That's the reason of this

func shell(launchPath: String, arguments: [String]) {
    let task = Process()
    task.launchPath = launchPath
    task.arguments = arguments
    task.launch()
    task.waitUntilExit()
    if task.terminationStatus != 0 {
        print("Task failed")
        exit(task.terminationStatus)
    }
}
