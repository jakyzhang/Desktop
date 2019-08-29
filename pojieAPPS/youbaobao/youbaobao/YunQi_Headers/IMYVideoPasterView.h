//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IMYBaseAdView.h"

@class IMYTouchEXButton, NSTimer, UIImageView, UILabel, UITapGestureRecognizer, UIView;

@interface IMYVideoPasterView : IMYBaseAdView
{
    _Bool _isShow;
    CDUnknownBlockType _closeBlock;
    UIImageView *_imageView;
    NSTimer *_timer;
    UILabel *_timeLabel;
    UIView *_timeBgView;
    IMYTouchEXButton *_closeButton;
    UILabel *_detailLabel;
    long long _currentSeconds;
    UITapGestureRecognizer *_tap;
}

+ (double)heightWithModel:(id)arg1;
+ (void)load;
@property(nonatomic) _Bool isShow; // @synthesize isShow=_isShow;
@property(retain, nonatomic) UITapGestureRecognizer *tap; // @synthesize tap=_tap;
@property(nonatomic) long long currentSeconds; // @synthesize currentSeconds=_currentSeconds;
@property(retain, nonatomic) UILabel *detailLabel; // @synthesize detailLabel=_detailLabel;
@property(retain, nonatomic) IMYTouchEXButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) UIView *timeBgView; // @synthesize timeBgView=_timeBgView;
@property(retain, nonatomic) UILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(copy, nonatomic) CDUnknownBlockType closeBlock; // @synthesize closeBlock=_closeBlock;
- (void).cxx_destruct;
- (void)timeAction;
- (void)stopTimer;
- (void)startTimer;
- (void)postCloseAction:(_Bool)arg1;
- (void)clickAdAction;
- (void)closeAdBtnAction;
- (void)closeAd;
- (void)showAd;
- (id)imageViews;
- (void)layoutWithModel:(id)arg1;
- (void)setPlaceholderImage;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)setupSubviews;
- (void)dealloc;

@end
