//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "IWABusinessService-Protocol.h"

@class NSString;

@interface WABusinessProxy : NSObject <IWABusinessService>
{
}

+ (id)getLoginUsrInfo;
+ (_Bool)isLogin;
+ (id)genProfileWithParameter:(id)arg1;
+ (id)genCommentWithWeAppContact:(id)arg1;
+ (void)onScanMsgNodePkgQRCodeWithAppId:(id)arg1 debugMode:(int)arg2 url:(id)arg3 checkSum:(id)arg4;
+ (void)onReportWAWebViewPageError:(id)arg1;
+ (id)genWebViewController:(id)arg1;
+ (void)onWeAppDidPresentWithPresentingViewController:(id)arg1;
+ (void)onWeAppTaskCancelledWithAppId:(id)arg1;
+ (void)showUserGuide;
+ (void)checkShowFirstQuitEducationWhenExit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

