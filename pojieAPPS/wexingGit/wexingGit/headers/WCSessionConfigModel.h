//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "PBCoding-Protocol.h"

@class NSMutableArray, NSString;

@interface WCSessionConfigModel : MMObject <PBCoding>
{
    NSString *sid;
    NSString *pageName;
    NSString *prePage;
    NSMutableArray *sessionParams;
}

+ (void)initialize;
@property(retain, nonatomic) NSMutableArray *sessionParams; // @synthesize sessionParams;
@property(retain, nonatomic) NSString *prePage; // @synthesize prePage;
@property(retain, nonatomic) NSString *pageName; // @synthesize pageName;
@property(retain, nonatomic) NSString *sid; // @synthesize sid;
- (void).cxx_destruct;
- (id)toString;
- (id)initWithSid:(id)arg1 withPageName:(id)arg2 withPrePage:(id)arg3;
- (id)initWithSid:(id)arg1 withPageName:(id)arg2 withPrePage:(id)arg3 withSessionParams:(id)arg4;
- (const map_f8690629 *)getValueTagIndexMap;
- (id)getValueTypeTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

