//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MyCamGPUFilter.h"

@interface HSVChannelSharpen : MyCamGPUFilter
{
    float step_width;
}

@property(nonatomic) float step_width; // @synthesize step_width;
- (void)newFrameReadyAtTime:(CDStruct_1b6d18a9)arg1 atIndex:(long long)arg2;
- (void)SetInputH:(float)arg1 S:(float)arg2 V:(float)arg3;
- (void)setSharpeness:(float)arg1;
- (id)init;
- (id)init:(float)arg1;

@end

