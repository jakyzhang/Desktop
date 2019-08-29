//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GPUImageFramebuffer, NSMutableArray;

@interface LKParticleTexture : NSObject
{
    _Bool _premultalpha;
    unsigned int _internalFormat;
    NSMutableArray *_imageData;
    GPUImageFramebuffer *_texBuffer;
    long long _width;
    long long _height;
}

@property(nonatomic) _Bool premultalpha; // @synthesize premultalpha=_premultalpha;
@property(nonatomic) long long height; // @synthesize height=_height;
@property(nonatomic) long long width; // @synthesize width=_width;
@property(retain, nonatomic) GPUImageFramebuffer *texBuffer; // @synthesize texBuffer=_texBuffer;
@property(nonatomic) unsigned int internalFormat; // @synthesize internalFormat=_internalFormat;
@property(retain, nonatomic) NSMutableArray *imageData; // @synthesize imageData=_imageData;
- (void).cxx_destruct;
- (void)loadFromPath:(id)arg1;
- (_Bool)loadKTX:(id)arg1;
- (void)loadImage:(id)arg1;
- (void)loadPVRTC:(id)arg1;
- (_Bool)unpackPVRData:(id)arg1;
- (id)init;

@end

