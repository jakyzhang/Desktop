//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class MRTStyledLabel, UIActivityIndicatorView;

@interface MRTResultsSearchHeaderCell : UITableViewCell
{
    _Bool _animating;
    MRTStyledLabel *_titleLabel;
    UIActivityIndicatorView *_activityView;
}

@property(nonatomic) __weak UIActivityIndicatorView *activityView; // @synthesize activityView=_activityView;
@property(nonatomic) __weak MRTStyledLabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) _Bool animating; // @synthesize animating=_animating;
- (void).cxx_destruct;
- (void)setTitleLabelText:(id)arg1;
- (void)layoutSubviews;
- (void)awakeFromNib;

@end
