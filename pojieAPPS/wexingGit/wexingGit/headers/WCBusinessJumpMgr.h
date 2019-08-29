//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMService.h"

#import "MMService-Protocol.h"

@class NSMutableDictionary, NSString, WAOpenSDKJSEventHandleLogic;

@interface WCBusinessJumpMgr : MMService <MMService>
{
    NSMutableDictionary *_dictCallBackInfo;
    WAOpenSDKJSEventHandleLogic *_openSDKJSEventHandler;
}

- (void).cxx_destruct;
- (void)internalHandleJump:(id)arg1 translateInfo:(id)arg2 parentViewController:(id)arg3;
- (_Bool)isBusinessJump:(id)arg1;
- (id)getBusinessName:(id)arg1;
- (void)processTranslateResult:(id)arg1 parentViewController:(id)arg2 originUrl:(id)arg3 translateInfo:(id)arg4 jumpViewController:(id)arg5;
- (void)handleJumpFromQRCode:(id)arg1 parentViewController:(id)arg2;
- (void)handleJumpFromInner:(id)arg1 parentViewController:(id)arg2 sceneValue:(long long)arg3 extranInfo:(id)arg4;
- (void)handleJumpFromNativeApp:(id)arg1 parentViewController:(id)arg2 sceneValue:(long long)arg3;
- (void)handleJumpFromOuter:(id)arg1 bundleId:(id)arg2 parentViewController:(id)arg3;
- (void)handleJumpFromJSAPI:(id)arg1 parentViewController:(id)arg2 scene:(unsigned int)arg3;
- (void)handleJumpFromOpenSDK:(id)arg1 bundleId:(id)arg2 parentViewController:(id)arg3 extraInfo:(id)arg4;
- (void)dealloc;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

