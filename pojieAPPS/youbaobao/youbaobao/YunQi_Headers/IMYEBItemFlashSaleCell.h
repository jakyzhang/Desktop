//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import "IMY_ThemeChangeProtocol-Protocol.h"

@class IMYEBBrandItemModel, IMYRoundButton, NSLayoutConstraint, NSString, UIImageView, UILabel, UIView;

@interface IMYEBItemFlashSaleCell : UITableViewCell <IMY_ThemeChangeProtocol>
{
    _Bool _isFirst;
    _Bool _isEditing;
    UIImageView *_tagImageView;
    UIImageView *_itemImgeView;
    UIImageView *_typeTagImageView;
    UILabel *_itemTitleLabel;
    UILabel *_itemDetailLabel;
    UILabel *_priceLabel;
    UILabel *_originPriceLabel;
    UILabel *_buyCountLabel;
    IMYRoundButton *_buyButton;
    UIImageView *_subTitleTagImageView;
    IMYRoundButton *_selectButton;
    UIView *_selectView;
    IMYEBBrandItemModel *_model;
    NSLayoutConstraint *_originPriceBottomConstraint;
    NSLayoutConstraint *_originPriceLeadingConstraint;
    NSLayoutConstraint *_buyButtonWithConstraint;
    NSLayoutConstraint *_buyButtonHeightConstraint;
    NSLayoutConstraint *_itemImageWidthConstraint;
    NSLayoutConstraint *_itemImageHeightConstraint;
    NSLayoutConstraint *_tagWithConstraint;
    NSLayoutConstraint *_tagHeightConstraint;
    NSLayoutConstraint *_subTitleTagWidthConstraint;
    NSLayoutConstraint *_subTitleTagHeightConstraint;
    NSLayoutConstraint *_itemDetailLeadingSpacingConstraint;
    NSLayoutConstraint *_priceBottomConstraint;
    NSLayoutConstraint *_itemImageCenterYConstraint;
}

+ (double)cellHeight;
+ (id)imy_loadFromXIB;
+ (void)load;
@property(nonatomic) _Bool isEditing; // @synthesize isEditing=_isEditing;
@property(retain, nonatomic) NSLayoutConstraint *itemImageCenterYConstraint; // @synthesize itemImageCenterYConstraint=_itemImageCenterYConstraint;
@property(nonatomic) NSLayoutConstraint *priceBottomConstraint; // @synthesize priceBottomConstraint=_priceBottomConstraint;
@property(nonatomic) NSLayoutConstraint *itemDetailLeadingSpacingConstraint; // @synthesize itemDetailLeadingSpacingConstraint=_itemDetailLeadingSpacingConstraint;
@property(nonatomic) NSLayoutConstraint *subTitleTagHeightConstraint; // @synthesize subTitleTagHeightConstraint=_subTitleTagHeightConstraint;
@property(nonatomic) NSLayoutConstraint *subTitleTagWidthConstraint; // @synthesize subTitleTagWidthConstraint=_subTitleTagWidthConstraint;
@property(nonatomic) NSLayoutConstraint *tagHeightConstraint; // @synthesize tagHeightConstraint=_tagHeightConstraint;
@property(nonatomic) NSLayoutConstraint *tagWithConstraint; // @synthesize tagWithConstraint=_tagWithConstraint;
@property(nonatomic) NSLayoutConstraint *itemImageHeightConstraint; // @synthesize itemImageHeightConstraint=_itemImageHeightConstraint;
@property(nonatomic) NSLayoutConstraint *itemImageWidthConstraint; // @synthesize itemImageWidthConstraint=_itemImageWidthConstraint;
@property(nonatomic) NSLayoutConstraint *buyButtonHeightConstraint; // @synthesize buyButtonHeightConstraint=_buyButtonHeightConstraint;
@property(nonatomic) NSLayoutConstraint *buyButtonWithConstraint; // @synthesize buyButtonWithConstraint=_buyButtonWithConstraint;
@property(nonatomic) __weak NSLayoutConstraint *originPriceLeadingConstraint; // @synthesize originPriceLeadingConstraint=_originPriceLeadingConstraint;
@property(nonatomic) __weak NSLayoutConstraint *originPriceBottomConstraint; // @synthesize originPriceBottomConstraint=_originPriceBottomConstraint;
@property(retain, nonatomic) IMYEBBrandItemModel *model; // @synthesize model=_model;
@property(retain, nonatomic) UIView *selectView; // @synthesize selectView=_selectView;
@property(retain, nonatomic) IMYRoundButton *selectButton; // @synthesize selectButton=_selectButton;
@property(nonatomic) _Bool isFirst; // @synthesize isFirst=_isFirst;
@property(nonatomic) UIImageView *subTitleTagImageView; // @synthesize subTitleTagImageView=_subTitleTagImageView;
@property(nonatomic) __weak IMYRoundButton *buyButton; // @synthesize buyButton=_buyButton;
@property(nonatomic) __weak UILabel *buyCountLabel; // @synthesize buyCountLabel=_buyCountLabel;
@property(nonatomic) __weak UILabel *originPriceLabel; // @synthesize originPriceLabel=_originPriceLabel;
@property(nonatomic) __weak UILabel *priceLabel; // @synthesize priceLabel=_priceLabel;
@property(nonatomic) __weak UILabel *itemDetailLabel; // @synthesize itemDetailLabel=_itemDetailLabel;
@property(nonatomic) __weak UILabel *itemTitleLabel; // @synthesize itemTitleLabel=_itemTitleLabel;
@property(nonatomic) __weak UIImageView *typeTagImageView; // @synthesize typeTagImageView=_typeTagImageView;
@property(nonatomic) __weak UIImageView *itemImgeView; // @synthesize itemImgeView=_itemImgeView;
@property(nonatomic) __weak UIImageView *tagImageView; // @synthesize tagImageView=_tagImageView;
- (void).cxx_destruct;
- (void)showSelect:(_Bool)arg1 animations:(_Bool)arg2;
- (void)commonInit;
- (void)layoutSubviews;
- (void)imy_themeChanged;
- (void)setPrice:(id)arg1;
- (void)setOriginPrice:(id)arg1;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)initUI;
- (void)awakeFromNib;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

