//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class GPUImageOutput, NSArray, TTGPUImageLayerBuffer, TTGPUImageLayerFrameBuffer, UIColor;
@protocol GPUImageInput;

@interface TTGPUImageLayer : NSObject <NSCopying>
{
    float *_texCoordForFramebuffer;
    _Bool _flipX;
    _Bool _flipY;
    _Bool _hidden;
    _Bool _transactionHidden;
    TTGPUImageLayer *_parentNode;
    double _rotate;
    double _scale;
    double _alpha;
    long long _zOrder;
    double _textureScale;
    UIColor *_backgroundColor;
    TTGPUImageLayerBuffer *_backgroundImage;
    long long _backgroundMode;
    TTGPUImageLayerBuffer *_maskImage;
    long long _maskMode;
    NSArray *_childNodes;
    long long _blendMode;
    GPUImageOutput<GPUImageInput> *_effectFilter;
    GPUImageOutput<GPUImageInput> *_terminalFilter;
    long long _terminalFilterIndex;
    TTGPUImageLayer *_transactionLayer;
    NSObject<GPUImageInput> *_filterChainTarget;
    long long _indexTextureOfTheChainTarget;
    TTGPUImageLayerFrameBuffer *_outputBuffer;
    struct CGPoint _anchor;
    struct CGSize _backgroundSize;
    CDStruct_1b6d18a9 _renderTime;
    struct CGRect _frame;
    union _GLKMatrix4 _projectionMat4;
}

@property(retain) TTGPUImageLayerFrameBuffer *outputBuffer; // @synthesize outputBuffer=_outputBuffer;
@property(nonatomic) CDStruct_1b6d18a9 renderTime; // @synthesize renderTime=_renderTime;
@property(readonly, nonatomic) union _GLKMatrix4 projectionMat4; // @synthesize projectionMat4=_projectionMat4;
@property(nonatomic) long long indexTextureOfTheChainTarget; // @synthesize indexTextureOfTheChainTarget=_indexTextureOfTheChainTarget;
@property(retain, nonatomic) NSObject<GPUImageInput> *filterChainTarget; // @synthesize filterChainTarget=_filterChainTarget;
@property(nonatomic) _Bool transactionHidden; // @synthesize transactionHidden=_transactionHidden;
@property(retain, nonatomic) TTGPUImageLayer *transactionLayer; // @synthesize transactionLayer=_transactionLayer;
@property(nonatomic) long long terminalFilterIndex; // @synthesize terminalFilterIndex=_terminalFilterIndex;
@property(retain, nonatomic) GPUImageOutput<GPUImageInput> *terminalFilter; // @synthesize terminalFilter=_terminalFilter;
@property(retain, nonatomic) GPUImageOutput<GPUImageInput> *effectFilter; // @synthesize effectFilter=_effectFilter;
@property(nonatomic) long long blendMode; // @synthesize blendMode=_blendMode;
@property(retain) NSArray *childNodes; // @synthesize childNodes=_childNodes;
@property(nonatomic) long long maskMode; // @synthesize maskMode=_maskMode;
@property(retain, nonatomic) TTGPUImageLayerBuffer *maskImage; // @synthesize maskImage=_maskImage;
@property(nonatomic) long long backgroundMode; // @synthesize backgroundMode=_backgroundMode;
@property(nonatomic) struct CGSize backgroundSize; // @synthesize backgroundSize=_backgroundSize;
@property(retain, nonatomic) TTGPUImageLayerBuffer *backgroundImage; // @synthesize backgroundImage=_backgroundImage;
@property(retain, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(nonatomic) double textureScale; // @synthesize textureScale=_textureScale;
@property(nonatomic) long long zOrder; // @synthesize zOrder=_zOrder;
@property(nonatomic) _Bool hidden; // @synthesize hidden=_hidden;
@property(nonatomic) double alpha; // @synthesize alpha=_alpha;
@property(nonatomic) _Bool flipY; // @synthesize flipY=_flipY;
@property(nonatomic) _Bool flipX; // @synthesize flipX=_flipX;
@property(nonatomic) double scale; // @synthesize scale=_scale;
@property(nonatomic) double rotate; // @synthesize rotate=_rotate;
@property(nonatomic) struct CGPoint anchor; // @synthesize anchor=_anchor;
@property(nonatomic) struct CGRect frame; // @synthesize frame=_frame;
@property(nonatomic) __weak TTGPUImageLayer *parentNode; // @synthesize parentNode=_parentNode;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) struct CGSize size;
@property(nonatomic) struct CGPoint position;
- (union _GLKMatrix4)genLookAtMatrix;
- (union _GLKMatrix4)genProjectionMatrix;
- (id)getTopVisibleChild;
- (_Bool)isVisible;
- (int)nodeBuffType;
- (void)setNeedDisplay;
- (void)childNodePropertyModified;
- (void)destroyBuffer;
- (void)cleanResource;
- (_Bool)framebufferPremultipliedAlpha;
- (long long)framebufferTextureType;
- (float *)texCoordForFramebuffer;
- (id)framebufferForOutput;
- (void)informFilterChainTargetAtTime:(CDStruct_1b6d18a9)arg1;
- (void)renderToBufferInQueue:(CDStruct_1b6d18a9)arg1 withFilter:(id)arg2;
- (void)renderToBuffer:(CDStruct_1b6d18a9)arg1 filter:(id)arg2;
- (void)renderToBuffer:(CDStruct_1b6d18a9)arg1;
- (void)renderToView:(id)arg1 time:(CDStruct_1b6d18a9)arg2 filter:(id)arg3;
- (void)renderToView:(id)arg1 time:(CDStruct_1b6d18a9)arg2;
- (void)removeAllChildNodes;
- (void)removeChildNode:(id)arg1;
- (void)addChildNode:(id)arg1;
- (id)description;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

@end

