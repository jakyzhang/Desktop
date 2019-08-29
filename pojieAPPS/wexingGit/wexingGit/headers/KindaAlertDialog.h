//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MMKAlertDialog-Protocol.h"
#import "MMTipsViewControllerDelegate-Protocol.h"
#import "UIAlertViewDelegate-Protocol.h"
#import "WCPayWebImageViewDelegate-Protocol.h"

@class MMTipsViewController, NSMutableArray, NSString, UIButton;

@interface KindaAlertDialog : NSObject <UIAlertViewDelegate, MMTipsViewControllerDelegate, WCPayWebImageViewDelegate, MMKAlertDialog>
{
    UIButton *_leftBtn;
    UIButton *_rightBtn;
    NSMutableArray *_m_buttonEventArray;
    NSMutableArray *_m_buttonEvents;
    long long _contentTextAlign;
    MMTipsViewController *_m_tipsVC;
}

@property(retain, nonatomic) MMTipsViewController *m_tipsVC; // @synthesize m_tipsVC=_m_tipsVC;
@property(nonatomic) long long contentTextAlign; // @synthesize contentTextAlign=_contentTextAlign;
@property(retain, nonatomic) NSMutableArray *m_buttonEvents; // @synthesize m_buttonEvents=_m_buttonEvents;
@property(retain, nonatomic) NSMutableArray *m_buttonEventArray; // @synthesize m_buttonEventArray=_m_buttonEventArray;
- (void).cxx_destruct;
- (void)onLoadWCPayWebImageOK:(id)arg1;
- (void)onClickTipsBtn:(id)arg1 Index:(long long)arg2;
- (void)insideShowImpl:(id)arg1 content:(id)arg2 buttonWordings:(id)arg3 buttonEvents:(id)arg4;
- (void)insideShowTipsImpl:(id)arg1 image:(id)arg2 content:(id)arg3 buttonWordings:(id)arg4 buttonEvents:(id)arg5;
- (void)insideShowTipsImpl:(id)arg1 content:(id)arg2 buttonWordings:(id)arg3 buttonEvents:(id)arg4;
- (void)dismiss;
- (void)setContentAlign:(long long)arg1;
- (void)showTouchIdAuthViewImpl:(id)arg1 successEvent:(id)arg2 failEvent:(id)arg3 cancelEvent:(id)arg4 forgetPwdEvent:(id)arg5;
- (void)showImpl:(id)arg1 content:(id)arg2 leftbutton:(id)arg3 middlebutton:(id)arg4 rightbutton:(id)arg5 leftEvent:(id)arg6 middleEvent:(id)arg7 rightEvent:(id)arg8;
- (void)showImpl:(id)arg1 content:(id)arg2 leftbutton:(id)arg3 rightbutton:(id)arg4 leftEvent:(id)arg5 rightEvent:(id)arg6;
- (void)showImpl:(id)arg1 content:(id)arg2 button:(id)arg3 event:(id)arg4;
- (void)showTipsImpl:(id)arg1 image:(id)arg2 content:(id)arg3 leftbutton:(id)arg4 rightbutton:(id)arg5 leftEvent:(id)arg6 rightEvent:(id)arg7;
- (void)showTipsImpl:(id)arg1 image:(id)arg2 content:(id)arg3 button:(id)arg4 event:(id)arg5;
- (void)showTipsImpl:(id)arg1 content:(id)arg2 leftbutton:(id)arg3 middlebutton:(id)arg4 rightbutton:(id)arg5 leftEvent:(id)arg6 middleEvent:(id)arg7 rightEvent:(id)arg8;
- (void)showTipsImpl:(id)arg1 content:(id)arg2 leftbutton:(id)arg3 rightbutton:(id)arg4 leftEvent:(id)arg5 rightEvent:(id)arg6;
- (void)showTipsImpl:(id)arg1 content:(id)arg2 button:(id)arg3 event:(id)arg4;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

