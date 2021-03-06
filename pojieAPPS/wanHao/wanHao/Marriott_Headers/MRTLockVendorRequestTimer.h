//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate;

@interface MRTLockVendorRequestTimer : NSObject
{
    _Bool _isCounting;
    double _duration;
    long long _request;
    NSDate *_startTime;
    NSDate *_stopTime;
}

@property(retain) NSDate *stopTime; // @synthesize stopTime=_stopTime;
@property(retain) NSDate *startTime; // @synthesize startTime=_startTime;
@property(nonatomic) long long request; // @synthesize request=_request;
@property(nonatomic) _Bool isCounting; // @synthesize isCounting=_isCounting;
@property(nonatomic) double duration; // @synthesize duration=_duration;
- (void).cxx_destruct;
- (void)stop;
- (void)start;

@end

