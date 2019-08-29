//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MetalImageFilter.h"

@protocol MTLBuffer;

@interface MetalImageWhiteBalanceFilter : MetalImageFilter
{
    double _temperature;
    double _tint;
    id <MTLBuffer> _buffer;
}

@property(retain, nonatomic) id <MTLBuffer> buffer; // @synthesize buffer=_buffer;
@property(nonatomic) double tint; // @synthesize tint=_tint;
@property(nonatomic) double temperature; // @synthesize temperature=_temperature;
- (void).cxx_destruct;
- (void)assembleRenderEncoder:(id)arg1;
- (void)updateContentBuffer;
- (id)init;

@end

