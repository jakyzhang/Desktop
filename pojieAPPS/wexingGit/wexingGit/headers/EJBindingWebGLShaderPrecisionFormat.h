//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "EJBindingBase.h"

@interface EJBindingWebGLShaderPrecisionFormat : EJBindingBase
{
    int rangeMin;
    int rangeMax;
    int precision;
}

+ (void *)_ptr_to_get___id;
+ (struct OpaqueJSValue *)createJSObjectWithContext:(struct OpaqueJSContext *)arg1 scriptView:(id)arg2 rangeMin:(int)arg3 rangeMax:(int)arg4 precision:(int)arg5;
+ (void *)_ptr_to_get_precision;
+ (void *)_ptr_to_get_rangeMax;
+ (void *)_ptr_to_get_rangeMin;
- (struct OpaqueJSValue *)_get___id:(struct OpaqueJSContext *)arg1;
- (struct OpaqueJSValue *)_get_precision:(struct OpaqueJSContext *)arg1;
- (struct OpaqueJSValue *)_get_rangeMax:(struct OpaqueJSContext *)arg1;
- (struct OpaqueJSValue *)_get_rangeMin:(struct OpaqueJSContext *)arg1;
- (id)initWithRangeMin:(int)arg1 rangeMax:(int)arg2 precision:(int)arg3;

@end

