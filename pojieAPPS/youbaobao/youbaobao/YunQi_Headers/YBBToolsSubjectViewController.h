//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IMYPublicBaseViewController.h"

#import "UIScrollViewDelegate-Protocol.h"

@class NSArray, NSString, UIScrollView, YBBToolsSubjectTitleView;

@interface YBBToolsSubjectViewController : IMYPublicBaseViewController <UIScrollViewDelegate>
{
    YBBToolsSubjectTitleView *_navTitleView;
    UIScrollView *_containerView;
    NSArray *_vcList;
    NSString *_bMode;
}

@property(copy, nonatomic) NSString *bMode; // @synthesize bMode=_bMode;
@property(copy, nonatomic) NSArray *vcList; // @synthesize vcList=_vcList;
@property(retain, nonatomic) UIScrollView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) YBBToolsSubjectTitleView *navTitleView; // @synthesize navTitleView=_navTitleView;
- (void).cxx_destruct;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)resetScrollsToTop:(long long)arg1;
- (void)setupUI;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
