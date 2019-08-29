//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, UIBarButtonItem, UIColor, UIFont, UIImage;

@interface ZOAUCustomModel : NSObject
{
    _Bool _destroyCrollerBySelf;
    _Bool _navBottomLineHidden;
    _Bool _navBarHidden;
    _Bool _navTranslucent;
    _Bool _appNameHidden;
    _Bool _brandHidden;
    _Bool _swithAccHidden;
    _Bool _checkBoxHidden;
    _Bool _checkBoxValue;
    UIColor *_backgroundColor;
    unsigned long long _controllerType;
    UIColor *_navBgColor;
    UIImage *_navBgImage;
    NSString *_navText;
    UIFont *_navTextFont;
    UIColor *_navTextColor;
    UIImage *_navReturnImg;
    UIBarButtonItem *_navControl;
    double _topCustomHeight;
    UIImage *_logoImg;
    double _logoWidth;
    double _logoHeight;
    double _logoOffsetY;
    UIColor *_appNameColor;
    UIFont *_appNameFont;
    double _appNameOffsetY;
    UIColor *_numberColor;
    double _numberOffsetY;
    UIFont *_numberFont;
    UIColor *_brandColor;
    UIFont *_brandFont;
    double _brandOffsetY;
    NSString *_logBtnText;
    UIFont *_logBtnTextFont;
    UIColor *_logBtnTextColor;
    double _logBtnOffsetY;
    double _logBtnRadius;
    UIColor *_logBtnUsableBGColor;
    UIColor *_logBtnUnusableBGColor;
    UIColor *_swithAccTextColor;
    UIFont *_swithAccTextFont;
    double _swithAccOffsetY;
    double _swithAccOffsetX;
    UIImage *_checkBoxCheckedImg;
    UIImage *_checkBoxNormalImg;
    double _privacyOffsetY;
    UIColor *_privacyTextColor;
    UIColor *_privacyColor;
    NSString *_appFPrivacyText;
    NSString *_appFPrivacyUrl;
    NSString *_appSPrivacyText;
    NSString *_appSPrivacyUrl;
    NSString *_loadingText;
    UIColor *_loadingTextColor;
    UIFont *_loadingTextFont;
    double _loadingTextHeight;
    double _loadingBgWidth;
    double _loadingBgHeight;
    double _loadingBgRadius;
    UIColor *_loadingBgColor;
}

@property(readonly, nonatomic) UIColor *loadingBgColor; // @synthesize loadingBgColor=_loadingBgColor;
@property(readonly, nonatomic) double loadingBgRadius; // @synthesize loadingBgRadius=_loadingBgRadius;
@property(readonly, nonatomic) double loadingBgHeight; // @synthesize loadingBgHeight=_loadingBgHeight;
@property(readonly, nonatomic) double loadingBgWidth; // @synthesize loadingBgWidth=_loadingBgWidth;
@property(readonly, nonatomic) double loadingTextHeight; // @synthesize loadingTextHeight=_loadingTextHeight;
@property(readonly, nonatomic) UIFont *loadingTextFont; // @synthesize loadingTextFont=_loadingTextFont;
@property(readonly, nonatomic) UIColor *loadingTextColor; // @synthesize loadingTextColor=_loadingTextColor;
@property(retain, nonatomic) NSString *loadingText; // @synthesize loadingText=_loadingText;
@property(readonly, nonatomic) NSString *appSPrivacyUrl; // @synthesize appSPrivacyUrl=_appSPrivacyUrl;
@property(readonly, nonatomic) NSString *appSPrivacyText; // @synthesize appSPrivacyText=_appSPrivacyText;
@property(retain, nonatomic) NSString *appFPrivacyUrl; // @synthesize appFPrivacyUrl=_appFPrivacyUrl;
@property(retain, nonatomic) NSString *appFPrivacyText; // @synthesize appFPrivacyText=_appFPrivacyText;
@property(retain, nonatomic) UIColor *privacyColor; // @synthesize privacyColor=_privacyColor;
@property(retain, nonatomic) UIColor *privacyTextColor; // @synthesize privacyTextColor=_privacyTextColor;
@property(readonly, nonatomic) double privacyOffsetY; // @synthesize privacyOffsetY=_privacyOffsetY;
@property(retain, nonatomic) UIImage *checkBoxNormalImg; // @synthesize checkBoxNormalImg=_checkBoxNormalImg;
@property(retain, nonatomic) UIImage *checkBoxCheckedImg; // @synthesize checkBoxCheckedImg=_checkBoxCheckedImg;
@property(nonatomic) _Bool checkBoxValue; // @synthesize checkBoxValue=_checkBoxValue;
@property(nonatomic) _Bool checkBoxHidden; // @synthesize checkBoxHidden=_checkBoxHidden;
@property(nonatomic) _Bool swithAccHidden; // @synthesize swithAccHidden=_swithAccHidden;
@property(readonly, nonatomic) double swithAccOffsetX; // @synthesize swithAccOffsetX=_swithAccOffsetX;
@property(readonly, nonatomic) double swithAccOffsetY; // @synthesize swithAccOffsetY=_swithAccOffsetY;
@property(readonly, nonatomic) UIFont *swithAccTextFont; // @synthesize swithAccTextFont=_swithAccTextFont;
@property(retain, nonatomic) UIColor *swithAccTextColor; // @synthesize swithAccTextColor=_swithAccTextColor;
@property(retain, nonatomic) UIColor *logBtnUnusableBGColor; // @synthesize logBtnUnusableBGColor=_logBtnUnusableBGColor;
@property(retain, nonatomic) UIColor *logBtnUsableBGColor; // @synthesize logBtnUsableBGColor=_logBtnUsableBGColor;
@property(readonly, nonatomic) double logBtnRadius; // @synthesize logBtnRadius=_logBtnRadius;
@property(readonly, nonatomic) double logBtnOffsetY; // @synthesize logBtnOffsetY=_logBtnOffsetY;
@property(readonly, nonatomic) UIColor *logBtnTextColor; // @synthesize logBtnTextColor=_logBtnTextColor;
@property(readonly, nonatomic) UIFont *logBtnTextFont; // @synthesize logBtnTextFont=_logBtnTextFont;
@property(retain, nonatomic) NSString *logBtnText; // @synthesize logBtnText=_logBtnText;
@property(readonly, nonatomic) _Bool brandHidden; // @synthesize brandHidden=_brandHidden;
@property(nonatomic) double brandOffsetY; // @synthesize brandOffsetY=_brandOffsetY;
@property(readonly, nonatomic) UIFont *brandFont; // @synthesize brandFont=_brandFont;
@property(retain, nonatomic) UIColor *brandColor; // @synthesize brandColor=_brandColor;
@property(readonly, nonatomic) UIFont *numberFont; // @synthesize numberFont=_numberFont;
@property(nonatomic) double numberOffsetY; // @synthesize numberOffsetY=_numberOffsetY;
@property(readonly, nonatomic) UIColor *numberColor; // @synthesize numberColor=_numberColor;
@property(readonly, nonatomic) double appNameOffsetY; // @synthesize appNameOffsetY=_appNameOffsetY;
@property(readonly, nonatomic) UIFont *appNameFont; // @synthesize appNameFont=_appNameFont;
@property(retain, nonatomic) UIColor *appNameColor; // @synthesize appNameColor=_appNameColor;
@property(nonatomic) _Bool appNameHidden; // @synthesize appNameHidden=_appNameHidden;
@property(nonatomic) double logoOffsetY; // @synthesize logoOffsetY=_logoOffsetY;
@property(nonatomic) double logoHeight; // @synthesize logoHeight=_logoHeight;
@property(nonatomic) double logoWidth; // @synthesize logoWidth=_logoWidth;
@property(retain, nonatomic) UIImage *logoImg; // @synthesize logoImg=_logoImg;
@property(nonatomic) double topCustomHeight; // @synthesize topCustomHeight=_topCustomHeight;
@property(retain, nonatomic) UIBarButtonItem *navControl; // @synthesize navControl=_navControl;
@property(retain, nonatomic) UIImage *navReturnImg; // @synthesize navReturnImg=_navReturnImg;
@property(readonly, nonatomic) UIColor *navTextColor; // @synthesize navTextColor=_navTextColor;
@property(readonly, nonatomic) UIFont *navTextFont; // @synthesize navTextFont=_navTextFont;
@property(retain, nonatomic) NSString *navText; // @synthesize navText=_navText;
@property(readonly, nonatomic) UIImage *navBgImage; // @synthesize navBgImage=_navBgImage;
@property(retain, nonatomic) UIColor *navBgColor; // @synthesize navBgColor=_navBgColor;
@property(readonly, nonatomic) _Bool navTranslucent; // @synthesize navTranslucent=_navTranslucent;
@property(readonly, nonatomic) _Bool navBarHidden; // @synthesize navBarHidden=_navBarHidden;
@property(nonatomic) _Bool navBottomLineHidden; // @synthesize navBottomLineHidden=_navBottomLineHidden;
@property(nonatomic) _Bool destroyCrollerBySelf; // @synthesize destroyCrollerBySelf=_destroyCrollerBySelf;
@property(nonatomic) unsigned long long controllerType; // @synthesize controllerType=_controllerType;
@property(retain, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
- (void).cxx_destruct;
- (id)init;

@end
