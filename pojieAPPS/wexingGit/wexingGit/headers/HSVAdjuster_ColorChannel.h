//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MyCamGPUFilter.h"

@interface HSVAdjuster_ColorChannel : MyCamGPUFilter
{
    float fh;
    float fs;
    float fv;
    float flb;
    float fld;
    float frd;
    float frb;
    int channelflag;
}

- (void)SetInputH:(float)arg1 S:(float)arg2 V:(float)arg3 LB:(float)arg4 andLD:(float)arg5 andRD:(float)arg6 andRB:(float)arg7;
- (id)init;
- (void)SetInputH:(float)arg1 S:(float)arg2 V:(float)arg3;

@end

