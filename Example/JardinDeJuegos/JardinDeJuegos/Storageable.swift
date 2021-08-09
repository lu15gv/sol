//
//  Storageable.swift
//  JardinDeJuegos
//
//  Created by Luis Antonio Gomez Vazquez on 16/10/20.
//

import Foundation

public protocol Unarchivable {
    static func unarchiveTopLevelObjectWithData(_ data: Data) throws -> Any?
}

extension NSKeyedUnarchiver: Unarchivable { }

/// Protocol that can set get retrieve values
public protocol Storageable {
    func value(forKey key: String) -> Any?
    func set(_ value: Any?, forKey defaultName: String)
    func setValue(_ value: Any?, forKey key: String)
    func integer(forKey: String) -> Int
    func string(forKey: String) -> String?
    func data(forKey: String) -> Data?
    func bool(forKey: String) -> Bool
    func double(forKey: String) -> Double
    func object(forKey defaultName: String) -> Any?
    func removeObject(forKey key: String)
    @discardableResult
    func synchronize() -> Bool
}

extension UserDefaults: Storageable { }
