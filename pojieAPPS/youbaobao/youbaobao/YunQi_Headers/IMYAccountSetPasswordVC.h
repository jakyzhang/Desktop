//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IMYAccountBaseVC.h"

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"

@class IMYTouchEXButton, NSString, UITableView, UITextField;

@interface IMYAccountSetPasswordVC : IMYAccountBaseVC <UITableViewDelegate, UITableViewDataSource, UITextFieldDelegate>
{
    NSString *_phone;
    CDUnknownBlockType _completeBlock;
    UITableView *_tableView;
    UITextField *_passwordTextField;
    IMYTouchEXButton *_eyeButton;
}

@property(retain, nonatomic) IMYTouchEXButton *eyeButton; // @synthesize eyeButton=_eyeButton;
@property(retain, nonatomic) UITextField *passwordTextField; // @synthesize passwordTextField=_passwordTextField;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(copy, nonatomic) CDUnknownBlockType completeBlock; // @synthesize completeBlock=_completeBlock;
@property(copy, nonatomic) NSString *phone; // @synthesize phone=_phone;
- (void).cxx_destruct;
- (void)confirmButtonAction:(id)arg1;
- (void)togglePasswordAction:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)secretPhoneNumber;
- (void)createUI;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
