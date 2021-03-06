//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UILabel;

@interface YBBToolsDoctorClassCell : UITableViewCell
{
    UILabel *_titleLabel;
    UILabel *_priceLabel;
    UILabel *_classInfoLabel;
}

+ (id)cellIdentifier;
@property(retain, nonatomic) UILabel *classInfoLabel; // @synthesize classInfoLabel=_classInfoLabel;
@property(retain, nonatomic) UILabel *priceLabel; // @synthesize priceLabel=_priceLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)configData:(id)arg1;
- (void)setupUI;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)awakeFromNib;

@end

