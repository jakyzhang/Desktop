//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class MMUILabel, NSArray, UIImageView, UIView, WAHeaderStackDisplayView;

@interface BrandProfileWeappCell : UITableViewCell
{
    MMUILabel *_titleLabel;
    WAHeaderStackDisplayView *_headerStackView;
    UIImageView *_arrowView;
    UIView *_topDividingView;
    UIView *_bottomDividingView;
    NSArray *_iconList;
}

+ (double)cellHeight:(double)arg1;
@property(retain, nonatomic) NSArray *iconList; // @synthesize iconList=_iconList;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setupSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

