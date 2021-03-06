//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GXPushServer, NSMutableArray, NSString;

@interface GXBusiness : NSObject
{
    NSString *clientId_;
    NSString *lastUploadMsgIdWaitingForAck_;
    NSString *lastUploadDeviceToken_;
    NSString *lastSetTagsMsgIdForAck_;
    NSString *lastSetTagsValue_;
    GXPushServer *server_;
    long long _timerCount;
    NSMutableArray *_socketCacheArray;
    NSMutableArray *_httpCacheArray;
}

@property(retain, nonatomic) NSMutableArray *httpCacheArray; // @synthesize httpCacheArray=_httpCacheArray;
@property(retain, nonatomic) NSMutableArray *socketCacheArray; // @synthesize socketCacheArray=_socketCacheArray;
@property(nonatomic) long long timerCount; // @synthesize timerCount=_timerCount;
- (void).cxx_destruct;
- (void)uploadDataForHttpCacheDB;
- (void)uploadDataForSocketCacheDB;
- (void)notifyReceivedSetModeOfMode:(_Bool)arg1 errorCode:(int)arg2;
- (void)didReceiveForSetBadge:(id)arg1;
- (void)tryUploadSetBadge;
- (void)tryUploadSetTags;
- (_Bool)didReceiveAckMessageWithId:(id)arg1;
- (void)addPhoneInfoWithClientId:(id)arg1 isNowUpdate:(_Bool)arg2;
- (_Bool)ifNeedUploadAddPhoneInfo;
- (void)tryUploadDeviceToken;
- (void)tryUploadType27:(id)arg1;
- (void)delayedReportingForType27;
- (void)delayedReportingForType12;
- (void)onTimerForBaseManager;
- (void)didChannelEstablishedWithClientId:(id)arg1;
- (void)sdkDidRegisterClientNotification:(id)arg1;
- (void)dealloc;
- (void)stop;
- (void)startup;
- (id)initWithServer:(id)arg1;

@end

