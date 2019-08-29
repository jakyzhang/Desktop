//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "PBCoding-Protocol.h"

@class NSString;

@interface MMWebMinimizeContext : MMObject <PBCoding>
{
    unsigned int fFloatViewPointX;
    unsigned int fFloatViewPointY;
    NSString *nsIconUrl;
    NSString *nsTitle;
    NSString *nsDesc;
    NSString *nsThumbUrl;
    NSString *nsAppId;
    unsigned long long uMinimizationExistTime;
    NSString *nsUserName;
    NSString *nsNickName;
}

+ (void)initialize;
@property(copy, nonatomic) NSString *nsNickName; // @synthesize nsNickName;
@property(copy, nonatomic) NSString *nsUserName; // @synthesize nsUserName;
@property(nonatomic) unsigned long long uMinimizationExistTime; // @synthesize uMinimizationExistTime;
@property(nonatomic) unsigned int fFloatViewPointY; // @synthesize fFloatViewPointY;
@property(nonatomic) unsigned int fFloatViewPointX; // @synthesize fFloatViewPointX;
@property(copy, nonatomic) NSString *nsAppId; // @synthesize nsAppId;
@property(copy, nonatomic) NSString *nsThumbUrl; // @synthesize nsThumbUrl;
@property(copy, nonatomic) NSString *nsDesc; // @synthesize nsDesc;
@property(copy, nonatomic) NSString *nsTitle; // @synthesize nsTitle;
@property(copy, nonatomic) NSString *nsIconUrl; // @synthesize nsIconUrl;
- (void).cxx_destruct;
- (const map_f8690629 *)getValueTagIndexMap;
- (id)getValueTypeTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

