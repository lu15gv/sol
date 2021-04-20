//
//  File.swift
//  
//
//  Created by Luis Antonio Gomez Vazquez on 05/04/21.
//

import Foundation

extension Array {
    func chunked(into size: Int) -> [[Element]] {
        return stride(from: 0, to: count, by: size).map {
            Array(self[$0 ..< Swift.min($0 + size, count)])
        }
    }
    
    func description(separator: String = "\n") -> String where Element == String {
        return description(for: self, with: separator)
    }
    
    func description(separator: String = "\n") -> String where Element == URL {
        let array = self.map{ $0.path }
        return description(for: array, with: separator)
    }
    
    private func description(for array: [String], with separator: String) -> String {
        var temp: String = ""
        for element in array {
            temp.append(element + separator)
        }
        return temp
    }
}
