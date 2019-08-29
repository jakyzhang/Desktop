//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMService.h"

#import "INetworkStatusMgrExt-Protocol.h"
#import "MMKernelExt-Protocol.h"
#import "MMService-Protocol.h"
#import "WCPersistentCgiDelegate-Protocol.h"

@class NSArray, NSMutableArray, NSString;

@interface WCPersistentCgiMgr : MMService <MMService, WCPersistentCgiDelegate, MMKernelExt, INetworkStatusMgrExt>
{
    NSMutableArray *_requestingCgis;
    NSArray *_subClassArray;
}

@property(retain, nonatomic) NSArray *subClassArray; // @synthesize subClassArray=_subClassArray;
@property(retain, nonatomic) NSMutableArray *requestingCgis; // @synthesize requestingCgis=_requestingCgis;
- (void).cxx_destruct;
- (id)persistentKey:(Class)arg1;
- (void)persistentCgi:(id)arg1 didFailWithError:(id)arg2 reponse:(id)arg3;
- (void)persistentCgi:(id)arg1 didGetResponse:(id)arg2;
- (void)onAuthOK;
- (void)onRetry:(unsigned long long)arg1;
- (id)getPersitentCgis:(Class)arg1;
- (void)removePersistentCgiWithCustomUUID:(id)arg1 cgiClass:(Class)arg2;
- (void)removePersistentCgi:(id)arg1;
- (void)persitentCgi:(id)arg1;
- (void)startPersitentCgi:(id)arg1;
- (void)dealloc;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

