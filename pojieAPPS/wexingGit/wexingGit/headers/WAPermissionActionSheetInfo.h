//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBCoding-Protocol.h"
#import "WCTColumnCoding-Protocol.h"

@class NSString;

@interface WAPermissionActionSheetInfo : NSObject <PBCoding, WCTColumnCoding>
{
    _Bool isOpenComment;
    _Bool isNeedEvaluateBeforeExit;
    unsigned int popEvaluateLeastStayTime;
}

+ (int)columnTypeForWCDB;
+ (id)unarchiveWithWCTValue:(struct NSObject *)arg1;
+ (void)initialize;
@property(nonatomic) unsigned int popEvaluateLeastStayTime; // @synthesize popEvaluateLeastStayTime;
@property(nonatomic) _Bool isNeedEvaluateBeforeExit; // @synthesize isNeedEvaluateBeforeExit;
@property(nonatomic) _Bool isOpenComment; // @synthesize isOpenComment;
@property(readonly, copy) NSString *description;
- (struct NSObject *)archivedWCTValue;
- (const map_f8690629 *)getValueTagIndexMap;
- (id)getValueTypeTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

