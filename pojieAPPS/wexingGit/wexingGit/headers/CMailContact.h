//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSString;

@interface CMailContact : NSObject <NSCoding>
{
    unsigned int freq;
    unsigned int sort;
    unsigned int uin;
    NSString *name;
    NSString *addr;
}

@property(nonatomic) unsigned int uin; // @synthesize uin;
@property(retain, nonatomic) NSString *addr; // @synthesize addr;
@property(retain, nonatomic) NSString *name; // @synthesize name;
@property(nonatomic) unsigned int sort; // @synthesize sort;
@property(nonatomic) unsigned int freq; // @synthesize freq;
- (void).cxx_destruct;
- (long long)compare:(id)arg1;
- (id)description;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)init;

@end

