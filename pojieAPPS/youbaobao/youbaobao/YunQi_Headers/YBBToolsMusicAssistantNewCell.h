//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class NSMutableArray;

@interface YBBToolsMusicAssistantNewCell : UITableViewCell
{
    NSMutableArray *_albumList;
    unsigned long long _itemType;
}

+ (double)imageRateWithItemType:(unsigned long long)arg1;
+ (long long)cellItemCountWithItemType:(unsigned long long)arg1;
+ (double)itemSpaceWithItemType:(unsigned long long)arg1;
+ (double)itemWidthWithItemType:(unsigned long long)arg1;
+ (double)cellHeightWithItemType:(unsigned long long)arg1;
@property(nonatomic) unsigned long long itemType; // @synthesize itemType=_itemType;
@property(retain, nonatomic) NSMutableArray *albumList; // @synthesize albumList=_albumList;
- (void).cxx_destruct;
- (void)layoutNormalAlbumView:(id)arg1 ablumModel:(id)arg2;
- (id)itemClassStringWithItemType:(unsigned long long)arg1;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 itemType:(unsigned long long)arg3;

@end

