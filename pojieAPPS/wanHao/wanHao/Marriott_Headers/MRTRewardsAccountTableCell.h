//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MRTCommonUI/MRTParallaxTableViewCell.h>

@class NSArray;

@interface MRTRewardsAccountTableCell : MRTParallaxTableViewCell
{
    _Bool _shouldHideSeparator;
    NSArray *_marginConstraints;
}

+ (id)sectionTitle;
+ (_Bool)isVisibleInController:(id)arg1;
@property(nonatomic) _Bool shouldHideSeparator; // @synthesize shouldHideSeparator=_shouldHideSeparator;
@property(retain, nonatomic) NSArray *marginConstraints; // @synthesize marginConstraints=_marginConstraints;
- (void).cxx_destruct;
- (void)updateConstraints;
- (void)layoutSubviews;
- (void)cellWasSelectedInController:(id)arg1;
- (_Bool)canBeSelectedInController:(id)arg1;
- (void)resetValuesWithConsumer:(id)arg1 inViewController:(id)arg2;

@end
