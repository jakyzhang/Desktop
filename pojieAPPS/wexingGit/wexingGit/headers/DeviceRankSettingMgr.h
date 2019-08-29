//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMService.h"

#import "MMService-Protocol.h"
#import "PBMessageObserverDelegate-Protocol.h"

@class DeviceRankSetting, NSString;

@interface DeviceRankSettingMgr : MMService <MMService, PBMessageObserverDelegate>
{
    DeviceRankSetting *_rankSetting;
    _Bool bSettingChanged;
}

- (void).cxx_destruct;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)UpdateSettingTOSVR;
- (void)UpdateSettingFromSVR;
- (void)SetTakePartIn:(_Bool)arg1;
- (_Bool)NeedTakePartIn;
- (void)SetLikeNotify:(_Bool)arg1;
- (_Bool)NeedLikeNotify;
- (void)SetRankNotify:(_Bool)arg1;
- (_Bool)NeedRankNotify;
- (void)SetRecordDataNotify:(_Bool)arg1;
- (_Bool)NeedRecordDataNotify;
- (void)saveRankSetting;
- (void)loadRankSetting;
- (id)getRankSettingFilePath;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

