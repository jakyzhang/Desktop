//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCContentItemBaseView.h"

#import "MMWebViewDelegate-Protocol.h"
#import "UIAlertViewDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"
#import "WCCanvasPageViewControllerDelegate-Protocol.h"
#import "WCForceTouchPreviewProtocol-Protocol.h"
#import "WCImageViewDelegate-Protocol.h"

@class MMImageGridView, NSString, UIImageView, UILabel;

@interface WCContentItemViewTemplateNews : WCContentItemBaseView <WCCanvasPageViewControllerDelegate, UIAlertViewDelegate, MMWebViewDelegate, WCImageViewDelegate, UIGestureRecognizerDelegate, WCForceTouchPreviewProtocol>
{
    MMImageGridView *_imageGridView;
    UIImageView *_defaultImageView;
    UILabel *_titleLabel;
    UIImageView *_originIconView;
    UIImageView *_coverIconView;
    UILabel *_descLabel;
    double _targetMargin;
    double _targetWidth;
}

+ (double)heightForMedia:(id)arg1 showDetail:(_Bool)arg2;
+ (id)getTrimDesc:(id)arg1;
@property(nonatomic) double targetWidth; // @synthesize targetWidth=_targetWidth;
@property(nonatomic) double targetMargin; // @synthesize targetMargin=_targetMargin;
- (void).cxx_destruct;
- (void)reportLinkAdClickWithActionType:(int)arg1;
- (void)onCloseCanvasPageView;
- (struct CGRect)previewingSourceRectForLocation:(struct CGPoint)arg1 inCoordinateView:(id)arg2;
- (id)viewControllerToPreviewWithFromController:(id)arg1 forLocation:(struct CGPoint)arg2 inCoordinateView:(id)arg3;
- (_Bool)canPeek;
- (_Bool)jumpMPVideoViewWithUrl:(id)arg1 shareInfo:(id)arg2;
- (void)throwUrlMessage;
- (void)setNonInteractive;
- (void)setNormalColor;
- (void)setHighlightedColor;
- (void)dealloc;
- (void)onClickWCImage:(id)arg1;
- (void)layoutSubviews;
- (void)cancelNotShowTheUrlAgain;
- (void)confirmNotShowTheUrlAgain;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)onTryNotShowTheUrlAgain:(id)arg1;
- (void)onLongTouch;
- (void)onShareToOpenSDK:(id)arg1;
- (void)addFavorite;
- (void)onFavoriteAdd:(id)arg1;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)initViewsWithWCDataItem:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

