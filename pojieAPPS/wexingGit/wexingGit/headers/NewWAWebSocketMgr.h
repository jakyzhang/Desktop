//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMService.h"

#import "MMService-Protocol.h"
#import "WAAppTaskMgrExt-Protocol.h"

@class NSMutableDictionary, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface NewWAWebSocketMgr : MMService <WAAppTaskMgrExt, MMService>
{
    NSMutableDictionary *_dicAppID2WebSocketHandler;
    NSObject<OS_dispatch_queue> *_workerQueue;
    unsigned int _taskIDSequence;
}

- (void).cxx_destruct;
- (void)onAppTaskBackgroundNetworkInterruptedTimeout:(id)arg1;
- (void)onAppTaskTerminate:(id)arg1;
- (void)closeAndDeleteAllWebSocketHandler;
- (void)interruptHandlerWithAppID:(id)arg1;
- (void)closeAndDeleteHandlerWithAppID:(id)arg1;
- (id)getHandlerWithAppID:(id)arg1;
- (id)getAndNewHandlerIfNotExistWithAppID:(id)arg1 appVersion:(unsigned long long)arg2 appType:(unsigned int)arg3 context:(id)arg4;
- (void)sendData:(id)arg1 withAppID:(id)arg2 taskID:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)sendString:(id)arg1 withAppID:(id)arg2 taskID:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)closeSocketWithAppID:(id)arg1 taskID:(id)arg2 code:(long long)arg3 reason:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)connectSocketWithAppID:(id)arg1 taskID:(id)arg2 appVersion:(unsigned long long)arg3 appType:(unsigned int)arg4 isIgnoreCheckDomain:(_Bool)arg5 url:(id)arg6 httpHeaders:(id)arg7 subProtocols:(id)arg8 context:(id)arg9 completionHandler:(CDUnknownBlockType)arg10;
- (id)genSocketTaskID;
- (void)onServiceClearData;
- (void)onServiceReloadData;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

