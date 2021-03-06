//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IMYNewsRootBaseCell.h"

@class UIImage, UIImageView, UILabel;

@interface IMYNewsRootMiniVideoCell : IMYNewsRootBaseCell
{
    _Bool _show3Line;
    UIImageView *_newsImageView;
    UILabel *_timeLabel;
    UIImage *_tagImage;
}

+ (double)OneImageCell3LineHeight;
+ (double)OneImageCellHeight;
@property(retain, nonatomic) UIImage *tagImage; // @synthesize tagImage=_tagImage;
@property(retain, nonatomic) UILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(nonatomic) _Bool show3Line; // @synthesize show3Line=_show3Line;
@property(retain, nonatomic) UIImageView *newsImageView; // @synthesize newsImageView=_newsImageView;
- (void).cxx_destruct;
- (void)setViewTimes:(id)arg1;
- (id)imageWithUIView:(id)arg1;
- (void)setupNewTitleLabelWithModel:(id)arg1;
- (void)setCellModel:(id)arg1;
- (void)setCellModelForBaseInfo:(id)arg1;
- (void)updateNewsConstraints:(_Bool)arg1 is3line:(_Bool)arg2;
- (void)updateNewsRecordConstraints:(_Bool)arg1;
- (void)prepareUI;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

