//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewHeaderFooterView.h>

@class MMUILabel, NSString, UIView;

@interface BrandProfileSectionHeaderView : UITableViewHeaderFooterView
{
    UIView *_bottomView;
    MMUILabel *_titleLabel;
    UIView *_middleDividingLine;
    UIView *_bottomDividingLine;
    NSString *_title;
}

+ (double)headerHeight;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setupSubviews;
- (id)initWithReuseIdentifier:(id)arg1;

@end

