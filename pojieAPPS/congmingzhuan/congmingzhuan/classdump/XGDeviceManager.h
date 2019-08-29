//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSString, XGTPNs;

@interface XGDeviceManager : NSObject
{
    unsigned long long _routerServerVersion;
    unsigned long long _routerServerType;
    NSString *_currentTag;
    XGTPNs *_tpns;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)defaultManager;
@property(retain, nonatomic) XGTPNs *tpns; // @synthesize tpns=_tpns;
@property(copy, nonatomic) NSString *currentTag; // @synthesize currentTag=_currentTag;
@property(nonatomic) unsigned long long routerServerType; // @synthesize routerServerType=_routerServerType;
@property(nonatomic) unsigned long long routerServerVersion; // @synthesize routerServerVersion=_routerServerVersion;
- (void).cxx_destruct;
- (void)synchronizeData;
@property long long deviceGUID;
@property _Bool deviceNotificationStatus;
- (void)removeTokenTag:(id)arg1;
@property(copy, nonatomic) NSString *tokenTag;
- (id)tagsOfToken;
- (void)saveTagsOfToken:(id)arg1;
- (void)removeTokenAccount:(id)arg1;
@property(copy, nonatomic) NSString *tokenAccount;
- (void)saveClientId:(id)arg1;
- (id)getSavedClientId;
- (void)saveDeviceTokenRetryNum:(id)arg1;
- (int)getDeviceTokenRetryNum;
- (void)saveDeviceTokenRegistered;
- (_Bool)ifDeviceTokenRegistered;
@property(copy, nonatomic) NSString *deviceToken;
- (void)loadRegisterStatus:(CDUnknownBlockType)arg1;
- (void)storeRegisterStatus:(long long)arg1;
- (id)loadRegisterModel;
- (long long)loadDeivceNotificationStatus;
- (void)updateDeviceNotificationStatus:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)storeRegisterModel:(id)arg1;
@property(copy, nonatomic) NSDate *IPRouterQueryDate;
@property(copy, nonatomic) NSString *IPRouterQueryInterval;
@property(copy, nonatomic) NSString *IPRouterQueryFrequency;
@property(copy, nonatomic) NSString *IPRouterContent;
@property(nonatomic) long long vipStatus;
@property(copy, nonatomic) NSString *xgAccessID;
- (id)copy;
- (id)init;

@end
