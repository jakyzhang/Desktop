//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WAPermissionMgrExtension-Protocol.h"
#import "WAPermissionUserAuthImplDelegate-Protocol.h"

@class NSDictionary, NSString, WAPermissionInfo, WAPermissionUserAuthImpl;
@protocol WAPermissionHandlerDelegate;

@interface WAPermissionHandler : NSObject <WAPermissionMgrExtension, WAPermissionUserAuthImplDelegate>
{
    WAPermissionInfo *_permissionInfo;
    NSString *_appID;
    NSString *_userName;
    unsigned int _debugModeType;
    unsigned int _appVersion;
    NSString *_sessionId;
    CDUnknownBlockType _permissionInfoCompletionHandler;
    WAPermissionUserAuthImpl *_userAuthImpl;
    _Bool _isFromBackground;
    unsigned int _appServiceType;
    unsigned int _enterScene;
    id <WAPermissionHandlerDelegate> _delegate;
    NSDictionary *_permissionDict;
    NSString *_pagePath;
    NSDictionary *_dicLaunchParameter;
}

@property _Bool isFromBackground; // @synthesize isFromBackground=_isFromBackground;
@property(retain) NSDictionary *dicLaunchParameter; // @synthesize dicLaunchParameter=_dicLaunchParameter;
@property(retain) NSString *pagePath; // @synthesize pagePath=_pagePath;
@property unsigned int enterScene; // @synthesize enterScene=_enterScene;
@property(readonly, nonatomic) NSDictionary *permissionDict; // @synthesize permissionDict=_permissionDict;
@property(nonatomic) __weak id <WAPermissionHandlerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned int appServiceType; // @synthesize appServiceType=_appServiceType;
- (void).cxx_destruct;
- (void)userAuthFailWithJSAPI:(id)arg1 failHandler:(CDUnknownBlockType)arg2 errMsg:(id)arg3 scene:(unsigned long long)arg4;
- (void)userAuthOKWithJSAPI:(id)arg1 handler:(CDUnknownBlockType)arg2 scene:(unsigned long long)arg3;
- (void)onGetLaunchPermissionInfo:(id)arg1 isSuccess:(_Bool)arg2 errorCode:(int)arg3;
- (void)loadPermissionInfo;
@property(retain) WAPermissionInfo *permissionInfo;
- (id)getWeAppBindJumpToUserNameFromAppID:(id)arg1;
- (void)resetAuthInfo;
- (void)checkUserAuthWithAppID:(id)arg1 jsapi:(id)arg2 handler:(CDUnknownBlockType)arg3 failHandler:(CDUnknownBlockType)arg4 scene:(unsigned long long)arg5;
- (id)getPermissionResultWithJSAPI:(id)arg1 inRunningState:(unsigned int)arg2 byTempPermission:(id)arg3;
- (_Bool)checkRunInMainThread:(id)arg1;
- (_Bool)checkRunMode:(id)arg1 onWebview:(_Bool)arg2 isGameApp:(_Bool)arg3;
- (_Bool)isLastRequestFromBackgroundScene;
- (id)getActionSheetPermissionInfoFromLaunchCGI;
- (id)getPublicResInfoFromLaunchCGI;
- (id)getLaunchAction;
- (void)updateLaunchPermissionInfoOnEnterForeground;
- (void)updateSessionId:(id)arg1;
- (void)updatePagePath:(id)arg1;
- (void)updateScene:(unsigned int)arg1 dicLaunchParameter:(id)arg2;
- (void)asyncUpdateLaunchPermissionInfo;
- (void)requestLaunchPermssionInfoWithCompletionHandler:(CDUnknownBlockType)arg1;
- (_Bool)isSyncGetLaunchPermissionInfo;
- (void)dealloc;
- (id)initWithAppID:(id)arg1 userName:(id)arg2 debugModeType:(unsigned int)arg3 appVersion:(unsigned int)arg4 scene:(unsigned int)arg5 sessionId:(id)arg6 pagePath:(id)arg7 externalInfo:(id)arg8 dicLaunchParameter:(id)arg9;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

