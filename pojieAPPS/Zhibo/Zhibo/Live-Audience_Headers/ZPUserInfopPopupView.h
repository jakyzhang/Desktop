//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UIAlertViewDelegate-Protocol.h"

@class NSArray, NSDictionary, NSString, UIButton, UIImageView, UILabel, UserModel, ZPUserInfoPopViewBottomButtonsView, ZPUserInfoPopViewDataView, ZPUserInfopPopupViewApproveidView, ZPUserInfopPopupViewUserIDCityView, ZPUserInfopPopupViewUserNameSexLevelView;

@interface ZPUserInfopPopupView : UIView <UIAlertViewDelegate>
{
    _Bool _userIsAI;
    unsigned long long _userType;
    ZPUserInfopPopupViewUserNameSexLevelView *_userNameSexLevelView;
    ZPUserInfopPopupViewUserIDCityView *_userIDCityView;
    ZPUserInfopPopupViewApproveidView *_approveidView;
    UILabel *_introLabel;
    ZPUserInfoPopViewDataView *_dataView;
    ZPUserInfoPopViewBottomButtonsView *_bottomButtonsView;
    CDUnknownBlockType _blockHide;
    CDUnknownBlockType _didFollowedCallBack;
    CDUnknownBlockType _blockZPUserInfopPopupViewTA;
    NSDictionary *_userInfo;
    NSString *_anchorID;
    NSString *_userID;
    UserModel *_userModel;
    UIButton *_BGView;
    UIView *_containerView;
    UIView *_containerBGView;
    UIImageView *_userIconView;
    UIImageView *_peerageHeaderView;
    UIImageView *_peerageIcon;
    UIButton *_closeBtn;
    UIButton *_leftBtn;
    UIButton *_rightBtn;
    NSArray *_administratorByApiArray;
}

@property(retain, nonatomic) NSArray *administratorByApiArray; // @synthesize administratorByApiArray=_administratorByApiArray;
@property(retain, nonatomic) UIButton *rightBtn; // @synthesize rightBtn=_rightBtn;
@property(retain, nonatomic) UIButton *leftBtn; // @synthesize leftBtn=_leftBtn;
@property(retain, nonatomic) UIButton *closeBtn; // @synthesize closeBtn=_closeBtn;
@property(retain, nonatomic) UIImageView *peerageIcon; // @synthesize peerageIcon=_peerageIcon;
@property(retain, nonatomic) UIImageView *peerageHeaderView; // @synthesize peerageHeaderView=_peerageHeaderView;
@property(retain, nonatomic) UIImageView *userIconView; // @synthesize userIconView=_userIconView;
@property(retain, nonatomic) UIView *containerBGView; // @synthesize containerBGView=_containerBGView;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) UIButton *BGView; // @synthesize BGView=_BGView;
@property(retain, nonatomic) UserModel *userModel; // @synthesize userModel=_userModel;
@property(retain, nonatomic) NSString *userID; // @synthesize userID=_userID;
@property(retain, nonatomic) NSString *anchorID; // @synthesize anchorID=_anchorID;
@property(retain, nonatomic) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(copy, nonatomic) CDUnknownBlockType blockZPUserInfopPopupViewTA; // @synthesize blockZPUserInfopPopupViewTA=_blockZPUserInfopPopupViewTA;
@property(copy, nonatomic) CDUnknownBlockType didFollowedCallBack; // @synthesize didFollowedCallBack=_didFollowedCallBack;
@property(copy, nonatomic) CDUnknownBlockType blockHide; // @synthesize blockHide=_blockHide;
@property(retain, nonatomic) ZPUserInfoPopViewBottomButtonsView *bottomButtonsView; // @synthesize bottomButtonsView=_bottomButtonsView;
@property(retain, nonatomic) ZPUserInfoPopViewDataView *dataView; // @synthesize dataView=_dataView;
@property(retain, nonatomic) UILabel *introLabel; // @synthesize introLabel=_introLabel;
@property(retain, nonatomic) ZPUserInfopPopupViewApproveidView *approveidView; // @synthesize approveidView=_approveidView;
@property(retain, nonatomic) ZPUserInfopPopupViewUserIDCityView *userIDCityView; // @synthesize userIDCityView=_userIDCityView;
@property(retain, nonatomic) ZPUserInfopPopupViewUserNameSexLevelView *userNameSexLevelView; // @synthesize userNameSexLevelView=_userNameSexLevelView;
@property(nonatomic) _Bool userIsAI; // @synthesize userIsAI=_userIsAI;
@property(nonatomic) unsigned long long userType; // @synthesize userType=_userType;
- (void).cxx_destruct;
- (void)dealloc;
- (void)MarsstatusBarOrientationChange:(id)arg1;
- (void)removeAnimation;
- (void)hide;
- (void)addAnimation;
- (void)showToView:(id)arg1;
- (void)closeBtnClickedEvent:(id)arg1;
- (void)addKicked;
- (void)disableMsg;
- (void)removerAdminer;
- (void)setTheAdministrator;
- (void)userReport;
- (void)userWarining:(long long)arg1 note:(id)arg2;
- (void)warningAlert;
- (void)userWariningAndBan;
- (void)userJuBao;
- (void)actionSheet:(id)arg1 clickedButtonIndex:(long long)arg2;
- (void)leftBtnClickedEvent:(id)arg1;
- (void)rightBtnClickedEvent:(id)arg1;
- (void)cancelledFollow:(id)arg1;
- (void)follow:(id)arg1;
- (void)sendNameCard;
- (void)anchorSendNameCard;
- (void)blockEvent;
- (void)updateContent;
- (_Bool)queryisUserIsmManageWith:(id)arg1;
- (unsigned long long)generatePopupUserType;
- (id)userInfoSignal;
- (void)fetchData;
- (void)setupUI;
- (id)initWithUserID:(id)arg1 PopupAnchorID:(id)arg2 PopType:(unsigned long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
