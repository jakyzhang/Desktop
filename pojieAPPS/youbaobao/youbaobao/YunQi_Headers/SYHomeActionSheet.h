//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UIGestureRecognizerDelegate-Protocol.h"

@class NSArray, NSString, UIButton, UIImageView;

@interface SYHomeActionSheet : UIView <UIGestureRecognizerDelegate>
{
    UIButton *_cancelButton;
    NSArray *_otherButtons;
    CDUnknownBlockType _clickBlock;
    UIView *_maskView;
    UIView *_containView;
    NSString *_summary;
    UIImageView *_bg_btn;
}

+ (void)sheetWithCancelTitle:(id)arg1 otherTitles:(id)arg2 summary:(id)arg3 showInViewController:(id)arg4 handleClickIndex:(CDUnknownBlockType)arg5;
+ (id)sheetWithCancelTitle:(id)arg1 otherTitles:(id)arg2;
@property(retain, nonatomic) UIImageView *bg_btn; // @synthesize bg_btn=_bg_btn;
@property(copy, nonatomic) NSString *summary; // @synthesize summary=_summary;
@property(retain, nonatomic) UIView *containView; // @synthesize containView=_containView;
@property(retain, nonatomic) UIView *maskView; // @synthesize maskView=_maskView;
@property(copy, nonatomic) CDUnknownBlockType clickBlock; // @synthesize clickBlock=_clickBlock;
@property(retain, nonatomic) NSArray *otherButtons; // @synthesize otherButtons=_otherButtons;
@property(retain, nonatomic) UIButton *cancelButton; // @synthesize cancelButton=_cancelButton;
- (void).cxx_destruct;
- (void)dealloc;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)forceRemoveFromSuperView;
- (void)removeFromSuperview;
- (void)touch:(id)arg1;
- (void)reLayout;
- (void)showInTabbarController:(id)arg1 handleClickIndex:(CDUnknownBlockType)arg2;
- (void)showInView:(id)arg1 handleClickIndex:(CDUnknownBlockType)arg2;
- (id)buttonWithTitle:(id)arg1;
- (void)tap:(id)arg1;
- (id)initSheetWithCancelTitle:(id)arg1 otherTitles:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

