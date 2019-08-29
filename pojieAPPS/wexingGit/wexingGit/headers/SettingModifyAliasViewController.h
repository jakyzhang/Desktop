//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "PBMessageObserverDelegate-Protocol.h"
#import "PasswordLogicDelegate-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"
#import "WCAccountSetPasswordViewControllerDelegate-Protocol.h"

@class MMTableViewInfo, NSString, PasswordLogic, UILabel;
@protocol settingModifyAliasDelegate;

@interface SettingModifyAliasViewController : MMUIViewController <PBMessageObserverDelegate, UITextFieldDelegate, PasswordLogicDelegate, WCAccountSetPasswordViewControllerDelegate>
{
    id <settingModifyAliasDelegate> m_delegate;
    NSString *m_nsAlias;
    MMTableViewInfo *m_tableViewInfo;
    struct WCTableViewNormalCellManager *m_editInfo;
    PasswordLogic *m_checkPasswordLogic;
    UILabel *m_tipLabel;
    UILabel *m_userNameLabel;
    unsigned int _fromScene;
}

@property(nonatomic) unsigned int fromScene; // @synthesize fromScene=_fromScene;
@property(retain, nonatomic) NSString *m_nsAlias; // @synthesize m_nsAlias;
@property(nonatomic) __weak id <settingModifyAliasDelegate> m_delegate; // @synthesize m_delegate;
- (void).cxx_destruct;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)onSaveText;
- (void)ModifyAccount;
- (void)onSetPasswordOK;
- (void)onSetPasswordBack;
- (void)unknownFail:(id)arg1;
- (void)checkHaveNotSetPassword:(id)arg1;
- (void)checkHaveSetPassword:(id)arg1;
- (void)passwordLogicStart:(id)arg1;
- (void)startSetPwd;
- (void)OnSetAliasOK;
- (void)startLoading;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)setError:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)textFieldTextDidChange:(id)arg1;
- (_Bool)textFieldShouldClear:(id)arg1;
- (void)initSetAliasView;
- (void)initSetAliasOKView:(_Bool)arg1;
- (void)disMissThisViewAnimated;
- (void)dealloc;
- (void)viewWillDisappear:(_Bool)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

