//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TTImageSmoothProcessFilter3.h"

@class GPUImageFramebuffer;

@interface TTImageSmoothProcessFilter4 : TTImageSmoothProcessFilter3
{
    int filterInputTextureUniform4;
    GPUImageFramebuffer *_lastFrameBuffer;
}

@property(retain, nonatomic) GPUImageFramebuffer *lastFrameBuffer; // @synthesize lastFrameBuffer=_lastFrameBuffer;
- (void).cxx_destruct;
- (void)renderToTextureWithVertices:(const float *)arg1 textureCoordinates:(const float *)arg2;
- (void)setBlendSkinMask:(float)arg1;
- (void)dealloc;
- (id)init;

@end

