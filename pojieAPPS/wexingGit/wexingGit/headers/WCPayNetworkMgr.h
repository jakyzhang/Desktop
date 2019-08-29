//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMService.h"

#import "MMService-Protocol.h"
#import "PBMessageObserverDelegate-Protocol.h"

@class NSMutableDictionary, NSString;

@interface WCPayNetworkMgr : MMService <PBMessageObserverDelegate, MMService>
{
    NSMutableDictionary *_startedTimeDic;
    NSMutableDictionary *_callerNames;
    NSMutableDictionary *_callbacks;
}

@property(retain, nonatomic) NSMutableDictionary *callbacks; // @synthesize callbacks=_callbacks;
- (void).cxx_destruct;
- (void)debugPrintRequestWithCGIWrap:(id)arg1;
- (void)debugPrintResponseWithCGIWrap:(id)arg1;
- (id)nearestOutsideCallerName;
- (void)cleanForKey:(id)arg1;
- (void)handleErrorAndClean:(id)arg1 forKey:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)handleCommonErrorAndCleanForKey:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (unsigned int)sendRequestWithTimeout:(id)arg1 cgi:(unsigned int)arg2 timeout:(double)arg3 routeInfo:(unsigned char)arg4 completion:(CDUnknownBlockType)arg5;
- (unsigned int)sendRequest:(id)arg1 cgi:(unsigned int)arg2 completion:(CDUnknownBlockType)arg3;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (unsigned int)queryFlowDataWithFuncId:(id)arg1 mobile:(id)arg2 productName:(id)arg3 appId:(id)arg4 remarks:(id)arg5 ticket:(id)arg6 completion:(CDUnknownBlockType)arg7;
- (unsigned int)getIAPOrderDetailWithOrderID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (unsigned int)deleteSingleOrderWithOrderID:(id)arg1 payType:(long long)arg2 billId:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (unsigned int)commonQueryCmdIDWithTimeout:(unsigned int)arg1 bizParams:(id)arg2 wxParams:(id)arg3 timeout:(double)arg4 routeInfo:(unsigned char)arg5 completion:(CDUnknownBlockType)arg6;
- (unsigned int)commonQueryCmdID:(unsigned int)arg1 bizParams:(id)arg2 wxParams:(id)arg3 routeInfo:(unsigned char)arg4 completion:(CDUnknownBlockType)arg5;
- (unsigned int)commonQueryCmdID:(unsigned int)arg1 bizParams:(id)arg2 wxParams:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (_Bool)cancelRequestForEventId:(unsigned int)arg1;
- (void)onServiceClearData;
- (void)onServiceTerminate;
- (void)onServiceEnterForeground;
- (void)onServiceEnterBackground;
- (void)onServiceReloadData;
- (void)onServiceInit;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

