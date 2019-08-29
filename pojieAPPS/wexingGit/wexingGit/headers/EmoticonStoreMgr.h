//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMService.h"

#import "IAPExt-Protocol.h"
#import "ICdnComMgrExt-Protocol.h"
#import "IMMLanguageMgrExt-Protocol.h"
#import "MMService-Protocol.h"
#import "PBMessageObserverDelegate-Protocol.h"
#import "StoreEmotionExchangeEmotionPackCgiDelegate-Protocol.h"

@class EmoticonStoreSession, NSData, NSMutableDictionary, NSMutableSet, NSOperationQueue, NSString;

@interface EmoticonStoreMgr : MMService <StoreEmotionExchangeEmotionPackCgiDelegate, MMService, PBMessageObserverDelegate, IAPExt, ICdnComMgrExt, IMMLanguageMgrExt>
{
    NSMutableSet *m_requestDetailForPids;
    NSMutableDictionary *m_getListEventIdDic;
    EmoticonStoreSession *m_session;
    NSMutableDictionary *m_skProducts;
    unsigned long long m_boughtListEventID;
    NSData *m_broughtBuff;
    NSString *m_emotionExptConfig;
    NSMutableDictionary *_m_exchangePackCgiDic;
    NSMutableDictionary *_m_waitForExchangePackItemDic;
    NSOperationQueue *_m_installPackageQueue;
}

+ (unsigned int)getIdKeyDownloadFailed;
+ (unsigned int)getIdKeyIdEmoticon;
@property(retain, nonatomic) NSOperationQueue *m_installPackageQueue; // @synthesize m_installPackageQueue=_m_installPackageQueue;
@property(retain, nonatomic) NSMutableDictionary *m_waitForExchangePackItemDic; // @synthesize m_waitForExchangePackItemDic=_m_waitForExchangePackItemDic;
@property(retain, nonatomic) NSMutableDictionary *m_exchangePackCgiDic; // @synthesize m_exchangePackCgiDic=_m_exchangePackCgiDic;
@property(retain, nonatomic) NSMutableDictionary *m_getListEventIdDic; // @synthesize m_getListEventIdDic;
@property(retain, nonatomic) NSMutableSet *m_requestDetailForPids; // @synthesize m_requestDetailForPids;
@property(retain, nonatomic) EmoticonStoreSession *m_session; // @synthesize m_session;
@property(retain, nonatomic) NSData *m_broughtBuff; // @synthesize m_broughtBuff;
@property(retain, nonatomic) NSMutableDictionary *m_skProducts; // @synthesize m_skProducts;
- (void).cxx_destruct;
- (_Bool)isEmoticonStoreExpt;
- (void)saveEmoticonExpt:(id)arg1;
- (id)pathForEmoticonExpt;
- (void)onLanguageChange;
- (void)setBoughtListCacheWithItemList:(id)arg1;
- (id)getBoughtListCache;
- (id)pathForBoughtListCache;
- (void)beginPersonalEmotionSession:(unsigned int)arg1 withReqType:(unsigned int)arg2;
- (void)setStoreListCacheWithCache:(id)arg1 withReqType:(unsigned int)arg2;
- (void)setStoreListCacheWithItemList:(id)arg1 Advertisment:(id)arg2 withReqType:(unsigned int)arg3 withTopNum:(unsigned int)arg4;
- (void)setStoreListCacheWithItemList:(id)arg1 Advertisment:(id)arg2 withReqType:(unsigned int)arg3;
- (id)getStoreListCacheWithReqType:(unsigned int)arg1;
- (id)pathForStoreListCacheWithReqType:(unsigned int)arg1;
- (id)rootPathForStoreListCache;
- (void)notifyDownloadErrorWithItem:(id)arg1;
- (id)findEmoticonItemByProductID:(id)arg1;
- (void)updateBoughtListTailFromServer;
- (void)startBoughtListSession;
- (id)updateItemDetailWithProductID:(id)arg1 Scence:(unsigned int)arg2;
- (_Bool)updateTailForSessionScence:(unsigned int)arg1 withReqType:(unsigned int)arg2;
- (id)getStoreAdvertismentForSession:(unsigned int)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)onGetBroughtItemList:(id)arg1;
- (unsigned int)getBoughtListFromServer;
- (void)removeItemFromDownloadingQueueByClientID:(id)arg1;
- (void)tryInstallEmoticonPackage:(id)arg1;
- (void)OnCdnDownload:(id)arg1;
- (id)findDownloadingEmoticonItemByProductID:(id)arg1;
- (id)findDownloadingEmoticonItemByClientDownloadID:(id)arg1;
- (void)OnCdnDownloadProgress:(id)arg1;
- (void)OnSetCdnDnsInfo;
- (_Bool)IsCdnEmoticonPackageDownlaodFromClientID:(id)arg1;
- (id)mediaInfoForEmoticonItem:(id)arg1;
- (_Bool)cancelDownloadAndInstallEmoticonItem:(id)arg1;
- (_Bool)reDownloadAndInstallEmoticonItem:(id)arg1 isAutomatic:(_Bool)arg2;
- (_Bool)downloadAndInstallEmoticonItem:(id)arg1;
- (void)onExchangeEmotionPackCgiFailedWithPid:(id)arg1 AndRet:(int)arg2;
- (void)onExchangeEmotionPackCgiFailedForNoResponseWithPid:(id)arg1;
- (void)onExchangeEmotionPackCgiOkWithPid:(id)arg1 DownloadInfo:(id)arg2;
- (_Bool)exchangeEmoticonItemForDownloadUrl:(id)arg1 Scence:(int)arg2 isAutomatic:(_Bool)arg3;
- (void)onRestoreFail;
- (void)onRestoreSuccessForProduct:(id)arg1;
- (void)onPurchaseCancelForProduct:(id)arg1;
- (void)onPurchaseFailForProduct:(id)arg1 Err:(id)arg2;
- (void)onPurchaseSuccessForProduct:(id)arg1 ErrCode:(unsigned int)arg2;
- (int)buyEmoticonItem:(id)arg1;
- (void)onGetProduct:(id)arg1 invalidProductID:(id)arg2;
- (void)updateListFromAppleForSKProduct;
- (void)updateItemFromAppleForSKProduct:(id)arg1;
- (_Bool)updateItemProductFromCache:(id)arg1;
- (void)updateItemInSession:(id)arg1;
- (void)OnGetStoreEmoticonItemDetail:(id)arg1;
- (_Bool)GetEmotionDetailWithProductID:(id)arg1 Scence:(unsigned int)arg2;
- (void)OnGetStoreEmoticonList:(id)arg1 withReqType:(unsigned int)arg2;
- (_Bool)checkIsBannerSetValid:(id)arg1;
- (id)updateSKProductForItemList:(id)arg1;
- (_Bool)GetEmotionListFromStore:(unsigned int)arg1 withReqType:(unsigned int)arg2;
- (void)endStoreSession:(unsigned int)arg1;
- (id)beginStoreSessionWithItem:(id)arg1;
- (void)beginStoreSession:(unsigned int)arg1 withReqType:(unsigned int)arg2;
- (id)getBufForReqType:(unsigned int)arg1;
- (void)dealloc;
- (void)onServiceClearData;
- (void)onServiceReloadData;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

