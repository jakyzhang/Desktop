//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class IMYAvatarImageView, UILabel;

@interface IMYMyDynamicMessageNoReadView : UIView
{
    CDUnknownBlockType _tapBlock;
    UIView *_containerView;
    IMYAvatarImageView *_iconImageView;
    UILabel *_messageLabel;
    UILabel *_rightArrowLabel;
}

@property(retain, nonatomic) UILabel *rightArrowLabel; // @synthesize rightArrowLabel=_rightArrowLabel;
@property(retain, nonatomic) UILabel *messageLabel; // @synthesize messageLabel=_messageLabel;
@property(retain, nonatomic) IMYAvatarImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(copy, nonatomic) CDUnknownBlockType tapBlock; // @synthesize tapBlock=_tapBlock;
- (void).cxx_destruct;
- (void)setMessageInfo:(id)arg1 count:(unsigned long long)arg2;
- (void)prepareUI;
- (id)initWithFrame:(struct CGRect)arg1;

@end
