//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MetalImageFilter.h"

@protocol MTLTexture;

@interface MetalImageLUTFilter : MetalImageFilter
{
    id <MTLTexture> _lutTexture;
}

@property(retain, nonatomic) id <MTLTexture> lutTexture; // @synthesize lutTexture=_lutTexture;
- (void).cxx_destruct;
- (void)assembleRenderEncoder:(id)arg1;
- (id)initWithUIImageNamed:(id)arg1;

@end

