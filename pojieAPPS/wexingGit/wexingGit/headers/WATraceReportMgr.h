//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMService.h"

#import "MMService-Protocol.h"

@class NSFileHandle, NSMutableDictionary, NSString, WAOpenGLView;

@interface WATraceReportMgr : MMService <MMService>
{
    NSString *_appId;
    _Bool _stopped;
    NSMutableDictionary *_traceInfos;
    NSFileHandle *_currentFileHandle;
    WAOpenGLView *_currentView;
    unsigned long long _beginTime;
    long long _maxFPS;
}

- (void).cxx_destruct;
- (void)onTrace;
- (void)traceStartupTime;
- (void)traceFPS;
- (void)traceMemoryUsage;
- (void)traceCPUUsage;
- (void)stopGame:(id)arg1;
- (void)startGame:(id)arg1;
- (void)endGameTrace:(id)arg1;
- (void)beginGameTrace:(id)arg1 view:(id)arg2;
- (id)traceFilePath;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

