//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "JPUSHCacheProtocol-Protocol.h"
#import "JPUSHJSONProtocol-Protocol.h"
#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSMutableArray, NSMutableDictionary, NSString;

@interface JPUSHMemoryCache : NSObject <JPUSHCacheProtocol, JPUSHJSONProtocol, NSCopying, NSCoding>
{
    _Bool _clearWhenMemoryLow;
    long long _maxCacheCount;
    long long _cachedCount;
    NSMutableArray *_cacheKeys;
    NSMutableDictionary *_cacheObjects;
}

+ (id)shareInstance;
@property(retain) NSMutableDictionary *cacheObjects; // @synthesize cacheObjects=_cacheObjects;
@property(retain) NSMutableArray *cacheKeys; // @synthesize cacheKeys=_cacheKeys;
@property(nonatomic) long long cachedCount; // @synthesize cachedCount=_cachedCount;
@property(nonatomic) long long maxCacheCount; // @synthesize maxCacheCount=_maxCacheCount;
@property(nonatomic) _Bool clearWhenMemoryLow; // @synthesize clearWhenMemoryLow=_clearWhenMemoryLow;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)jpush_jsonClassType;
- (void)jpush_fromJSONValue:(id)arg1;
- (id)jpush_toJSON;
- (void)handleNotification:(id)arg1;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (id)objectForKeyedSubscript:(id)arg1;
- (void)removeAllObjects;
- (void)removeObjectForKey:(id)arg1;
- (void)removeObject:(id)arg1;
- (void)removeObjectsAtIndexes:(struct _NSRange)arg1;
- (void)removeFirstObject;
- (id)objectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (_Bool)hasObjectForKey:(id)arg1;
- (void)unObserveAllNotifications;
- (void)dealloc;
- (void)observeNotification:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

