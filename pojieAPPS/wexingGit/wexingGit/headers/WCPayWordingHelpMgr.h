//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMService.h"

#import "IMMLanguageMgrExt-Protocol.h"
#import "MMPackageDownloadMgrExt-Protocol.h"
#import "MMService-Protocol.h"

@class NSMutableDictionary, NSString;

@interface WCPayWordingHelpMgr : MMService <MMService, MMPackageDownloadMgrExt, IMMLanguageMgrExt>
{
    unsigned int _lastUpdateTime;
    NSMutableDictionary *_serverDefaultWordingDict;
    NSMutableDictionary *_validityDynamicWordingDict;
    NSMutableDictionary *_phoneNumberDynamicWordingDict;
    NSMutableDictionary *_cvvCodeDynamicWordingDict;
}

@property(retain, nonatomic) NSMutableDictionary *cvvCodeDynamicWordingDict; // @synthesize cvvCodeDynamicWordingDict=_cvvCodeDynamicWordingDict;
@property(retain, nonatomic) NSMutableDictionary *phoneNumberDynamicWordingDict; // @synthesize phoneNumberDynamicWordingDict=_phoneNumberDynamicWordingDict;
@property(retain, nonatomic) NSMutableDictionary *validityDynamicWordingDict; // @synthesize validityDynamicWordingDict=_validityDynamicWordingDict;
@property(retain, nonatomic) NSMutableDictionary *serverDefaultWordingDict; // @synthesize serverDefaultWordingDict=_serverDefaultWordingDict;
@property(nonatomic) unsigned int lastUpdateTime; // @synthesize lastUpdateTime=_lastUpdateTime;
- (void).cxx_destruct;
- (id)getCVVCodeWoring:(id)arg1;
- (_Bool)isShowCVVCode:(id)arg1;
- (id)getCardNumberInputSafetyInstructionDescWording;
- (id)getCardNumberInputSafetyTipWording;
- (_Bool)isShowCardNumberInputSafetyTip;
- (id)getCardNumberInputTipWording;
- (_Bool)isShowCardNumberInputTip;
- (id)getSmsVerifyCodeWording;
- (id)getSmsVerifyCodeTipWording;
- (_Bool)isShowSmsVerifyCode;
- (id)getPhoneNumberWording:(id)arg1;
- (_Bool)isShowPhoneNumber:(id)arg1;
- (id)getValidityWording:(id)arg1;
- (_Bool)isShowValidity:(id)arg1;
- (id)getPersonalInfoWording;
- (_Bool)isShowPersonalInfo;
- (_Bool)writeToFile:(id)arg1 data:(id)arg2;
- (void)saveWCPayWording:(id)arg1;
- (_Bool)loadAndUpdateWCPayWording;
- (void)onPackageListUpdated:(id)arg1;
- (void)tryDownloadWCPayWording;
- (void)receiveWordingContent:(id)arg1;
- (void)onLanguageChange;
- (void)dealloc;
- (void)initData;
- (id)init;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

