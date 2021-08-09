//
//  JardinDeJuegosTests.swift
//  JardinDeJuegosTests
//
//  Created by Luis Antonio Gomez Vazquez on 16/10/20.
//

import XCTest
@testable import JardinDeJuegos


class UnarchivableMock: Unarchivable {
    static func unarchiveTopLevelObjectWithData(_ data: Data) throws -> Any? {
        return data
    }
}

public class UserStorageMock: Storageable {
    
    public var userData: [String: Any]

    public init() {
        userData = [:]
    }

    public func value(forKey key: String) -> Any? {
        return userData[key]
    }

    public func set(_ value: Any?, forKey defaultName: String) {
        if let value = value {
            userData[defaultName] = value
        } else {
            userData.removeValue(forKey: defaultName)
        }
    }
    
    public func setValue(_ value: Any?, forKey key: String) {
        set(value, forKey: key)
    }
    
    public func synchronize() -> Bool {
        return true
    }
    
    public func integer(forKey: String) -> Int {
        return value(forKey: forKey) as? Int ?? 0
    }

    public func string(forKey: String) -> String? {
        return value(forKey: forKey) as? String
    }

    public func data(forKey: String) -> Data? {
        return value(forKey: forKey) as? Data
    }

    public func bool(forKey: String) -> Bool {
        return value(forKey: forKey) as? Bool ?? false
    }

    public func double(forKey: String) -> Double {
        return value(forKey: forKey) as? Double ?? 0
    }
    
    public func object(forKey defaultName: String) -> Any? {
        return value(forKey: defaultName)
    }

    public func removeObject(forKey key: String) {
        set(nil, forKey: key)
    }
}

class LocalStorageTests: XCTestCase {
    
    var sut: LocalStorage?
    var storageMock: UserStorageMock?
    
    override func setUp() {
        let storageMock = UserStorageMock()
        self.storageMock = storageMock
        LocalStorage.storageable = storageMock
        LocalStorage.unarchivable = UnarchivableMock.self
        sut = LocalStorage(defaults: storageMock)
    }
    
    override func tearDown() {
        sut = nil
        storageMock = nil
    }
    
    func testSave() {
        // GIVEN
        let expectedValue = true
        let key = "key"
        
        // WHEN
        sut?.save(data: expectedValue, with: key)
        
        // THEN
        guard let obtainedValue = storageMock?.userData[key] as? Bool else {
            XCTFail("Data should exist")
            return
        }
        
        XCTAssertEqual(obtainedValue, expectedValue)
    }
    
    func testGetData() {
        // GIVEN
        let expectedValue = "Some strings"
        let key = "key"
        sut?.save(data: expectedValue, with: key)
        // WHEN
        let data = sut?.getData(from: key)
        // THEN
        guard let obtainedValue = data as? String else {
            XCTFail("Data should exist")
            return
        }
        XCTAssertEqual(obtainedValue, expectedValue)
    }
    
    func testLocalStorageFormatterHasSuffix() {
        // GIVEN
        let expectedKey = "Test_Local_Storage"
        let testKey = expectedKey
        // WHEN
        let obtainedKey = LocalStorageFormatter.format(key: testKey)
        // THEN
        XCTAssertEqual(obtainedKey, expectedKey)
    }
    
    func testLocalStorageFormatterNoSuffix() {
        // GIVEN
        let expectedKey = "Test_Local_Storage"
        let testKey = "Test"
        // WHEN
        let obtainedKey = LocalStorageFormatter.format(key: testKey)
        // THEN
        XCTAssertEqual(obtainedKey, expectedKey)
    }
    
    func testGetValue() {
        // GIVEN
        let key = "Test_Local_Storage"
        let expectedValue = Data(base64Encoded: "hola")
        storageMock?.userData[key] = expectedValue
        // WHEN
        guard let obtainedValue = LocalStorage.getValue(for: key) as? Data else {
            XCTFail("Data should exist")
            return
        }
        // THEN
        XCTAssertEqual(obtainedValue, expectedValue)
    }
    
    func testGetValueT() {
        // GIVEN
        let expectedValue = 123123.123
        let key = "key_Local_Storage"
        storageMock?.userData = [key: expectedValue]
        // WHEN
        let data = LocalStorage.getValueT(for: key)
        // THEN
        guard let obtainedValue = data as? Double else {
            XCTFail("Data should exist and be double")
            return
        }
        XCTAssertEqual(obtainedValue, expectedValue)
    }

    func testGetValueForKey() {
        // GIVEN
        let expectedValue = Data(base64Encoded: "hola")
        let key = "key_Local_Storage"
        storageMock?.userData = [key: expectedValue as Any]
        // WHEN
        let data = LocalStorage.getValueForKey(key)
        // THEN
        guard let obtainedValue = data as? Data else {
            XCTFail("Data should exist and be Data")
            return
        }
        XCTAssertEqual(obtainedValue, expectedValue)
    }
    
    func testSetObjectWithFormat() {
        // GIVEN
        let expectedValue = "Some string"
        let key = "key"
        let expectedKey = "key_Local_Storage"
        // WHEN
        LocalStorage.setObject(expectedValue, with: key, addFormatToKey: true)
        // THEN
        guard let obtainedValue = storageMock?.userData[expectedKey] as? String else {
            XCTFail("Data should exist and be String")
            return
        }
        XCTAssertEqual(obtainedValue, expectedValue)
    }
    
    func testSetObjectWithOutFormat() {
        // GIVEN
        let expectedValue = "Some string"
        let key = "key_Local_Storage"
        // WHEN
        LocalStorage.setObject(expectedValue, with: key, addFormatToKey: false)
        // THEN
        guard let obtainedValue = storageMock?.userData[key] as? String else {
            XCTFail("Data should exist and be String")
            return
        }
        XCTAssertEqual(obtainedValue, expectedValue)
    }
    
    func testSetObject() {
        // GIVEN
        let expectedValue = ["key": 4]
        let key = "key_Local_Storage"
        // WHEN
        LocalStorage.setObject(expectedValue, withKey: key)
        // THEN
        guard let obtainedValue = storageMock?.userData[key] as? [String: Int] else {
            XCTFail("Data should exist and be [String: Int]")
            return
        }
        XCTAssertEqual(obtainedValue, expectedValue)
    }
    
    func testSetObjectDefaultValue() {
        // GIVEN
        let expectedValue = ["key": "asd"]
        let key = "key_Local_Storage"
        // WHEN
        LocalStorage.setObject(expectedValue, with: key)
        // THEN
        guard let obtainedValue = storageMock?.userData[key] as? [String: String] else {
            XCTFail("Data should exist and be [String: String]")
            return
        }
        XCTAssertEqual(obtainedValue, expectedValue)
    }
    
    func testRemoveObject() {
        // GIVEN
        let key = "key_Local_Storage"
        storageMock?.userData[key] = 13
        // WHEN
        LocalStorage.removeObject(for: key)
        // THEN
        XCTAssertNil(storageMock?.userData[key])
    }
    
    func testRemoveObjectForKey() {
        // GIVEN
        let key = "key_Local_Storage"
        storageMock?.userData[key] = ["key": 3.1]
        // WHEN
        LocalStorage.removeObject(forKey: key)
        // THEN
        XCTAssertNil(storageMock?.userData[key])
    }
    
    func testRemoveData() {
        // GIVEN
        let key = "key"
        storageMock?.userData[key] = Data()
        // WHEN
        sut?.removeData(forKey: key)
        // THEN
        XCTAssertNil(storageMock?.userData[key])
    }
}
