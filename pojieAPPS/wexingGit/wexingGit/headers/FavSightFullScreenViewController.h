//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FullScreenViewController.h"

#import "FavForwardLogicDelegate-Protocol.h"
#import "FullScreenGestureDelegate-Protocol.h"
#import "WCActionSheetDelegate-Protocol.h"
#import "WCNetworkMediaPlayerDelegate-Protocol.h"
#import "WCPlayerConfigDelegate-Protocol.h"

@class FavSightInfo, FavSimpleSightView, MMUIWindow, NSString, UIButton, WXFullScreenGestureRecognizer;
@protocol FavSightFullScreenViewControllerDelegate;

@interface FavSightFullScreenViewController : FullScreenViewController <FavForwardLogicDelegate, WCActionSheetDelegate, WCNetworkMediaPlayerDelegate, FullScreenGestureDelegate, WCPlayerConfigDelegate>
{
    FavSightInfo *m_sightInfo;
    FavSimpleSightView *_sightView;
    UIButton *m_playAttachVideoButton;
    int _fullPlayTimes;
    WXFullScreenGestureRecognizer *m_gestureReconizer;
    struct CGRect _originalRect;
    MMUIWindow *m_fullScreenWindow;
    _Bool m_toolViewHidden;
    id <FavSightFullScreenViewControllerDelegate> m_delegate;
}

@property(nonatomic) __weak id <FavSightFullScreenViewControllerDelegate> m_delegate; // @synthesize m_delegate;
- (void).cxx_destruct;
- (_Bool)isAd;
- (void)updateThumbImageAndStartPlayVideo;
- (void)onTapSightIconView;
- (void)onVideoPlay;
- (void)onToolViewAutoClose;
- (void)onTapCloseButton:(id)arg1;
- (_Bool)stopAtLastVideoFrameWhenPlayEnd;
- (void)onClosePlayerForViewDetail:(id)arg1;
- (void)onClosePlayer;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)exitFullScreen:(id)arg1;
- (void)onFullScreenLongPressEnd;
- (void)onFullScreenDragEnd;
- (void)onFullScreenDragCancel;
- (void)onFullScreenDragBegin;
- (void)onFullScreenClose;
- (void)onFullScreenBackgroundColorAlphaChange:(double)arg1;
- (void)onFullScreenDragToRect:(struct CGRect)arg1;
- (void)onFullScreenSingleTap;
- (void)onClickDetailButton;
- (void)onClickPlayAttachVideoBtn;
- (void)saveSight:(id)arg1;
- (void)forwardSight:(id)arg1;
- (void)hideVCAnimation;
- (void)showVCAnimation;
- (_Bool)shouldAutorotate;
- (id)getFavForawrdViewController;
- (void)setPlayAttachVideoButtonFrame;
- (void)viewDidLayoutSubviews;
- (struct CGSize)sightVideoSize;
- (void)internalInitWithSightInfo:(id)arg1;
- (void)dealloc;
- (id)initWithSightInfo:(id)arg1 withOriginalRect:(struct CGRect)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

