//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPUImageOutput.h"

@class GLProgram, NSObject;
@protocol OS_dispatch_semaphore;

@interface KSYGPUPicInput : GPUImageOutput
{
    NSObject<OS_dispatch_semaphore> *dataUpdateSemaphore;
    unsigned int yTexture;
    unsigned int uTexture;
    GLProgram *yuvConversionProgram;
    int positionAttribute;
    int coordinateAttribute;
    int yTextureUniform;
    int uTextureUniform;
    int matrixUniform;
    const float *_preferredMatrix;
    int imageBufferWidth;
    int imageBufferHeight;
    unsigned int _inputPixelFmt;
    float cropTextureCoord[8];
    _Bool _bVideoRange;
    _Bool _alwaysDiscardsLateVideoFrames;
    int _outputRotation;
    struct CGSize _outputSize;
    struct CGRect _cropRegion;
}

@property(nonatomic) _Bool alwaysDiscardsLateVideoFrames; // @synthesize alwaysDiscardsLateVideoFrames=_alwaysDiscardsLateVideoFrames;
@property(nonatomic) int outputRotation; // @synthesize outputRotation=_outputRotation;
@property(nonatomic) struct CGSize outputSize; // @synthesize outputSize=_outputSize;
@property(nonatomic) struct CGRect cropRegion; // @synthesize cropRegion=_cropRegion;
- (void).cxx_destruct;
- (struct __CVBuffer *)I420ToNV12:(struct __CVBuffer *)arg1;
- (void)calculateCropTextureCoord;
- (void)forceProcessingAtSize:(struct CGSize)arg1;
- (void)dealloc;
- (void)convertYUVToRGBOutput;
- (void)uploadYUVPixel:(struct __CVBuffer *)arg1 time:(CDStruct_1b6d18a9)arg2;
- (void)uploadRGBPixel:(struct __CVBuffer *)arg1 time:(CDStruct_1b6d18a9)arg2;
- (void)uploadPixelBuffer:(struct __CVBuffer *)arg1 time:(CDStruct_1b6d18a9)arg2 format:(unsigned int)arg3;
- (const float *)getMatrix:(struct __CVBuffer *)arg1;
- (void)processPixelData:(void **)arg1 format:(unsigned int)arg2 width:(unsigned long long)arg3 height:(unsigned long long)arg4 stride:(unsigned long long *)arg5 time:(CDStruct_1b6d18a9)arg6;
- (void)processPixelBuffer:(struct __CVBuffer *)arg1 time:(CDStruct_1b6d18a9)arg2 format:(unsigned int)arg3;
- (void)processPixelBuffer:(struct __CVBuffer *)arg1 time:(CDStruct_1b6d18a9)arg2;
- (void)processSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (void)updateTargetsForFrame:(int)arg1 height:(int)arg2 time:(CDStruct_1b6d18a9)arg3;
- (void)initYUVConver;
- (void)initPassThough;
- (id)initWithFmt:(unsigned int)arg1;
- (id)init;

@end

