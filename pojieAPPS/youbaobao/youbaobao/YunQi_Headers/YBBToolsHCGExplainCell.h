//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UIButton, UILabel;

@interface YBBToolsHCGExplainCell : UITableViewCell
{
    CDUnknownBlockType _clickCB;
    UILabel *_titleLabel;
    UILabel *_valueLabel;
    UIButton *_button;
}

+ (id)cellIdentifier;
+ (double)cellHeight;
@property(retain, nonatomic) UIButton *button; // @synthesize button=_button;
@property(retain, nonatomic) UILabel *valueLabel; // @synthesize valueLabel=_valueLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(copy, nonatomic) CDUnknownBlockType clickCB; // @synthesize clickCB=_clickCB;
- (void).cxx_destruct;
- (void)buttonClick:(id)arg1;
- (void)setupUI;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;

@end

