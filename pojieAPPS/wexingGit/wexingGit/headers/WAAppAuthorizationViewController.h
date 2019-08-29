//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "MMTipsViewControllerDelegate-Protocol.h"
#import "WAAppDetailInfoManagerExtension-Protocol.h"

@class MMTableViewInfo, NSArray, NSString, UIView, WAContact;
@protocol WAAppAuthorizationDelegate;

@interface WAAppAuthorizationViewController : MMUIViewController <WAAppDetailInfoManagerExtension, MMTipsViewControllerDelegate>
{
    NSString *m_appid;
    NSArray *m_authorationList;
    UIView *m_emptyView;
    MMTableViewInfo *m_tableViewInfo;
    id <WAAppAuthorizationDelegate> _delegate;
    WAContact *_contact;
}

@property(retain, nonatomic) WAContact *contact; // @synthesize contact=_contact;
@property(nonatomic) __weak id <WAAppAuthorizationDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)onGetAppAuthInfoList:(id)arg1 appid:(id)arg2 errorCode:(int)arg3;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (long long)originalIndexOfModifyAuthData:(id)arg1;
- (void)onAppAuthInfoListModifyEnd:(_Bool)arg1 AuthDataList:(id)arg2;
- (void)syncSetAuthState:(id)arg1;
- (void)recoverOriginalAuthState:(long long)arg1 AuthInfoData:(id)arg2;
- (void)onClickTipsBtn:(id)arg1 Index:(long long)arg2 tipTag:(long long)arg3;
- (void)onAuthInfoChangeed:(id)arg1 CellInfo:(id)arg2;
- (void)requestAuthorazitionInfo;
- (void)initEmptyView;
- (id)makeHeaderView;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)reloadTableViewInfo;
- (void)initTableViewInfo;
- (void)onReturn;
- (void)initCustomNavigationBar;
- (void)viewDidBePoped:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithContact:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

