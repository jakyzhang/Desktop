//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IMYVKWebViewController.h"

@class IMYRoundButton, SYBadgeButton, UIImageView, UIView;

@interface SYHelpWebVC : IMYVKWebViewController
{
    UIImageView *_redDotView;
    SYBadgeButton *_numberView;
    IMYRoundButton *_feedbackBtn;
    UIView *_bottomBar;
}

+ (id)vcWithUrlString:(id)arg1 navTitleString:(id)arg2;
@property(retain, nonatomic) UIView *bottomBar; // @synthesize bottomBar=_bottomBar;
@property(retain, nonatomic) IMYRoundButton *feedbackBtn; // @synthesize feedbackBtn=_feedbackBtn;
@property(retain, nonatomic) SYBadgeButton *numberView; // @synthesize numberView=_numberView;
@property(retain, nonatomic) UIImageView *redDotView; // @synthesize redDotView=_redDotView;
- (void).cxx_destruct;
- (void)removeRedDot;
- (void)addRedDot;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithUrlString:(id)arg1 navTitleString:(id)arg2;
- (void)dealloc;

@end

