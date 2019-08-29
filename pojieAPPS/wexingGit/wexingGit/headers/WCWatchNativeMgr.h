//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMService.h"

#import "ICdnComMgrExt-Protocol.h"
#import "IContactMgrExt-Protocol.h"
#import "IDownloadImageExt-Protocol.h"
#import "IMMNewSessionMgrExt-Protocol.h"
#import "IMsgExt-Protocol.h"
#import "INetworkStatusMgrExt-Protocol.h"
#import "IVideoExt-Protocol.h"
#import "MMKernelExt-Protocol.h"
#import "MMService-Protocol.h"
#import "PBMessageObserverDelegate-Protocol.h"
#import "WCSessionDelegate-Protocol.h"

@class MemoryMappedKV, NSDate, NSDictionary, NSMutableArray, NSObject, NSString, WCSession;
@protocol OS_dispatch_queue;

@interface WCWatchNativeMgr : MMService <WCSessionDelegate, PBMessageObserverDelegate, MMKernelExt, INetworkStatusMgrExt, ICdnComMgrExt, IContactMgrExt, IMsgExt, IDownloadImageExt, IVideoExt, IMMNewSessionMgrExt, MMService>
{
    _Bool _isRefreshingSessionKey;
    _Bool _needRefreshSessionKey;
    _Bool _didHandledOpenURLSinceEnterForeground;
    NSMutableArray *_fileInfosNeedTransfer;
    _Bool _reachable;
    _Bool _isWatchRunning;
    NSObject<OS_dispatch_queue> *_watchSessionQueue;
    WCSession *_session;
    NSMutableArray *_pendingSignalMessages;
    NSDictionary *_latestContact;
    NSDictionary *_recentContactDic;
    NSDate *_setupDate;
    MemoryMappedKV *_mappedKV;
}

+ (id)getWatchDeviceId;
@property(retain, nonatomic) MemoryMappedKV *mappedKV; // @synthesize mappedKV=_mappedKV;
@property(retain, nonatomic) NSDate *setupDate; // @synthesize setupDate=_setupDate;
@property(retain, nonatomic) NSDictionary *recentContactDic; // @synthesize recentContactDic=_recentContactDic;
@property(retain, nonatomic) NSDictionary *latestContact; // @synthesize latestContact=_latestContact;
@property(retain, nonatomic) NSMutableArray *pendingSignalMessages; // @synthesize pendingSignalMessages=_pendingSignalMessages;
@property(retain, nonatomic) WCSession *session; // @synthesize session=_session;
@property(readonly, nonatomic) _Bool isWatchRunning; // @synthesize isWatchRunning=_isWatchRunning;
@property(readonly, nonatomic) _Bool reachable; // @synthesize reachable=_reachable;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *watchSessionQueue; // @synthesize watchSessionQueue=_watchSessionQueue;
- (void).cxx_destruct;
- (void)onSessionTopStatusChanged:(id)arg1 bTop:(_Bool)arg2;
- (_Bool)isValidContactForWatch:(id)arg1;
- (void)debugLog:(id)arg1;
- (_Bool)isWatchRecentReachable;
- (_Bool)isWatchOS3Plus;
- (_Bool)isNotificationActionFromWatch:(id)arg1;
@property(readonly, nonatomic) _Bool isWatchAppInstalled;
- (_Bool)transferFileIfKeyValid:(id)arg1 type:(unsigned long long)arg2;
- (id)keyForTransferFileWithUsername:(id)arg1 serverID:(long long)arg2 type:(unsigned long long)arg3;
- (id)contactDicWithGroupMemberInfosFromContact:(id)arg1;
- (void)updateApplicationContextIfCould;
- (unsigned int)replyYoTo:(id)arg1 observer:(id)arg2;
- (void)displayAllPendingSignalMessages;
- (void)displaySignalMessageWithDelay:(id)arg1;
- (void)OnVideoDownloadAfterOK:(id)arg1;
- (void)OnDownloadImageOk:(id)arg1;
- (void)OnChangeNotifyStatus:(id)arg1 withStatus:(_Bool)arg2;
- (void)onDeleteContact:(id)arg1;
- (void)OnDelMsg:(id)arg1 DelAll:(_Bool)arg2;
- (void)OnDelMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)OnMsgNotAddDBNotify:(id)arg1 MsgWrap:(id)arg2;
- (void)OnUpdatedCdnDnsInfo:(id)arg1 snsCdnInfo:(id)arg2 appCdnInfo:(id)arg3;
- (void)onNetworkStatusChange:(unsigned int)arg1;
- (void)onPostQuit;
- (void)onPreQuit;
- (void)onKickQuit;
- (void)logoutWatch;
- (void)onAuthOK;
- (void)handleGetIosExtensionKeyResp:(id)arg1 Event:(unsigned int)arg2;
- (void)getExtensionKeyForceRefresh:(_Bool)arg1;
- (void)checkAndRefreshSessionKeyIfNeed;
- (_Bool)isSessionKeyCached;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)_handleSession:(id)arg1 didReceiveUserInfo:(id)arg2;
- (void)_handleSessionMessage:(id)arg1 replyHandler:(CDUnknownBlockType)arg2;
- (void)session:(id)arg1 didReceiveFile:(id)arg2;
- (void)session:(id)arg1 didFinishFileTransfer:(id)arg2 error:(id)arg3;
- (void)session:(id)arg1 didReceiveUserInfo:(id)arg2;
- (void)session:(id)arg1 didFinishUserInfoTransfer:(id)arg2 error:(id)arg3;
- (void)session:(id)arg1 didReceiveApplicationContext:(id)arg2;
- (void)session:(id)arg1 didReceiveMessageData:(id)arg2 replyHandler:(CDUnknownBlockType)arg3;
- (void)session:(id)arg1 didReceiveMessageData:(id)arg2;
- (void)session:(id)arg1 didReceiveMessage:(id)arg2 replyHandler:(CDUnknownBlockType)arg3;
- (void)session:(id)arg1 didReceiveMessage:(id)arg2;
- (void)sessionReachabilityDidChange:(id)arg1;
- (void)sessionWatchStateDidChange:(id)arg1;
- (void)session:(id)arg1 activationDidCompleteWithState:(long long)arg2 error:(id)arg3;
- (_Bool)handleUserActivty:(id)arg1 restorationHandler:(CDUnknownBlockType)arg2;
- (void)enterBackground:(id)arg1;
- (void)handleUpdateQuickReplies:(id)arg1;
- (void)handleShareAppMessage:(id)arg1;
- (void)addMsgDataToWatchInbox:(id)arg1;
- (id)getRecentContactsInfosForWatch;
- (id)getComplicationUpdateMessages;
- (id)getRecentContactsList;
- (id)dictionaryFromWrapMsg:(id)arg1;
- (id)dictionaryFromContact:(id)arg1;
- (void)sendPairedInfoToServer;
- (void)setupSession;
- (void)willHandleOpenURL:(id)arg1;
- (void)onServiceClearData;
- (void)onServiceTerminate;
- (void)onServiceEnterForeground;
- (void)onServiceEnterBackground;
- (void)onServiceReloadData;
- (void)onServiceInit;
@property(retain, nonatomic) NSDate *lastReachableDate;
@property(nonatomic) _Bool needShowNewBadge;
@property(readonly, nonatomic) _Bool isPairedWatch;
- (void)dealloc;
- (id)init;
- (void)transferInitDataForWatch;
- (void)transferAvatarWithUsername:(id)arg1;
- (void)transferSticker:(id)arg1 forMD5:(id)arg2;
- (void)transferCachedImage:(id)arg1 forURLString:(id)arg2 progress:(float)arg3;
- (void)transferCachedImage:(id)arg1 forURLString:(id)arg2;
- (_Bool)_tranferFilePath:(id)arg1 payload:(id)arg2;
- (_Bool)transferMessageWrap:(id)arg1 forType:(unsigned long long)arg2;
- (id)transferFile:(id)arg1 metadata:(id)arg2;
- (id)transferUserInfo:(id)arg1;
- (void)statDurationData:(unsigned int)arg1 byFile:(id)arg2;
- (void)statActiveData:(unsigned int)arg1 byFile:(id)arg2;
- (void)logStatsWCSessionFile:(id)arg1;
- (id)roomHeadImageWithUsername:(id)arg1 circleColor:(id)arg2;
- (id)headImageForWatchWithUsername:(id)arg1;
- (_Bool)isWatchContactReachLimit;
- (id)watchContactUsernames;
- (void)changeContact:(id)arg1 toWatchContact:(_Bool)arg2 sync:(_Bool)arg3 needSendToWatch:(_Bool)arg4 notifyiPhone:(_Bool)arg5;
- (void)setWatchContactUsernames:(id)arg1 needSendToWatch:(_Bool)arg2 notifyiPhone:(_Bool)arg3;
- (void)setWatchContactUsernames:(id)arg1 needSendToWatch:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

