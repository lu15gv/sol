//
//  File.swift
//  
//
//  Created by Luis Antonio Gomez Vazquez on 05/04/21.
//

import Foundation

struct Replaceable: Codable {
    let libraries: [Library]
}

struct Library: Codable {
    let name: String
    let symbols: [Symbol]
}

struct Symbol: Codable {
    let old: String?
    let new: String
    let regex: String?
}
