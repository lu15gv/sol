//
//  File.swift
//  
//
//  Created by Luis Antonio Gomez Vazquez on 05/04/21.
//

import Foundation

struct LLVMFile {
    
    private var raw: String
    let url: URL
    var lines: [String] = []
    
    init(url: URL) {
        let path = "file://" + url.path
        
        guard let url = URL(string: path) else {
            print("ERROR: unable to create url")
            exit(1)
        }
        
        guard let raw = try? String(contentsOf: url, encoding: .utf8) else {
            print("ERROR: unable to parse '\(url.path)'")
            exit(1)
        }
        self.url = url
        self.raw = raw
        self.update()
    }
    
    init(url: String) {
    
        let path = "file://" + url
        
        guard let url = URL(string: path) else {
            print("ERROR: unable to create url")
            exit(1)
        }
        
        guard let raw = try? String(contentsOf: url, encoding: .utf8) else {
            print("ERROR: unable to parse '\(url.path)'")
            exit(1)
        }
        self.url = url
        self.raw = raw
        self.update()
    }
    
    private mutating func update() {
        self.lines = raw.split(separator: "\n").map{ String($0) }
    }
    
    mutating func replace(old: String, new: String) {
        print("Replacing \(old) with \(new)")
        self.raw = raw.replacingOccurrences(of: old, with: new)
        self.update()
    }
    
    mutating func replace(regex: String, with new: String) {
        guard let regularExpression = try? NSRegularExpression(pattern: regex, options: NSRegularExpression.Options.caseInsensitive) else {
            print("WARNING: invalid regex \(regex)")
            return
        }
        print("Replacing regex \(regex) with \(new)")
        let range = NSMakeRange(0, raw.count)
        self.raw = regularExpression.stringByReplacingMatches(in: raw, options: [], range: range, withTemplate: new)
    }
    
    func save() {
        do {
            try raw.write(to: url, atomically: true, encoding: String.Encoding.utf8)
        } catch {
            print("ERROR: unable to save \(url.path)")
        }
    }
}
