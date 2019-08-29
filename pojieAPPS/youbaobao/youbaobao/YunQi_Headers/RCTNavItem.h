//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UIBarButtonItem, UIColor, UIImage, UIImageView;

@interface RCTNavItem : UIView
{
    _Bool _navigationBarHidden;
    _Bool _shadowHidden;
    _Bool _translucent;
    UIBarButtonItem *_backButtonItem;
    UIBarButtonItem *_leftButtonItem;
    UIBarButtonItem *_rightButtonItem;
    NSString *_title;
    UIImage *_titleImage;
    UIImage *_leftButtonIcon;
    NSString *_leftButtonTitle;
    long long _leftButtonSystemIcon;
    UIImage *_rightButtonIcon;
    NSString *_rightButtonTitle;
    long long _rightButtonSystemIcon;
    UIImage *_backButtonIcon;
    NSString *_backButtonTitle;
    UIColor *_tintColor;
    UIColor *_barTintColor;
    UIColor *_titleTextColor;
    long long _barStyle;
    CDUnknownBlockType _onLeftButtonPress;
    CDUnknownBlockType _onRightButtonPress;
}

@property(copy, nonatomic) CDUnknownBlockType onRightButtonPress; // @synthesize onRightButtonPress=_onRightButtonPress;
@property(copy, nonatomic) CDUnknownBlockType onLeftButtonPress; // @synthesize onLeftButtonPress=_onLeftButtonPress;
@property(nonatomic) long long barStyle; // @synthesize barStyle=_barStyle;
@property(nonatomic) _Bool translucent; // @synthesize translucent=_translucent;
@property(retain, nonatomic) UIColor *titleTextColor; // @synthesize titleTextColor=_titleTextColor;
@property(retain, nonatomic) UIColor *barTintColor; // @synthesize barTintColor=_barTintColor;
@property(retain, nonatomic) UIColor *tintColor; // @synthesize tintColor=_tintColor;
@property(nonatomic) _Bool shadowHidden; // @synthesize shadowHidden=_shadowHidden;
@property(nonatomic) _Bool navigationBarHidden; // @synthesize navigationBarHidden=_navigationBarHidden;
@property(copy, nonatomic) NSString *backButtonTitle; // @synthesize backButtonTitle=_backButtonTitle;
@property(retain, nonatomic) UIImage *backButtonIcon; // @synthesize backButtonIcon=_backButtonIcon;
@property(nonatomic) long long rightButtonSystemIcon; // @synthesize rightButtonSystemIcon=_rightButtonSystemIcon;
@property(copy, nonatomic) NSString *rightButtonTitle; // @synthesize rightButtonTitle=_rightButtonTitle;
@property(retain, nonatomic) UIImage *rightButtonIcon; // @synthesize rightButtonIcon=_rightButtonIcon;
@property(nonatomic) long long leftButtonSystemIcon; // @synthesize leftButtonSystemIcon=_leftButtonSystemIcon;
@property(copy, nonatomic) NSString *leftButtonTitle; // @synthesize leftButtonTitle=_leftButtonTitle;
@property(retain, nonatomic) UIImage *leftButtonIcon; // @synthesize leftButtonIcon=_leftButtonIcon;
@property(retain, nonatomic) UIImage *titleImage; // @synthesize titleImage=_titleImage;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (void)handleRightButtonPress;
@property(readonly, nonatomic) UIBarButtonItem *rightButtonItem; // @synthesize rightButtonItem=_rightButtonItem;
- (void)handleLeftButtonPress;
@property(readonly, nonatomic) UIBarButtonItem *leftButtonItem; // @synthesize leftButtonItem=_leftButtonItem;
@property(readonly, nonatomic) UIBarButtonItem *backButtonItem; // @synthesize backButtonItem=_backButtonItem;
- (id)init;
@property(readonly, nonatomic) UIImageView *titleImageView;

@end
