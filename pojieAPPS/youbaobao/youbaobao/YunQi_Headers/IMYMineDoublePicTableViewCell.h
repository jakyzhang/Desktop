//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IMYMineBaseTableViewCell.h"

@class UIImageView;

@interface IMYMineDoublePicTableViewCell : IMYMineBaseTableViewCell
{
    UIImageView *_leftButton;
    UIImageView *_rightButton;
    CDUnknownBlockType _block;
}

+ (double)widthOfButton;
+ (double)heightOfMineCell;
@property(copy, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
@property(retain, nonatomic) UIImageView *rightButton; // @synthesize rightButton=_rightButton;
@property(retain, nonatomic) UIImageView *leftButton; // @synthesize leftButton=_leftButton;
- (void).cxx_destruct;
- (void)showNewWithButton:(id)arg1 show:(_Bool)arg2;
- (id)creatButton;
- (void)setImageWithModel:(id)arg1 button:(id)arg2;
- (void)setMineButtonTappedBlock:(CDUnknownBlockType)arg1;
- (void)setContentViewModel:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

