//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "IQQMailExt-Protocol.h"
#import "MMMailContactSelectViewDelegate-Protocol.h"
#import "MailAttachmentControlViewDelegate-Protocol.h"
#import "MailContactFilterViewDelegate-Protocol.h"
#import "MailContentViewDelegate-Protocol.h"
#import "MailRTEImageAttachmentViewDelegate-Protocol.h"
#import "MailRTEToolViewDelegate-Protocol.h"
#import "MailReceiverEditViewDelegate-Protocol.h"
#import "RTEAttachmentViewProviderDelegate-Protocol.h"
#import "UIAlertViewDelegate-Protocol.h"
#import "UINavigationControllerDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "UITextViewDelegate-Protocol.h"
#import "VerifyQQPwdMgrExt-Protocol.h"
#import "WCActionSheetDelegate-Protocol.h"

@class CMail, MMTableView, MMTimer, MailAttachmentControlView, MailContactFilterView, MailContentView, MailRTEToolView, MailReceiverEditView, MailSubjectEditView, NSMutableArray, NSString, NSTextStorage, RTEAttachmentViewProvider, UIView;

@interface WriteMailViewController : MMUIViewController <MailRTEToolViewDelegate, MailRTEImageAttachmentViewDelegate, RTEAttachmentViewProviderDelegate, UITableViewDelegate, UITableViewDataSource, UITextViewDelegate, WCActionSheetDelegate, UINavigationControllerDelegate, MailContactFilterViewDelegate, MailContentViewDelegate, UIAlertViewDelegate, IQQMailExt, MMMailContactSelectViewDelegate, MailReceiverEditViewDelegate, MailAttachmentControlViewDelegate, VerifyQQPwdMgrExt>
{
    MMTableView *m_tableView;
    MailContactFilterView *m_filterView;
    MailContentView *m_contentView;
    MailRTEToolView *m_toolView;
    MailReceiverEditView *m_receiverView;
    MailReceiverEditView *m_ccView;
    MailReceiverEditView *m_bccView;
    MailSubjectEditView *m_topicView;
    UIView *m_ccBccView;
    NSMutableArray *m_arrShowViews;
    MailAttachmentControlView *m_attachmentControlView;
    int m_firstResponderStatus;
    int m_ccBccFlodStatus;
    CMail *m_mail;
    NSMutableArray *m_arrReceiver;
    NSMutableArray *m_arrCc;
    NSMutableArray *m_arrBcc;
    unsigned int m_uiMailType;
    double m_fKeyboardHeight;
    MMTimer *m_autoSaveTimer;
    unsigned int m_firstResponderTag;
    NSMutableArray *m_arrAllMailContacts;
    NSString *m_nsMailID;
    NSTextStorage *textStorage;
    CMail *m_oldMail;
    NSString *m_oldMailID;
    _Bool m_firstInit;
    RTEAttachmentViewProvider *m_attachmentViewProvider;
    double _keyboardHeight;
}

@property(nonatomic) double keyboardHeight; // @synthesize keyboardHeight=_keyboardHeight;
@property(retain, nonatomic) NSMutableArray *m_arrAllMailContacts; // @synthesize m_arrAllMailContacts;
- (void).cxx_destruct;
- (id)getCurrentViewController;
- (void)onMailContactSelectDone:(id)arg1 userInfo:(id)arg2;
- (void)onVerifyQQPwdCancel;
- (void)onMailContactChanged:(id)arg1;
- (void)onTextFieldNextItem:(id)arg1;
- (void)onTextFieldFinishEdit:(id)arg1;
- (void)onTextFieldChanged:(id)arg1;
- (void)onMailReceiverEditViewHeightChanged:(id)arg1;
- (void)onMailContactDoubleClicked:(id)arg1;
- (void)onAddMailContact:(id)arg1;
- (long long)indexForView:(id)arg1;
- (void)onFirstResponderResigned;
- (id)getViewController;
- (id)initWithMail:(id)arg1 mailID:(id)arg2 mailType:(unsigned int)arg3;
- (void)uploadAttachment:(id)arg1 name:(id)arg2;
- (id)initWithMail:(id)arg1 mailType:(unsigned int)arg2;
- (id)initWithNewEmptyMail:(id)arg1;
- (id)initWithEmptyMail:(id)arg1;
- (id)init;
- (void)dealloc;
- (void)releaseAutoSaveTimer;
- (void)initAutoSaveTimer;
- (void)removeNotificationObservers;
- (void)initNotificationObservers;
- (void)ReleaseTextField;
- (void)viewDidUnload;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)OnGetAllMailContact:(id)arg1 ErrNo:(int)arg2;
- (void)OnUploadSuccess;
- (void)contentViewDidFinishEdit;
- (void)filterViewBeginDragging;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)contactReturn:(id)arg1;
- (void)didStartWriteMailContent;
- (void)contentLengthChanged:(id)arg1;
- (void)contentViewNeedSetContentOffset;
- (id)getFilterName:(id)arg1;
- (void)reloadTableView;
- (void)setContentResponderStatus;
- (float)calculateTableViewHeight;
- (void)initView;
- (void)initTableItemViews;
- (void)updateRightBarButton;
- (void)OnReturn;
- (void)CheckCancel:(id)arg1;
- (void)initData;
- (_Bool)SendBtnEnable;
- (void)RealSend;
- (void)onSend;
- (void)OnComposeSend:(int)arg1;
- (void)doSearch:(id)arg1;
- (void)fixFilterView;
- (void)onAutoSaveTimer;
- (void)deleteDraft;
- (void)loadDraft;
- (void)saveDraft;
- (void)setccBccFlodStatus:(int)arg1;
- (void)setNextFirstRespondStatus:(int)arg1;
- (void)setNewFirstResponse;
- (void)setFirstRespondStatus:(int)arg1;
- (int)getFirstResponderStatusForRow:(long long)arg1;
- (int)getNextResponderStautsForFirstResponderStatus:(int)arg1;
- (id)getViewForFirstResponderStatus:(int)arg1;
- (void)staticReloadTableView;
- (id)getSelfMailContact;
- (_Bool)onShowExceedMaxObjectCountAlert;
- (void)onShowFullToolView;
- (void)onShowBasicToolView;
- (void)insertRTEAttachments:(id)arg1;
- (unsigned int)objectCount;
- (void)makeKeyboardShow;
- (void)makeKeyboardInvisible;
- (_Bool)checkHideKeyboard;
- (void)updateToolBarHeightWithKeyboardHeight:(double)arg1;
- (void)onTopBarFrameChanged;
- (void)tryHideToolView;
- (void)tryShowToolView;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)keyboardDidShow:(id)arg1;
- (void)makeTextViewFirstResponder;
- (void)initToolView;
- (void)onLongPressSelectAttachmentView:(id)arg1;
- (_Bool)canEditNote;
- (id)constructRTEContent;
- (id)getStoredAttachments;
- (id)getAllAttachmentFileInfo;
- (id)getAllAttachments;
- (void)onAttachmentChanged:(id)arg1;
- (void)onAttachmentNeedReload:(id)arg1;
- (void)onCreatAttachmentView:(id)arg1;
- (id)getAttachmentViewProvider;
- (void)initMailContentView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

