//
//  AppConfigValueTests.swift
//  JardinDeJuegosTests
//
//  Created by Luis Antonio Gomez Vazquez on 19/10/20.
//

import XCTest
@testable import JardinDeJuegos

class AppConfigValueTests: XCTestCase {
    
    var provider: AppConfigProviderMock?
    
    override func setUp() {
        provider = AppConfigProviderMock()
        
    }
    
    override func tearDown() {
        provider = nil
    }
    
    
    func testTRafficType() {
        // GIVEN
        let key = "key"
        let trafficType = "test"
        self.provider?.trafficType = trafficType
        let testKey = key + "_" + trafficType
        let expectedValue: Int = 5
        self.provider?.data[testKey] = String(expectedValue)
        guard let provider = provider else {
            return
        }
        // WHEN
        let appConfig = AppConfigValue<Int>.init(key: key,
                                                 defaultValue: 0,
                                                 provider: provider,
                                                 appendTrafficType: true)
        
        // THEN
        let obtainedValue = appConfig.value
        XCTAssertEqual(expectedValue, obtainedValue)
    }
    
    func testValueInt() {
        // GIVEN
        let key = "key"
        let expectedValue: Int = 5
        self.provider?.data[key] = String(expectedValue)
        guard let provider = provider else {
            return
        }
        // WHEN
        let appConfig = AppConfigValue<Int>.init(key: key,
                                                 defaultValue: 0,
                                                 provider: provider,
                                                 appendTrafficType: false)
        
        // THEN
        let obtainedValue = appConfig.value
        XCTAssertEqual(expectedValue, obtainedValue)
    }
    
    func testValueFloat() {
        // GIVEN
        let key = "key"
        let expectedValue: Float = 5.5
        provider?.data[key] = String(expectedValue)
        guard let provider = provider else {
            return
        }
        
        // WHEN
        let appConfig = AppConfigValue<Float>.init(key: key,
                                                   defaultValue: 0,
                                                   provider: provider,
                                                   appendTrafficType: false)
        
        // THEN
        let obtainedValue = appConfig.value
        XCTAssertEqual(expectedValue, obtainedValue)
    }
    
    func testValueDouble() {
        // GIVEN
        let key = "key"
        let expectedValue: Double = 5.5
        provider?.data[key] = String(expectedValue)
        guard let provider = provider else {
            return
        }
        
        // WHEN
        let appConfig = AppConfigValue<Double>.init(key: key,
                                                   defaultValue: 0,
                                                   provider: provider,
                                                   appendTrafficType: false)
        
        // THEN
        let obtainedValue = appConfig.value
        XCTAssertEqual(expectedValue, obtainedValue)
    }
    
    func testValueString() {
        // GIVEN
        let key = "key"
        let expectedValue = "Hello"
        provider?.data[key] = expectedValue
        guard let provider = provider else {
            return
        }
        
        // WHEN
        let appConfig = AppConfigValue<String>.init(key: key,
                                                    defaultValue: "",
                                                    provider: provider,
                                                    appendTrafficType: false)
        
        // THEN
        let obtainedValue = appConfig.value
        XCTAssertEqual(expectedValue, obtainedValue)
    }
    
    func testValueBool() {
        // GIVEN
        let key = "key"
        let expectedValue = true
        provider?.data[key] = expectedValue.description
        guard let provider = provider else {
            return
        }
        
        // WHEN
        let appConfig = AppConfigValue<Bool>.init(key: key,
                                                  defaultValue: false,
                                                  provider: provider,
                                                  appendTrafficType: false)
        
        // THEN
        let obtainedValue = appConfig.value
        XCTAssertEqual(expectedValue, obtainedValue)
    }
    
    func testValueDicrtionary() {
        // GIVEN
        let key = "key"
        let expectedValue = ["int": 123]
        let encoder = JSONEncoder()
        guard let serialized = try? encoder.encode(expectedValue) else {
            return
        }
        provider?.data[key] = String(data: serialized, encoding: .utf8)
        guard let provider = provider else {
            return
        }
        
        // WHEN
        let appConfig = AppConfigValue<[String: Int]>.init(key: key,
                                                           defaultValue: [:],
                                                           provider: provider,
                                                           appendTrafficType: false)
        
        // THEN
        let obtainedValue = appConfig.value
        XCTAssertEqual(expectedValue, obtainedValue)
    }
    
    func testValueArray() {
        // GIVEN
        let key = "key"
        let value = "hello,my,friend"
        provider?.data[key] = value
        guard let provider = provider else {
            return
        }
        
        // WHEN
        let appConfig = AppConfigValue<[String]>.init(key: key,
                                                      defaultValue: [],
                                                      provider: provider,
                                                      appendTrafficType: false)
        
        // THEN
        let obtainedValue = appConfig.value
        XCTAssertEqual(["hello", "my", "friend"], obtainedValue)
    }
    
    func testDefaultValue() {
        // GIVEN
        let key = "key"
        provider?.data[key] = "This is not a number"
        let expectedValue = 10
        guard let provider = provider else {
            return
        }
        
        // WHEN
        let appConfig = AppConfigValue<Int>.init(key: key,
                                                    defaultValue: expectedValue,
                                                    provider: provider,
                                                    appendTrafficType: false)
        
        // THEN
        let obtainedValue = appConfig.value
        XCTAssertEqual(expectedValue, obtainedValue)
    }
    
    func testEmptyValue() {
        // GIVEN
        let key = "key"
        provider?.data[key] = ""
        let expectedValue = "Default value"
        guard let provider = provider else {
            return
        }
        
        // WHEN
        let appConfig = AppConfigValue<String>.init(key: key,
                                                    defaultValue: expectedValue,
                                                    provider: provider,
                                                    appendTrafficType: false)
        
        // THEN
        let obtainedValue = appConfig.value
        XCTAssertEqual(expectedValue, obtainedValue)
    }
    
    func testRawValue() {
        // GIVEN
        let key = "key"
        let expectedValue = "a,b,c,d"
        provider?.data[key] = expectedValue
        guard let provider = provider else {
            return
        }
        
        // WHEN
        let appConfig = AppConfigValue<String>.init(key: key,
                                                    defaultValue: expectedValue,
                                                    provider: provider,
                                                    appendTrafficType: false)
        
        // THEN
        let obtainedValue = appConfig.rawValue
        XCTAssertEqual(expectedValue, obtainedValue)
    }
    
    func testValueWhenReady() {
        // GIVEN
        let key = "key"
        let expectedValue = 1234
        provider?.data[key] = String(expectedValue)
        guard let provider = provider else {
            return
        }
        
        // WHEN
        let appConfig = AppConfigValue<Int>.init(key: key,
                                                 defaultValue: 0,
                                                 provider: provider,
                                                 appendTrafficType: false)
        
        // THEN
        appConfig.value { (obtainedValue) in
            XCTAssertEqual(expectedValue, obtainedValue)
        }
    }
    
    func testGetValueWithAttributes() {
        // GIVEN
        let key = "key"
        let expectedValue = 1234
        let expectedAttributes: [String: Int] = ["attributeKey": 89089]
        provider?.data[key] = String(expectedValue)
        guard let provider = provider else {
            return
        }
        
        // WHEN
        let appConfig = AppConfigValue<Int>.init(key: key,
                                                 defaultValue: 0,
                                                 provider: provider,
                                                 appendTrafficType: false)
        
        // THEN
        let obtainedValue = appConfig.getValue(with: expectedAttributes)
        XCTAssertEqual(expectedValue, obtainedValue)
        guard let obtainedAttributes = provider.attributes as? [String: Int] else {
            XCTFail("Attributes should exist and be [String: Int]")
            return
        }
        XCTAssertEqual(expectedAttributes, obtainedAttributes)
    }
    
    func testGetValueWithAttributesEscaping() {
        // GIVEN
        let key = "key"
        let expectedValue = 1234
        let expectedAttributes: [String: Int] = ["attributeKey": 89089]
        provider?.data[key] = String(expectedValue)
        guard let provider = provider else {
            return
        }
        
        // WHEN
        let appConfig = AppConfigValue<Int>.init(key: key,
                                                 defaultValue: 0,
                                                 provider: provider,
                                                 appendTrafficType: false)
        
        // THEN
        appConfig.getValue(with: expectedAttributes) { (obtainedValue) in
            XCTAssertEqual(expectedValue, obtainedValue)
            guard let obtainedAttributes = provider.attributes as? [String: Int] else {
                XCTFail("Attributes should exist and be [String: Int]")
                return
            }
            XCTAssertEqual(expectedAttributes, obtainedAttributes)
        }
    }
}
