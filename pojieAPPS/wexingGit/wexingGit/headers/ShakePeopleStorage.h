//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"
#import "PBCoding-Protocol.h"

@class NSMutableArray, NSString;

@interface ShakePeopleStorage : NSObject <PBCoding, NSCoding, NSCopying>
{
    NSMutableArray *m_arrShakeList;
    unsigned int m_uiSoundStatus;
    unsigned int m_uiNewArriveCount;
}

+ (void)initialize;
@property(nonatomic) unsigned int m_uiNewArriveCount; // @synthesize m_uiNewArriveCount;
@property(nonatomic) unsigned int m_uiSoundStatus; // @synthesize m_uiSoundStatus;
@property(retain, nonatomic) NSMutableArray *m_arrShakeList; // @synthesize m_arrShakeList;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (void)preInit;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (const map_f8690629 *)getValueTagIndexMap;
- (id)getValueTypeTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

