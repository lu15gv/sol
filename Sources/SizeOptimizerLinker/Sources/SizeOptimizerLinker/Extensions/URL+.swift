//
//  File.swift
//  
//
//  Created by Luis Antonio Gomez Vazquez on 05/04/21.
//

import Foundation

extension URL {
    func contentsOfDirectory() -> [URL]? {
        let fileManager = FileManager.default
        guard let directories = try? fileManager.contentsOfDirectory(at: self, includingPropertiesForKeys: nil) else {
            return nil
        }
        return directories
    }
}
