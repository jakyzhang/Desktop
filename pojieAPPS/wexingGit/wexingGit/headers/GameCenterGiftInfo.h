//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "PBCoding-Protocol.h"

@class NSArray, NSString;

@interface GameCenterGiftInfo : MMObject <PBCoding>
{
    NSString *title;
    NSArray *giftList;
    NSString *moreTitle;
    NSString *moreURL;
}

+ (void)initialize;
@property(retain, nonatomic) NSString *moreURL; // @synthesize moreURL;
@property(retain, nonatomic) NSString *moreTitle; // @synthesize moreTitle;
@property(retain, nonatomic) NSArray *giftList; // @synthesize giftList;
@property(retain, nonatomic) NSString *title; // @synthesize title;
- (void).cxx_destruct;
- (void)parseFromResp:(id)arg1;
- (const map_f8690629 *)getValueTagIndexMap;
- (id)getValueTypeTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

