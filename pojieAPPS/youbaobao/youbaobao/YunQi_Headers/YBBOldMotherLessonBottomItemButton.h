//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@class UIImageView, UILabel;

@interface YBBOldMotherLessonBottomItemButton : UIButton
{
    _Bool _popAnimating;
    UIImageView *_leftImageView;
    UILabel *_countLabel;
}

@property(nonatomic) _Bool popAnimating; // @synthesize popAnimating=_popAnimating;
@property(retain, nonatomic) UILabel *countLabel; // @synthesize countLabel=_countLabel;
@property(retain, nonatomic) UIImageView *leftImageView; // @synthesize leftImageView=_leftImageView;
- (void).cxx_destruct;
- (void)scaleToDefault;
- (void)scaleAnimation;
- (void)scaleToSmall;
- (void)layoutSubviews;
- (void)setTitle:(id)arg1 forState:(unsigned long long)arg2;
- (void)setSelected:(_Bool)arg1;
- (_Bool)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (_Bool)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end
