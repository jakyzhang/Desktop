//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KSYGPUStreamerKit.h"

@class KSYMoviePlayerController, NSLock;

@interface KSYGPUBgmStreamerKit : KSYGPUStreamerKit
{
    NSLock *_quitLock;
    KSYMoviePlayerController *_ksyBgmPlayer;
    long long _BgmState;
}

@property(readonly, nonatomic) long long BgmState; // @synthesize BgmState=_BgmState;
@property(retain, nonatomic) KSYMoviePlayerController *ksyBgmPlayer; // @synthesize ksyBgmPlayer=_ksyBgmPlayer;
- (void).cxx_destruct;
- (void)closeBgmKit;
- (void)dealloc;
- (id)getCurBgmStateName;
- (id)getBgmStateName:(long long)arg1;
- (void)stopPlayBgm;
- (void)startPlayBgm:(id)arg1;
- (void)mixAudio:(struct opaqueCMSampleBuffer *)arg1 to:(int)arg2;
- (id)initWithDefaultCfg;

@end
