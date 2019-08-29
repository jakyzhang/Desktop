//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMService.h"

#import "MMService-Protocol.h"
#import "WAPackageDownloadLogicDelegate-Protocol.h"

@class NSDictionary, NSString, WAPackageDownloadLogic, WAPackageInfoCacheLogic, WAPackageSweeperLogic, WAPublicResInfo, WAPublicResInfoStorage;

@interface WAPublicResCacheMgr : MMService <WAPackageDownloadLogicDelegate, MMService>
{
    WAPackageDownloadLogic *_pkgDownloadLogic;
    WAPackageInfoCacheLogic *_pkgInfoCacheLogic;
    WAPackageSweeperLogic *_pkgSweeperLogic;
    NSString *_curDownloadUrlStr;
    _Bool _bIsDownloading;
    _Bool _bIsLoadedFileInfo;
    WAPublicResInfoStorage *m_resInfoStorage;
    WAPublicResInfo *_curServerRetInfo;
    NSDictionary *_pubLibVersion;
    long long _startDownloadTime;
    CDUnknownBlockType _syncUpdatePubLibHandler;
    _Bool needUnpackBeforeNewTaskBegin;
}

+ (id)extensionIMsgExtRegisterKeyList;
+ (id)getBundle;
+ (id)getPublicRelativePath:(unsigned long long)arg1;
@property _Bool needUnpackBeforeNewTaskBegin; // @synthesize needUnpackBeforeNewTaskBegin;
- (void).cxx_destruct;
- (void)tryCloseBackgroundTaskAndRestartPreloadTask;
- (void)tryUnpackNewPubData;
- (void)processPublicPkgUpdateNotifyVersion:(unsigned int)arg1 pkgUrl:(id)arg2 patchUrl:(id)arg3 md5:(id)arg4 isForceUpdate:(_Bool)arg5 scene:(unsigned long long)arg6 updateType:(unsigned int)arg7;
- (void)parseNotifyMsg:(id)arg1;
- (void)onGetNewXmlMsg:(id)arg1 type:(id)arg2 msgContent:(id)arg3;
- (void)onCgiResponse:(id)arg1 forEvent:(unsigned int)arg2;
- (void)updatePublicResPkgWithScene:(unsigned long long)arg1;
- (void)removeDustPublicPkgWithVersion:(unsigned long long)arg1;
- (void)reportPatchUpdateKvInfo:(_Bool)arg1 debugMode:(unsigned long long)arg2 errCode:(unsigned long long)arg3 publicInfo:(id)arg4 isPatch:(_Bool)arg5 pkgSize:(unsigned int)arg6 filePath:(id)arg7;
- (void)reportKvInfo:(_Bool)arg1 debugMode:(_Bool)arg2 downloadPercent:(unsigned int)arg3 eventID:(unsigned int)arg4;
- (void)onDownloadTaskCompletion:(long long)arg1 taskUrl:(id)arg2 filePath:(id)arg3;
- (void)onDownloadTaskProgress:(float)arg1 remainingTime:(unsigned long long)arg2 totalLength:(unsigned long long)arg3 taskUrl:(id)arg4;
- (void)syncHandlerActionWithRet:(_Bool)arg1;
- (_Bool)downloadDebugPublicPkgWithInfo:(id)arg1;
- (_Bool)downloadPublicPkgWithUrl:(id)arg1 patchUrl:(id)arg2;
- (_Bool)isDownloading;
- (_Bool)isNeedDownloadPublicDebugModePkg:(id)arg1;
- (void)asyncUpdatePublicResPkgFromLaunchWithInfo:(id)arg1;
- (void)syncUpdatePublicResPkgFromLaunchWithInfo:(id)arg1 completeHandler:(CDUnknownBlockType)arg2;
- (void)tryUpdatePublicResPkg;
- (id)getLibStringVersion;
- (id)getCurrentPublicReleaseInfo;
- (id)getPublicForceLocalCacheData:(unsigned long long)arg1;
- (id)getPublicLocalCacheData:(unsigned long long)arg1;
- (id)getLocalCacheDataWithRelativePath:(id)arg1 version:(unsigned long long)arg2;
- (_Bool)loadPublicPkgInfoLocalCache:(unsigned long long)arg1 version:(unsigned long long)arg2;
- (_Bool)verifyLocalCacheChecksum:(id)arg1 debugModeType:(unsigned long long)arg2 version:(unsigned long long)arg3;
- (void)saveResInfoStorage:(id)arg1;
- (void)loadResInfoStorage;
- (void)onServiceEnterForeground;
- (void)onServiceEnterBackground;
- (void)onServiceClearData;
- (void)onServiceReloadData;
- (void)onServiceInit;
- (void)checkUpdatePublicResPkgOnAppVersionChangeFrom:(unsigned int)arg1 to:(unsigned int)arg2;
- (void)checkUpdatePublicResPkg;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

