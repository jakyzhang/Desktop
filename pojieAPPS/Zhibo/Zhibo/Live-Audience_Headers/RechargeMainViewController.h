//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XFWkwebView.h"

#import "DZNEmptyDataSetDelegate-Protocol.h"
#import "DZNEmptyDataSetSource-Protocol.h"

@class NSString, NSTimer;

@interface RechargeMainViewController : XFWkwebView <DZNEmptyDataSetSource, DZNEmptyDataSetDelegate>
{
    _Bool shouldRefresh;
    NSTimer *_timer;
}

@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
- (void).cxx_destruct;
- (id)titleForEmptyDataSet:(id)arg1;
- (void)updateNavigationItems;
- (void)timer_func;
- (void)configtimer;
- (void)refreshPage;
- (void)viewDidAppear:(_Bool)arg1;
- (long long)preferredStatusBarStyle;
- (void)viewDidLoad;
- (_Bool)tabBarFirstPage;
- (unsigned long long)preferredBarStyle;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

