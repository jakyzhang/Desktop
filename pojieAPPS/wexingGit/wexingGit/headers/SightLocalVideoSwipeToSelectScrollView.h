//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIScrollView.h>

#import "UIScrollViewDelegate-Protocol.h"

@class NSArray, NSMutableArray, NSString, UIButton;
@protocol SightLocalVideoSwipeToSelectScrollViewDelegate;

@interface SightLocalVideoSwipeToSelectScrollView : UIScrollView <UIScrollViewDelegate>
{
    int _defaultIndex;
    id <SightLocalVideoSwipeToSelectScrollViewDelegate> _scrollDelegate;
    NSArray *_selectionList;
    NSMutableArray *_buttonList;
    UIButton *_currentSelectedButton;
}

@property(retain, nonatomic) UIButton *currentSelectedButton; // @synthesize currentSelectedButton=_currentSelectedButton;
@property(retain, nonatomic) NSMutableArray *buttonList; // @synthesize buttonList=_buttonList;
@property(nonatomic) int defaultIndex; // @synthesize defaultIndex=_defaultIndex;
@property(retain, nonatomic) NSArray *selectionList; // @synthesize selectionList=_selectionList;
@property(nonatomic) __weak id <SightLocalVideoSwipeToSelectScrollViewDelegate> scrollDelegate; // @synthesize scrollDelegate=_scrollDelegate;
- (void).cxx_destruct;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)didSelectOnIndex:(long long)arg1;
- (void)onButtonDidTouchUpInside:(id)arg1;
- (struct CGRect)frameOfLabelWithIndex:(int)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

