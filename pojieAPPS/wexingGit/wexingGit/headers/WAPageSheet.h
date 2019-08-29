//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

@class UIView;
@protocol WAPageSheetDelegate;

@interface WAPageSheet : MMObject
{
    _Bool _isShown;
    _Bool _forbidTapToDismiss;
    _Bool _bSupportRotate;
    _Bool _isShowing;
    _Bool _isDismissing;
    id <WAPageSheetDelegate> _delegate;
    UIView *_contentView;
    UIView *_parentView;
    UIView *_containerView;
    UIView *_interateView;
    WAPageSheet *_retainSheet;
}

@property(nonatomic) _Bool isDismissing; // @synthesize isDismissing=_isDismissing;
@property(nonatomic) _Bool isShowing; // @synthesize isShowing=_isShowing;
@property(retain, nonatomic) WAPageSheet *retainSheet; // @synthesize retainSheet=_retainSheet;
@property(retain, nonatomic) UIView *interateView; // @synthesize interateView=_interateView;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(nonatomic) __weak UIView *parentView; // @synthesize parentView=_parentView;
@property(nonatomic) _Bool bSupportRotate; // @synthesize bSupportRotate=_bSupportRotate;
@property(nonatomic) _Bool forbidTapToDismiss; // @synthesize forbidTapToDismiss=_forbidTapToDismiss;
@property(nonatomic) _Bool isShown; // @synthesize isShown=_isShown;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) __weak id <WAPageSheetDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (double)operateButtonBottomInset;
- (void)didRotate:(id)arg1;
- (void)tapOnInterateView:(id)arg1;
- (double)contentHeight;
- (double)contentWidth;
- (void)resetContentViewCornerRadius;
- (void)layoutSubViews;
- (void)loadSubViews;
- (void)initContentView;
- (void)initInterateView;
- (void)initContainerView;
- (void)loadViews;
- (void)resetPosition;
- (void)dismissWithCompletion:(CDUnknownBlockType)arg1;
- (void)dismissWithAnimation;
- (void)resetShownPosition;
- (void)showInView:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)init;

@end

