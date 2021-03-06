//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class CALayer, NSArray, UILabel, YBBOldLamaHeaderPageModel;

@interface YBBOldLamaHeaderBabyInfoCell : UICollectionViewCell
{
    _Bool _showGradinet;
    UILabel *_timeLabel;
    UILabel *_babyWeightLabel;
    UILabel *_babyHeightLabel;
    UILabel *_babyWeightInfoLabel;
    UILabel *_babyHeightInfoLabel;
    UILabel *_babyChangeLabel;
    UILabel *_detailLabel;
    YBBOldLamaHeaderPageModel *_model;
    CALayer *_gradientLayer;
    NSArray *_weekArray;
}

@property(retain, nonatomic) NSArray *weekArray; // @synthesize weekArray=_weekArray;
@property(nonatomic) __weak CALayer *gradientLayer; // @synthesize gradientLayer=_gradientLayer;
@property(nonatomic) _Bool showGradinet; // @synthesize showGradinet=_showGradinet;
@property(retain, nonatomic) YBBOldLamaHeaderPageModel *model; // @synthesize model=_model;
@property(nonatomic) __weak UILabel *detailLabel; // @synthesize detailLabel=_detailLabel;
@property(nonatomic) __weak UILabel *babyChangeLabel; // @synthesize babyChangeLabel=_babyChangeLabel;
@property(nonatomic) __weak UILabel *babyHeightInfoLabel; // @synthesize babyHeightInfoLabel=_babyHeightInfoLabel;
@property(nonatomic) __weak UILabel *babyWeightInfoLabel; // @synthesize babyWeightInfoLabel=_babyWeightInfoLabel;
@property(nonatomic) __weak UILabel *babyHeightLabel; // @synthesize babyHeightLabel=_babyHeightLabel;
@property(nonatomic) __weak UILabel *babyWeightLabel; // @synthesize babyWeightLabel=_babyWeightLabel;
@property(nonatomic) __weak UILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
- (void).cxx_destruct;
- (void)setupGradient;
- (void)layoutSubviews;
- (void)setupSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

