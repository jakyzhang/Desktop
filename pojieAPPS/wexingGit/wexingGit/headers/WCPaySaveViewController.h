//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCPayBaseViewController.h"

#import "WCPayBalanceSelectCardViewDelegate-Protocol.h"

@class MMUILabel, NSString, UIButton, UITextField, UIView, WCPayBindCardInfo, WCPayWebImageView;
@protocol WCPaySaveViewControllerDelegate;

@interface WCPaySaveViewController : WCPayBaseViewController <WCPayBalanceSelectCardViewDelegate>
{
    id <WCPaySaveViewControllerDelegate> m_delegate;
    _Bool _bIsUserManulSelectCard;
    UIView *_headerContentView;
    UIView *_cardContentView;
    WCPayWebImageView *_banklogoImgView;
    UIButton *_bankNameSelectBtn;
    MMUILabel *_bankdetailLabel;
    UIButton *_cardCoverButton;
    UIView *_moneyContentView;
    UITextField *_moneyTextField;
    UIButton *_footerButton;
    WCPayBindCardInfo *_currentCardInfo;
}

@property(nonatomic) _Bool bIsUserManulSelectCard; // @synthesize bIsUserManulSelectCard=_bIsUserManulSelectCard;
@property(retain, nonatomic) WCPayBindCardInfo *currentCardInfo; // @synthesize currentCardInfo=_currentCardInfo;
@property(retain, nonatomic) UIButton *footerButton; // @synthesize footerButton=_footerButton;
@property(retain, nonatomic) UITextField *moneyTextField; // @synthesize moneyTextField=_moneyTextField;
@property(retain, nonatomic) UIView *moneyContentView; // @synthesize moneyContentView=_moneyContentView;
@property(retain, nonatomic) UIButton *cardCoverButton; // @synthesize cardCoverButton=_cardCoverButton;
@property(retain, nonatomic) MMUILabel *bankdetailLabel; // @synthesize bankdetailLabel=_bankdetailLabel;
@property(retain, nonatomic) UIButton *bankNameSelectBtn; // @synthesize bankNameSelectBtn=_bankNameSelectBtn;
@property(retain, nonatomic) WCPayWebImageView *banklogoImgView; // @synthesize banklogoImgView=_banklogoImgView;
@property(retain, nonatomic) UIView *cardContentView; // @synthesize cardContentView=_cardContentView;
@property(retain, nonatomic) UIView *headerContentView; // @synthesize headerContentView=_headerContentView;
- (void).cxx_destruct;
- (void)selectCardViewDidSelectAddNewCard:(id)arg1;
- (void)selectCardView:(id)arg1 didSelectCard:(id)arg2;
- (id)getCardNameFrom:(id)arg1;
- (void)setCardInfo:(id)arg1;
- (id)defaultCard;
- (id)cardInfos;
- (void)textfieldActive;
- (void)textFieldDidChange;
- (void)clickBankName;
- (void)keyboardDidHide:(id)arg1;
- (void)changeY:(id)arg1;
- (void)keyboardDidShow:(id)arg1;
- (void)FillSaveMoneyCancel;
- (void)onNext;
- (void)reloadTableView;
- (void)initNavigationBar;
- (void)reloadCardInfoArea;
- (void)refreshViewWithData:(id)arg1;
- (void)viewDidLoad;
- (void)setDelegate:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

