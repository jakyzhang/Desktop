//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMService.h"

#import "MMService-Protocol.h"
#import "MMUIViewControllerDelegate-Protocol.h"
#import "WCPayWalletLockVerifyLogicDelegate-Protocol.h"

@class MMUIViewController, NSString;

@interface AppleSearchMgr : MMService <MMUIViewControllerDelegate, WCPayWalletLockVerifyLogicDelegate, MMService>
{
    _Bool m_hasIndexSearch;
    MMUIViewController *m_moreVc;
    unsigned int m_patternLockLogicTag;
}

- (void).cxx_destruct;
- (void)walletLockVerifySuccess:(id)arg1;
- (id)getViewController;
- (void)indexActivities;
- (id)genFeatureSearchItem:(id)arg1 title:(id)arg2 keywords:(id)arg3;
- (id)openShake:(int)arg1 isSupported:(_Bool)arg2 currentVc:(id)arg3;
- (void)openFeature:(id)arg1;
- (void)openQuickPay;
- (void)openQuickPayOnVc:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

