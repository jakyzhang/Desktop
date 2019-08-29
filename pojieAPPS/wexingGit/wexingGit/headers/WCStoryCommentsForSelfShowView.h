//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIView.h"

#import "UIGestureRecognizerDelegate-Protocol.h"

@class MMTableView, NSString, UIView;

@interface WCStoryCommentsForSelfShowView : MMUIView <UIGestureRecognizerDelegate>
{
    UIView *_gradientMaskView;
    CDUnknownBlockType _closeViewBlock;
    MMTableView *_tableView;
    struct CGRect _iconFrame;
}

@property(retain, nonatomic) MMTableView *tableView; // @synthesize tableView=_tableView;
@property(copy, nonatomic) CDUnknownBlockType closeViewBlock; // @synthesize closeViewBlock=_closeViewBlock;
@property(nonatomic) struct CGRect iconFrame; // @synthesize iconFrame=_iconFrame;
@property(retain, nonatomic) UIView *gradientMaskView; // @synthesize gradientMaskView=_gradientMaskView;
- (void).cxx_destruct;
- (void)doDismissedAnimationWithDuration:(double)arg1 transition:(id)arg2;
- (void)doPresentAnimationWithDuration:(double)arg1 transition:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)adjustTableViewHeight;
- (void)onWiewWillAppear;
- (void)scrollTableViewToRow:(unsigned long long)arg1;
- (void)scrollTableViewToLastCelWithAnimate:(_Bool)arg1;
- (void)reloadData;
- (void)setDelegate:(id)arg1;
- (void)setDataSource:(id)arg1;
- (id)getCommentListCurrentIndexPath;
- (void)closeView;
- (void)addTableView;
- (void)addGradientMaskView;
- (void)addGesture;
- (void)addCloseView;
- (void)setupUI;
- (id)initWithFrame:(struct CGRect)arg1 iconFrame:(struct CGRect)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

