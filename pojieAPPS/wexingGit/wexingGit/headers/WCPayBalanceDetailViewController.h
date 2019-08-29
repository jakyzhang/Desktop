//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCPayBaseViewController.h"

#import "ILinkEventExt-Protocol.h"
#import "MMWebViewDelegate-Protocol.h"
#import "WCActionSheetDelegate-Protocol.h"
#import "WCPayGetBalanceMenuCgiDelegate-Protocol.h"
#import "WCPayNoticeBannerDelegate-Protocol.h"
#import "WCPayRealNameTipsViewControllerDelegate-Protocol.h"

@class GetBalanceMenuResponse, NSDictionary, NSString, RichTextView, WCActionSheet, WCPayGetBalanceMenuCgi;
@protocol WCPayBalanceDetailViewControllerDelegate;

@interface WCPayBalanceDetailViewController : WCPayBaseViewController <WCPayRealNameTipsViewControllerDelegate, WCPayGetBalanceMenuCgiDelegate, WCPayNoticeBannerDelegate, MMWebViewDelegate, WCActionSheetDelegate, ILinkEventExt>
{
    WCActionSheet *m_actionSheet;
    id <WCPayBalanceDetailViewControllerDelegate> m_delegate;
    RichTextView *richTextView;
    _Bool m_bDidPoped;
    NSDictionary *m_dicBanners;
    WCPayGetBalanceMenuCgi *_m_getBalanceMenuCgi;
    GetBalanceMenuResponse *_m_getBalanceResp;
}

@property(retain) GetBalanceMenuResponse *m_getBalanceResp; // @synthesize m_getBalanceResp=_m_getBalanceResp;
@property(retain) WCPayGetBalanceMenuCgi *m_getBalanceMenuCgi; // @synthesize m_getBalanceMenuCgi=_m_getBalanceMenuCgi;
- (void).cxx_destruct;
- (void)lqtActionEntryBtnClick:(id)arg1;
- (void)realNameTipsVCDidConfirm:(id)arg1;
- (void)realNameTipsVCDidCancel:(id)arg1;
- (void)reportWithAction:(unsigned long long)arg1 url:(id)arg2;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)onWCPayGetBalanceMenuCgiError:(id)arg1 errorCode:(unsigned int)arg2;
- (void)onWCPayGetBalanceMenuCgiResp:(id)arg1;
- (void)onRealnameBtnClick:(id)arg1;
- (void)webViewReturn:(id)arg1;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)banner:(id)arg1 clickWithUrl:(id)arg2;
- (void)onLCTBtnClick:(id)arg1;
- (void)onWalletBtnClick:(id)arg1;
- (void)onRightBarButtonClick;
- (void)setDelegate:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)onWatchBalanceList;
- (void)viewDidBePoped:(_Bool)arg1;
- (void)viewDidLoad;
- (id)navigationBarBackgroundColor;
- (void)initNavigationBar;
- (void)OnLeftBarButtonDone;
- (void)refreshViewWithData:(id)arg1;
- (void)addQuestionEntrance;
- (id)GetMainCardHeaderView;
- (_Bool)isShowLCTEntry;
- (id)getHeaderView:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

