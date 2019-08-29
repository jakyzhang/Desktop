//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;

@interface FCUUID : NSObject
{
    NSMutableDictionary *_uuidForKey;
    NSString *_uuidForSession;
    NSString *_uuidForInstallation;
    NSString *_uuidForVendor;
    NSString *_uuidForDevice;
    NSString *_uuidsOfUserDevices;
    _Bool _uuidsOfUserDevices_iCloudAvailable;
}

+ (_Bool)uuidValueIsValid:(id)arg1;
+ (id)uuidsOfUserDevicesExcludingCurrentDevice;
+ (id)uuidsOfUserDevices;
+ (id)uuidForDeviceMigratingValueForKey:(id)arg1 service:(id)arg2 accessGroup:(id)arg3 commitMigration:(_Bool)arg4;
+ (id)uuidForDeviceMigratingValueForKey:(id)arg1 service:(id)arg2 commitMigration:(_Bool)arg3;
+ (id)uuidForDeviceMigratingValueForKey:(id)arg1 commitMigration:(_Bool)arg2;
+ (id)uuidForDeviceMigratingValue:(id)arg1 commitMigration:(_Bool)arg2;
+ (id)uuidForDevice;
+ (id)uuidForVendor;
+ (id)uuidForInstallation;
+ (id)uuidForSession;
+ (id)uuidForKey:(id)arg1;
+ (id)uuid;
+ (id)sharedInstance;
- (void).cxx_destruct;
- (_Bool)uuidValueIsValid:(id)arg1;
- (id)uuidsOfUserDevicesExcludingCurrentDevice;
- (id)uuidsOfUserDevices;
- (void)uuidsOfUserDevices_updateWithValue:(id)arg1;
- (void)uuidsOfUserDevices_iCloudChange:(id)arg1;
- (void)uuidsOfUserDevices_iCloudSync;
- (void)uuidsOfUserDevices_iCloudInit;
- (id)uuidForDeviceMigratingValueForKey:(id)arg1 service:(id)arg2 accessGroup:(id)arg3 commitMigration:(_Bool)arg4;
- (id)uuidForDeviceMigratingValueForKey:(id)arg1 service:(id)arg2 commitMigration:(_Bool)arg3;
- (id)uuidForDeviceMigratingValueForKey:(id)arg1 commitMigration:(_Bool)arg2;
- (id)uuidForDeviceMigratingValue:(id)arg1 commitMigration:(_Bool)arg2;
- (id)uuidForDevice;
- (void)uuidForDevice_updateWithValue:(id)arg1;
- (id)uuidForVendor;
- (id)uuidForInstallation;
- (id)uuidForSession;
- (id)uuidForKey:(id)arg1;
- (id)uuid;
- (void)_setVerify:(id)arg1 forKey:(id)arg2 userDefaults:(_Bool)arg3 keychain:(_Bool)arg4 service:(id)arg5 accessGroup:(id)arg6 synchronizable:(_Bool)arg7;
- (void)_setValue:(id)arg1 forKey:(id)arg2 userDefaults:(_Bool)arg3 keychain:(_Bool)arg4 service:(id)arg5 accessGroup:(id)arg6 synchronizable:(_Bool)arg7;
- (id)_getVerifyForKey:(id)arg1 userDefaults:(_Bool)arg2 keychain:(_Bool)arg3 service:(id)arg4 accessGroup:(id)arg5;
- (id)_getValueForKey:(id)arg1 userDefaults:(_Bool)arg2 keychain:(_Bool)arg3 service:(id)arg4 accessGroup:(id)arg5;
- (id)md5:(id)arg1;
- (id)getRandom;
- (id)_getOrCreateValueForKey:(id)arg1 defaultValue:(id)arg2 userDefaults:(_Bool)arg3 keychain:(_Bool)arg4 service:(id)arg5 accessGroup:(id)arg6 synchronizable:(_Bool)arg7;
- (id)init;

@end
