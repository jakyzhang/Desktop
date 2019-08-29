//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCPayBaseViewController.h"

#import "ILinkEventExt-Protocol.h"
#import "MMTipsViewControllerDelegate-Protocol.h"
#import "WCPayAddressRemarkViewDelegate-Protocol.h"
#import "WCPayGetTransferWordingCgiDelegate-Protocol.h"
#import "WCPayNoticeBannerDelegate-Protocol.h"

@class GetTransferWordingResponse, MMTipsViewController, NSString, WCPayGetTransferWordingCgi, WCPayNoticeBanner;
@protocol WCPayTransferMoneyStatusViewControllerDelegate;

@interface WCPayTransferMoneyStatusViewController : WCPayBaseViewController <WCPayAddressRemarkViewDelegate, WCPayGetTransferWordingCgiDelegate, WCPayNoticeBannerDelegate, MMTipsViewControllerDelegate, ILinkEventExt>
{
    id <WCPayTransferMoneyStatusViewControllerDelegate> m_delegate;
    _Bool _m_expendAddress;
    _Bool _m_shouldRefreshDataOnAppear;
    WCPayGetTransferWordingCgi *_wordingCgi;
    GetTransferWordingResponse *_wordingResponse;
    WCPayNoticeBanner *_noticeBanner;
    MMTipsViewController *_resendTipsView;
}

@property(retain, nonatomic) MMTipsViewController *resendTipsView; // @synthesize resendTipsView=_resendTipsView;
@property _Bool m_shouldRefreshDataOnAppear; // @synthesize m_shouldRefreshDataOnAppear=_m_shouldRefreshDataOnAppear;
@property _Bool m_expendAddress; // @synthesize m_expendAddress=_m_expendAddress;
@property(retain, nonatomic) WCPayNoticeBanner *noticeBanner; // @synthesize noticeBanner=_noticeBanner;
@property(retain, nonatomic) GetTransferWordingResponse *wordingResponse; // @synthesize wordingResponse=_wordingResponse;
@property(retain, nonatomic) WCPayGetTransferWordingCgi *wordingCgi; // @synthesize wordingCgi=_wordingCgi;
- (void).cxx_destruct;
- (void)onClickTipsBtn:(id)arg1 Index:(long long)arg2 tipTag:(long long)arg3;
- (void)showResendTipsView;
- (void)reportAction:(unsigned long long)arg1;
- (void)onWCPayAddressRemarkViewCopy;
- (void)onWCPayAddressRemarkViewExpend;
- (void)banner:(id)arg1 clickWithUrl:(id)arg2;
- (id)getSubTitleWordingInLocal:(_Bool)arg1;
- (id)getMainTitleWordingInLocal:(_Bool)arg1 receiverContact:(id)arg2;
- (void)wcpayGetTransferWordingCgi:(id)arg1 didGetResponse:(id)arg2;
- (void)onOpenQA;
- (void)requestWording;
- (void)OnRealnameSucceed;
- (void)reportLocationAndWifi;
- (void)OnConfirmTransferMoneyBtnDone;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (void)refreshViewWithData:(id)arg1;
- (void)onClickJumpInfo:(id)arg1;
- (void)onClickAddressJumpInfo;
- (void)onClickTextInfo;
- (_Bool)isNotSentFromMeAndWaitingForReceive;
- (void)updateFooterButton:(id)arg1;
- (void)updateAddressInfo:(id)arg1;
- (void)reloadTableView;
- (id)navigationBarBackgroundColor;
- (void)initNavigationBar;
- (void)OnHistoryOrderDetailBack;
- (void)viewDidBePoped:(_Bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)dealloc;
- (void)viewWillAppear:(_Bool)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

