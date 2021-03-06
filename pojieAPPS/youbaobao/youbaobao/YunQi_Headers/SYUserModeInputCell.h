//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UITextFieldDelegate-Protocol.h"

@class IMYIcon, IMYLineView, IMYPickerView, NSString, SYUserModeInputCellModel, UIButton, UIImageView, UILabel, UITextField;

@interface SYUserModeInputCell : UIView <UITextFieldDelegate>
{
    SYUserModeInputCellModel *_model;
    IMYPickerView *_pickerView;
    UILabel *_titleLabel;
    UITextField *_textField;
    CDUnknownBlockType _helpCb;
    IMYIcon *_expendIcon;
    UIImageView *_iconImageView;
    unsigned long long _cellType;
    IMYLineView *_lineView;
    UIImageView *_backgroundImageView;
    UIButton *_helpBtn;
    UIButton *_touchBtn;
}

@property(retain, nonatomic) UIButton *touchBtn; // @synthesize touchBtn=_touchBtn;
@property(retain, nonatomic) UIButton *helpBtn; // @synthesize helpBtn=_helpBtn;
@property(retain, nonatomic) UIImageView *backgroundImageView; // @synthesize backgroundImageView=_backgroundImageView;
@property(retain, nonatomic) IMYLineView *lineView; // @synthesize lineView=_lineView;
@property(nonatomic) unsigned long long cellType; // @synthesize cellType=_cellType;
@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(retain, nonatomic) IMYIcon *expendIcon; // @synthesize expendIcon=_expendIcon;
@property(copy, nonatomic) CDUnknownBlockType helpCb; // @synthesize helpCb=_helpCb;
@property(retain, nonatomic) UITextField *textField; // @synthesize textField=_textField;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) IMYPickerView *pickerView; // @synthesize pickerView=_pickerView;
@property(retain, nonatomic) SYUserModeInputCellModel *model; // @synthesize model=_model;
- (void).cxx_destruct;
- (void)touchBtnAction;
- (void)helpBtnClick;
- (void)setBackGroundImageHiden:(_Bool)arg1;
- (void)showKeyboard;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)setupUIWithCellType:(unsigned long long)arg1;
- (void)keyChange;
- (id)initWithModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

