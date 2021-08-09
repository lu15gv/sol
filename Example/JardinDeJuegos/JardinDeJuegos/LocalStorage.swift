//
//  LocalStorage.swift
//  JardinDeJuegos
//
//  Created by Luis Antonio Gomez Vazquez on 16/10/20.
//

import Foundation

class LocalStorageFormatter: NSObject {
     class func format(key: String) -> String {
        return key.hasSuffix("_Local_Storage") ? key : "\(key)_Local_Storage"
    }
}

class LocalStorage: NSObject {
    
    static let sharedUserDefaultsGroup = "group.rappi.extensionSharingDefaults"
    
    static var standard: Storageable {
        return storageable
    }
    
    static var storageable: Storageable = UserDefaults.standard
    
    static var unarchivable: Unarchivable.Type = NSKeyedUnarchiver.self
    
    private var defaults: Storageable?
    
    init(defaults: Storageable? = UserDefaults(suiteName: LocalStorage.sharedUserDefaultsGroup)) {
        super.init()
        self.defaults = defaults
    }
    
    class var groupContainerDefaults: UserDefaults? {
        return UserDefaults(suiteName: LocalStorage.sharedUserDefaultsGroup)
    }
    
    func getData(from key: String) -> Any? {
        return defaults?.object(forKey: key)
    }
    
    func save(data: Any?, with key: String) {
        defaults?.setValue(data, forKey: key)
        defaults?.synchronize()
    }
    
    class func getValue(for key: String) -> Any? {
        let obj = standard.object(forKey: LocalStorageFormatter.format(key: key))
        if let data = obj as? Data,
           let retrievedDictionary = try? unarchivable.unarchiveTopLevelObjectWithData(data) {
            return retrievedDictionary
        }
        return obj
    }
    
    class func getValueT(for key: String) -> Any? {
        let obj = standard.object(forKey: LocalStorageFormatter.format(key: key))
        return obj
    }
    
    class func getValueForKey(_ key: String) -> Any? {
        return LocalStorage.getValue(for: key)
    }
    
    class func setObject(_ object: Any, withKey key: String, addFormatToKey: Bool) {
        LocalStorage.setObject(object, with: key, addFormatToKey: addFormatToKey)
    }
    
    class func setObject(_ object: Any, withKey key: String) {
        LocalStorage.setObject(object, with: key)
    }
    
    class func setObject(_ object: Any, with key: String, addFormatToKey: Bool = true) {
        let newKey = addFormatToKey ? LocalStorageFormatter.format(key: key) : key
        standard.set(object, forKey: newKey)
        standard.synchronize()
    }
    
    class func removeObject(for key: String) {
        standard.removeObject(forKey: LocalStorageFormatter.format(key: key))
        standard.synchronize()
    }
    
    class func removeObject(forKey key: String) {
        LocalStorage.removeObject(for: key)
    }
    
    func removeData(forKey key: String) {
        defaults?.removeObject(forKey: key)
        defaults?.synchronize()
    }
}
