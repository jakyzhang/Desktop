//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMService.h"

#import "IMsgExt-Protocol.h"
#import "ISvrErrorExt-Protocol.h"
#import "MMService-Protocol.h"
#import "PBMessageObserverDelegate-Protocol.h"

@class NSMutableDictionary, NSString, SvrErrorTipWindow;

@interface DisasterNoticeMgr : MMService <PBMessageObserverDelegate, IMsgExt, ISvrErrorExt, MMService>
{
    _Bool m_isGettingDisasterInfo;
    NSMutableDictionary *m_dicSvrErrorInfo;
    NSMutableDictionary *m_dictBannerInfos;
    NSMutableDictionary *m_dictCloseTime;
    unsigned int m_manualAuthNoticeId;
    SvrErrorTipWindow *_svrErrorTipWindow;
}

@property(retain, nonatomic) SvrErrorTipWindow *svrErrorTipWindow; // @synthesize svrErrorTipWindow=_svrErrorTipWindow;
- (void).cxx_destruct;
- (void)OnGetSvrError:(id)arg1 Url:(id)arg2 Tips:(id)arg3 TimeOut:(unsigned int)arg4;
- (void)HandleXmlMessage:(id)arg1;
- (void)OnGetNewXmlMsg:(id)arg1 Type:(id)arg2 MsgWrap:(id)arg3;
- (_Bool)hasNotice;
- (void)closeDisasterInfoByNoticeId:(id)arg1;
- (id)getDisasterInfoByPosition:(id)arg1;
- (void)handleDisasterInfo:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)getDisasterInfo:(unsigned int)arg1;
- (void)MainThreadNotifyIDCErrorMsg:(id)arg1;
- (void)onNewIDCError:(id)arg1;
- (void)onManualAuthError:(id)arg1;
- (void)SaveData;
- (void)removeExpireInfos;
- (void)makeSureInit;
- (void)onServiceInit;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

