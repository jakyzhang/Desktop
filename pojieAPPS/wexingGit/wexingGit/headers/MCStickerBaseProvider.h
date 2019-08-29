//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MCStickerProviderProtocol-Protocol.h"

@class GPUImageFramebuffer, NSString;
@protocol MCStickerProviderProtocol;

@interface MCStickerBaseProvider : NSObject <MCStickerProviderProtocol>
{
    float coordData[8];
    int _textureAlphaType;
    GPUImageFramebuffer *_imgBuffer;
    id <MCStickerProviderProtocol> _placehoderProvider;
}

@property(nonatomic) int textureAlphaType; // @synthesize textureAlphaType=_textureAlphaType;
@property(retain, nonatomic) id <MCStickerProviderProtocol> placehoderProvider; // @synthesize placehoderProvider=_placehoderProvider;
@property(retain, nonatomic) GPUImageFramebuffer *imgBuffer; // @synthesize imgBuffer=_imgBuffer;
- (void).cxx_destruct;
- (struct CGSize)providerOriginTextureSize;
- (void)cleanTempTextureWhenDrawFinished;
- (_Bool)texturesLoadFinished;
- (id)textureAtIndex:(long long)arg1;
- (float *)texCoordinateAtIndex:(long long)arg1;
- (void)releaseResource;
- (void)loadResource;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

