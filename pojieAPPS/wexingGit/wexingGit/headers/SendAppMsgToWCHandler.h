//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "IPreEnterWechatLogicExt-Protocol.h"
#import "ShareUploadTaskConfirmLogicHelperDelegate-Protocol.h"
#import "UIAlertViewDelegate-Protocol.h"
#import "WCCommitViewResultDelegate-Protocol.h"
#import "WCShareAuthViewControllerDelegate-Protocol.h"

@class AppCommunicateData, NSString, ShareUploadTaskConfirmLogicHelper, UIAlertView, UINavigationController;

@interface SendAppMsgToWCHandler : MMObject <WCShareAuthViewControllerDelegate, ShareUploadTaskConfirmLogicHelperDelegate, UIAlertViewDelegate, IPreEnterWechatLogicExt, WCCommitViewResultDelegate>
{
    NSString *_appId;
    NSString *_bundleId;
    AppCommunicateData *_appData;
    ShareUploadTaskConfirmLogicHelper *_shareHelper;
    UINavigationController *m_confirmViewController;
    UIAlertView *_alertView;
    _Bool _canReturnRightShareResult;
    UINavigationController *_m_navigationController;
}

@property(nonatomic) _Bool canReturnRightShareResult; // @synthesize canReturnRightShareResult=_canReturnRightShareResult;
@property(retain, nonatomic) UINavigationController *m_navigationController; // @synthesize m_navigationController=_m_navigationController;
- (void).cxx_destruct;
- (void)reportShareResult:(int)arg1;
- (void)removeAuthViewController;
- (void)shareAuthViewControllerDidFail:(id)arg1;
- (void)shareAuthViewControllerDidSuccess:(id)arg1 redirectUrl:(id)arg2 extraInfo:(id)arg3;
- (void)shareAuthViewControllerDidCancel:(id)arg1;
- (void)doAppAuth;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)showAlertView;
- (void)onDoneForwardForForwardView:(id)arg1;
- (void)onCancelForwardForForwardView:(id)arg1;
- (void)onPreEnterWechatDone;
- (void)sendTimeLineWithComunicateData:(id)arg1 withAppID:(id)arg2 extraInfo:(id)arg3;
- (void)closeConfirmView;
- (void)showConfirmView;
- (id)sendTimeLine3rdAppWithComunicateData:(id)arg1;
- (id)sendTimeLineFeedWithComunicateData:(id)arg1;
- (id)sendTimeLineVideoFileWithComunicateData:(id)arg1 withAppID:(id)arg2 extraInfo:(id)arg3;
- (id)saveAndCheckVideoWithComunicateData:(id)arg1 pickerScene:(unsigned long long)arg2 extraInfo:(id)arg3;
- (id)getTmpFilePathWithMP4Ext;
- (id)sendTimeLineVideoWithComunicateData:(id)arg1;
- (id)sendTimeLineMusicWithComunicateData:(id)arg1;
- (id)sendTimeLinePhotoWithComunicateData:(id)arg1;
- (id)sendTimeLineTextWithComunicateData:(id)arg1;
- (void)clearAllHandleAndReturn3rdApp:(int)arg1;
- (void)cancelAllHandleAndReturn3rdApp;
- (void)clearAllHandle;
- (void)cancelAllHandle;
- (void)cancelSendAppMsgToWC;
- (void)sendAppMsgToWC:(id)arg1 bundleId:(id)arg2 withData:(id)arg3;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

