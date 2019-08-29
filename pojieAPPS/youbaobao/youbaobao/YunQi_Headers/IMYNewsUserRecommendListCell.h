//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IMYBaseTableViewCell.h"

@class IMYAvatarImageView, IMYCapsuleButton, UIImageView, UILabel;
@protocol IMYNewsUserRecommendListCellDelegate;

@interface IMYNewsUserRecommendListCell : IMYBaseTableViewCell
{
    id <IMYNewsUserRecommendListCellDelegate> _delegate;
    IMYAvatarImageView *_icon;
    UIImageView *_userTageImageView;
    UILabel *_userNameLabel;
    UILabel *_followsLabel;
    UILabel *_desLabel;
    IMYCapsuleButton *_followBtn;
}

@property(retain, nonatomic) IMYCapsuleButton *followBtn; // @synthesize followBtn=_followBtn;
@property(retain, nonatomic) UILabel *desLabel; // @synthesize desLabel=_desLabel;
@property(retain, nonatomic) UILabel *followsLabel; // @synthesize followsLabel=_followsLabel;
@property(retain, nonatomic) UILabel *userNameLabel; // @synthesize userNameLabel=_userNameLabel;
@property(retain, nonatomic) UIImageView *userTageImageView; // @synthesize userTageImageView=_userTageImageView;
@property(retain, nonatomic) IMYAvatarImageView *icon; // @synthesize icon=_icon;
@property(nonatomic) __weak id <IMYNewsUserRecommendListCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)setCellModel:(id)arg1;
- (void)followBtnAction:(id)arg1;
- (void)updateFollowsStatue:(_Bool)arg1;
- (void)prepareUI;

@end
