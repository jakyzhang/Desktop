//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBCoding-Protocol.h"

@class NSString;

@interface WCPayKindaCacheBoolInfo : NSObject <PBCoding>
{
    _Bool data;
    long long expired_time;
}

+ (id)GenFromDictionary:(id)arg1;
+ (void)initialize;
@property(nonatomic) _Bool data; // @synthesize data;
@property(nonatomic) long long expired_time; // @synthesize expired_time;
- (void)genFromDic:(id)arg1;
- (const map_f8690629 *)getValueTagIndexMap;
- (id)getValueTypeTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

