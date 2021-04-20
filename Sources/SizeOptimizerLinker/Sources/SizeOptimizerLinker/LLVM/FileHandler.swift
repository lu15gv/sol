//
//  File.swift
//  
//
//  Created by Luis Antonio Gomez Vazquez on 19/04/21.
//

import Foundation

struct FileHandler: Decodable {
    func save(text: String, to url: URL?) {
        guard let url = url else {
            print("ERROR: Unable to create url")
            exit(1)
        }
        do {
            try text.write(to: url, atomically: true, encoding: String.Encoding.utf8)
        } catch {
            print("ERROR: unable to save \(url.path)")
        }
    }
}
