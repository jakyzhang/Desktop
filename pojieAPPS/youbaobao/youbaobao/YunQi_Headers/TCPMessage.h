//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface TCPMessage : NSObject
{
    long long _status;
    long long _type;
    NSString *_sn;
    NSString *_timeString;
    double _time;
}

+ (_Bool)YYSuper;
+ (void)initialize;
@property(nonatomic) double time; // @synthesize time=_time;
@property(copy, nonatomic) NSString *timeString; // @synthesize timeString=_timeString;
@property(copy, nonatomic) NSString *sn; // @synthesize sn=_sn;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(nonatomic) long long status; // @synthesize status=_status;
- (void).cxx_destruct;
- (_Bool)imy_yyjsonModelDidFromDictionary:(id)arg1;

@end
