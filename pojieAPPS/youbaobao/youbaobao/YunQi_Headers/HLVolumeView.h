//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HLVBaseView.h"

@class NSTimer, UIProgressView, UIView;

@interface HLVolumeView : HLVBaseView
{
    _Bool _animating;
    _Bool _waiting;
    UIProgressView *_progressView;
    NSTimer *_timer;
    UIView *_backgroundView;
}

+ (void)hideVolumeView;
+ (void)changeVolumeWithNewVolume:(float)arg1;
+ (id)defaultVolumeView;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) UIProgressView *progressView; // @synthesize progressView=_progressView;
@property(nonatomic) _Bool waiting; // @synthesize waiting=_waiting;
@property(nonatomic) _Bool animating; // @synthesize animating=_animating;
- (void).cxx_destruct;
- (void)hideVolumeViewImmediately;
- (void)hide;
- (void)timerAction:(id)arg1;
- (void)restartTimer;
- (void)showWith:(double)arg1;
- (void)updateVolume:(float)arg1;
- (void)sendRequest:(double)arg1;
- (void)layoutForOrientation:(long long)arg1;
- (id)initWithTheme:(id)arg1;

@end
