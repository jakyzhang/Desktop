//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IMYEBBaseViewController.h"

#import "EBCNestTableViewDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class EBCNestTableView, IMEBSignButton, IMYEBImitateTabbarView, IMYEBSearchBar, IMYEBSignChannelsVC, NSString, UIButton;

@interface IMYEBGoodPregnancyVC : IMYEBBaseViewController <UITableViewDelegate, UITableViewDataSource, EBCNestTableViewDelegate>
{
    _Bool _scrollEnabel;
    EBCNestTableView *_tableView;
    IMYEBSignChannelsVC *_preChannelsVC;
    IMYEBSearchBar *_customNavSearchBarView;
    IMYEBImitateTabbarView *_imitateTabbarView;
    IMEBSignButton *_signButton;
    UIButton *_topLeftBackButton;
}

@property(retain, nonatomic) UIButton *topLeftBackButton; // @synthesize topLeftBackButton=_topLeftBackButton;
@property(retain, nonatomic) IMEBSignButton *signButton; // @synthesize signButton=_signButton;
@property(retain, nonatomic) IMYEBImitateTabbarView *imitateTabbarView; // @synthesize imitateTabbarView=_imitateTabbarView;
@property(nonatomic) _Bool scrollEnabel; // @synthesize scrollEnabel=_scrollEnabel;
@property(retain, nonatomic) IMYEBSearchBar *customNavSearchBarView; // @synthesize customNavSearchBarView=_customNavSearchBarView;
@property(retain, nonatomic) IMYEBSignChannelsVC *preChannelsVC; // @synthesize preChannelsVC=_preChannelsVC;
@property(retain, nonatomic) EBCNestTableView *tableView; // @synthesize tableView=_tableView;
- (void).cxx_destruct;
- (_Bool)fullPopGestureRecognizerShouldBegin:(id)arg1;
- (void)setupSignButton;
- (void)showLastTabControllerWithConfig;
- (void)showOtherPageWithIndex:(long long)arg1;
- (void)removeAllSubView;
- (void)scrollViewDidScroll:(id)arg1;
- (id)addSearchButton;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (double)lolitaTableViewHeightForStayPosition:(id)arg1;
- (void)addGoodPregnancyView:(id)arg1;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (void)tableViewEndFresh;
- (void)pregnancyTableScroll:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
