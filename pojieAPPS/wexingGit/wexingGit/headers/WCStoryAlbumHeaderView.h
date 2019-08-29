//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionReusableView.h>

@class MMUILabel, NSArray, NSString;

@interface WCStoryAlbumHeaderView : UICollectionReusableView
{
    NSString *_timeStr;
    MMUILabel *_albumTimeLabel;
    NSArray *_monthArray;
}

@property(retain, nonatomic) NSArray *monthArray; // @synthesize monthArray=_monthArray;
@property(retain, nonatomic) MMUILabel *albumTimeLabel; // @synthesize albumTimeLabel=_albumTimeLabel;
@property(copy, nonatomic) NSString *timeStr; // @synthesize timeStr=_timeStr;
- (void).cxx_destruct;
- (_Bool)isTodayOrYesterday:(id)arg1;
- (void)setupUI;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

@end

