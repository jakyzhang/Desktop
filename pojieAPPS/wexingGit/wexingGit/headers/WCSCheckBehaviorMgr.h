//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMService.h"

#import "ClickStatSwizzleExt-Protocol.h"
#import "MMService-Protocol.h"

@class NSMutableDictionary, NSString;

@interface WCSCheckBehaviorMgr : MMService <MMService, ClickStatSwizzleExt>
{
    NSMutableDictionary *_dicTextFieldCheck;
    _Bool _bEnableEventMonitor;
    unsigned int _monitorCnt;
    struct shared_ptr<__WCSTECP> _TECInstance;
    NSString *_currentMiniGameID;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)onSendEvent:(id)arg1;
- (void)onMiniGameEnterBackground:(id)arg1;
- (void)onMiniGameEnterForeground:(id)arg1;
- (id)convertScenes:(unsigned long long)arg1;
- (id)endRecord:(unsigned long long)arg1;
- (_Bool)startRecord:(unsigned long long)arg1;
- (void)recordEvent:(id)arg1;
- (id)getTextFieldCheckData:(unsigned long long)arg1;
- (void)removeTextFieldCheck:(unsigned long long)arg1;
- (void)pauseTextFieldCheck:(unsigned long long)arg1;
- (void)stopTextFieldCheck:(unsigned long long)arg1;
- (void)startTextFieldCheck:(unsigned long long)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

