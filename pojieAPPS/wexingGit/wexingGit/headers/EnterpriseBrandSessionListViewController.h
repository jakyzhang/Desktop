//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "EnterpriseBrandContactHelperDelegate-Protocol.h"
#import "EnterpriseBrandSearchControllerDelegate-Protocol.h"
#import "ForwardMessageLogicDelegate-Protocol.h"
#import "IEnterpriseBrandContactMgrExt-Protocol.h"
#import "IEnterpriseBrandSessionMgrExt-Protocol.h"
#import "IMMNewSessionMgrExt-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class EnterpriseBrandContactHelper, EnterpriseBrandSearchController, ForwardMessageLogicController, MMSearchBar, MMTableView, NSString, UIButton, UIView;

@interface EnterpriseBrandSessionListViewController : MMUIViewController <IEnterpriseBrandContactMgrExt, ForwardMessageLogicDelegate, EnterpriseBrandSearchControllerDelegate, EnterpriseBrandContactHelperDelegate, IEnterpriseBrandSessionMgrExt, UITableViewDelegate, UITableViewDataSource, IMMNewSessionMgrExt>
{
    NSString *_mainUserName;
    MMTableView *_tableView;
    UIView *_footerView;
    UIView *_footerViewBackground;
    UIView *_emptyView;
    unsigned int _fromScene;
    ForwardMessageLogicController *m_forwardLogic;
    EnterpriseBrandSearchController *_searchController;
    MMSearchBar *_searchBar;
    UIButton *_weworkButton;
    _Bool _isEntering;
    unsigned int _enterTime;
    unsigned int _wwEntryType;
    EnterpriseBrandContactHelper *_helper;
}

- (void).cxx_destruct;
- (id)getTitleString;
- (id)makeNormalCell:(id)arg1;
- (void)reloadTable;
- (void)openMainBrandInfo:(id)arg1;
- (void)openWework:(id)arg1;
- (void)openDisabledBrandList:(id)arg1;
- (id)getCurrentViewController;
- (void)shareToFriend:(id)arg1;
- (void)menuItemClick:(id)arg1;
- (void)showRightTopMenuBtn:(id)arg1;
- (id)getViewController;
- (id)getMMSearchBar;
- (void)onEnterpriseBrandAttrChanged:(id)arg1;
- (void)onEnterpriseBrandSessionsChanged:(id)arg1;
- (void)onSessionChanged:(id)arg1;
- (void)onSessionTotalUnreadCountChange:(unsigned int)arg1;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)reportSubBrandClick:(id)arg1 SubType:(int)arg2 unreadCount:(int)arg3;
- (void)reportExposeWeWorkBanner:(unsigned int)arg1;
- (void)reportClick:(unsigned int)arg1;
- (void)reportQuit;
- (void)reportEnter;
- (void)viewWillBePoped:(_Bool)arg1;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)willDisappear;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)updateTitleView;
- (void)updateLeftBarItem;
- (void)hideSearchBar;
- (void)resetBannerTips;
- (void)initWeworkEntry;
- (void)initSearchBar;
- (void)initFooterView;
- (void)initTableView;
- (void)initView;
- (_Bool)reloadWeworkEntryData;
- (void)initData;
- (void)dealloc;
- (id)initWithEnterpriseMainUserName:(id)arg1 fromScene:(unsigned int)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

