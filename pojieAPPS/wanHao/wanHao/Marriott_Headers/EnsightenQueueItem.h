//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSDate, NSString;

@interface EnsightenQueueItem : NSObject <NSCoding>
{
    NSString *js;
    NSString *ruleId;
    NSDate *date;
}

+ (id)createItemWithJS:(id)arg1;
@property(retain, nonatomic) NSDate *date; // @synthesize date;
@property(retain, nonatomic) NSString *ruleId; // @synthesize ruleId;
@property(retain, nonatomic) NSString *js; // @synthesize js;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithJS:(id)arg1 ruleId:(id)arg2 date:(id)arg3;

@end
