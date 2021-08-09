//
//  AppConfigValue.swift
//  JardinDeJuegos
//
//  Created by Luis Antonio Gomez Vazquez on 19/10/20.
//

import Foundation

public enum AppConfigProviderType {
    case firebase
    case split
    case remoteSplit
}

class AppConfigProviderMock: AppConfigProvider {
    var data: [String: String] = [:]
    var attributes: [String: Any] = [:]
    var trafficType: String = ""
    func getConfig(with key: String) -> String? {
        return data[key]
    }
    
    func getConfig(with key: String, closure: @escaping (String?) -> ()) {
        closure(data[key])
    }
    
    func getConfig(with key: String, attributes: [String : Any]) -> String? {
        self.attributes = attributes
        return data[key]
    }
    
    func getConfig(with key: String, attributes: [String : Any], closure: @escaping (String?) -> ()) {
        self.attributes = attributes
        closure(data[key])
    }
    
    func getTrafficType() -> String {
        return trafficType
    }
}

public protocol AppConfigProvider {
    func getTrafficType() -> String
    func getConfig(with key: String) -> String?
    func getConfig(with key: String, closure: @escaping (String?) -> ())
    func getConfig(with key: String, attributes: [String: Any]) -> String?
    func getConfig(with key: String, attributes: [String: Any], closure: @escaping (String?) -> ())
}

extension AppConfigProvider {
    public func getTrafficType() -> String { return "" }
}

extension AppConfigProviderType {
    var instance: AppConfigProvider {
        switch self {
        case .split:
            return AppConfigProviderMock()
        case .firebase:
            return AppConfigProviderMock()
        case .remoteSplit:
            return AppConfigProviderMock()
        }
    }
    
    public var storageReference: String {
        switch self {
        case .firebase:
            return "rappi_app_build"
        case .split:
            return "split_app_build"
        case .remoteSplit:
            return "remote_split_app_build"
        }
    }
}

public class AppConfigValue<T> {
    var key: String = ""
    public typealias VarType = T
    private var defaultValue: T?
    private var provider: AppConfigProvider
    private let appConfigQueue =  DispatchQueue(label: "com.grability.rappi.appconfig.value", qos: .default, attributes: .concurrent)
    
    convenience public init(key: String,
                defaultValue: T,
                provider: AppConfigProviderType,
                appendTrafficType: Bool = false) {
        self.init(key: key, defaultValue: defaultValue, provider: provider.instance, appendTrafficType: appendTrafficType)
    }
    
    init(key: String,
         defaultValue: T,
         provider: AppConfigProvider,
         appendTrafficType: Bool) {
        self.key = key + (appendTrafficType ? "_\(provider.getTrafficType())" : "")
        self.defaultValue = defaultValue
        self.provider = provider
    }
    
    public var value: T {
        var configValue: T = defaultValue!
        appConfigQueue.sync {
            configValue = process(data: provider.getConfig(with: key))
        }
        
        return configValue
    }
    
    public var rawValue: String? {
        var configValue: String?
        appConfigQueue.sync {
            configValue = provider.getConfig(with: key)
        }
        return configValue
    }
    
    public func value(whenReady onReady: @escaping (T) -> Void) {
        appConfigQueue.sync {
            provider.getConfig(with: key) { data in
                onReady(self.process(data: data))
            }
        }
    }
    
    public func getValue(with attributes: [String: Any]) -> T {
        var configValue: T = defaultValue!
        appConfigQueue.sync {
            if let data = provider.getConfig(with: key, attributes: attributes), !data.isEmpty {
                configValue = castType(for: data) ?? defaultValue!
            }
        }
        return configValue
    }
    
    public func getValue(with attributes: [String: Any], whenReady onReady: @escaping (T) -> Void) {
        appConfigQueue.sync {
            provider.getConfig(with: key, attributes: attributes) { data in
                onReady(self.process(data: data))
            }
        }
    }
    
    //public var observable: Observable<T> {
    //    return .just(value)
    //}
    
    func process(data: String?) -> T {
        guard let data = data, !data.isEmpty else {
            return defaultValue!
        }
        
        let configValue: T = castType(for: data) ?? defaultValue!
        return configValue
    }
    
    private func castType<Value>(for constant: String) -> Value? {
        if let int = Int(constant) as? Value {
            return int
        } else if let float = Float(constant) as? Value {
            return float
        } else if let double = Double(constant) as? Value {
            return double
        } else if let string = String(constant).trimmingCharacters(in: CharacterSet(charactersIn: "\"")) as? Value {
            return string
        } else if let bool = NSString(string: constant).boolValue as? Value {
            return bool
        } else if let dictionary = constant.parseJSONString as? Value {
            return dictionary
        } else if let array = constant.components(separatedBy: ",") as? Value {
            return array
        } else {
            return nil
        }
    }
}

extension String {
    var parseJSONString: Any? {
        guard let jsonData = self.data(using: String.Encoding.utf8, allowLossyConversion: false) else {
           return nil
        }

        return try? JSONSerialization.jsonObject(with: jsonData,
                                                 options: JSONSerialization.ReadingOptions.mutableContainers)
    }
}
