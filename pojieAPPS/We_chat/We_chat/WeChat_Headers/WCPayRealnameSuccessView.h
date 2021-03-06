//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UIImageView, UILabel;
@protocol WCPayRealnameSuccessViewDelegate;

@interface WCPayRealnameSuccessView : UIView
{
    UIView *_headerView;
    UIImageView *_iconImageView;
    UILabel *_titleLabel;
    UIView *_footerView;
    UIButton *_confirmButton;
    double _minHeight;
    id <WCPayRealnameSuccessViewDelegate> _m_delegate;
}

@property(retain) id <WCPayRealnameSuccessViewDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
@property double minHeight; // @synthesize minHeight=_minHeight;
@property(retain) UIButton *confirmButton; // @synthesize confirmButton=_confirmButton;
@property(retain) UIView *footerView; // @synthesize footerView=_footerView;
@property(retain) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(retain) UIView *headerView; // @synthesize headerView=_headerView;
- (void).cxx_destruct;
- (void)onClickConfirmButton;
- (void)updateConfirmView;
- (void)updateFooterView;
- (void)updateTitleView;
- (void)updateIconView;
- (void)updateHeaderView;
- (void)updateView;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)updateMinHeight:(double)arg1;
- (void)updateDelegate:(id)arg1;

@end

