//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IMYPublicBaseViewController.h"

@class FSTopControl, IMYVideoView;

@interface IMYFullScreenVideoVC : IMYPublicBaseViewController
{
    _Bool _autoPlay;
    IMYVideoView *_videoView;
    FSTopControl *_foreViewTopTitleView;
}

@property(retain, nonatomic) FSTopControl *foreViewTopTitleView; // @synthesize foreViewTopTitleView=_foreViewTopTitleView;
@property(retain, nonatomic) IMYVideoView *videoView; // @synthesize videoView=_videoView;
@property(nonatomic) _Bool autoPlay; // @synthesize autoPlay=_autoPlay;
- (void).cxx_destruct;
- (void)backAction;
- (_Bool)prefersStatusBarHidden;
- (void)didReceiveMemoryWarning;
- (_Bool)enableFullPopGestureRecognizer;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithModel:(id)arg1 options:(id)arg2;

@end
