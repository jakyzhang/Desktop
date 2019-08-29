//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MCKeyFilterManagerDelegate-Protocol.h"
#import "MCMovieWriterDelegate-Protocol.h"

@class GPUImageCropFilter, GPUImageOutput, MCDataOutput, MCEffectFilter, MCKeyFilterManager, MCMovieWriterV2, MCOrientationFilter, MCSDKWatermarkFilter, MCTmplItem, NSArray, NSString, UIImageOrientationFilter;
@protocol GPUImageInput, MCFilterDelegate><MCDataOutputDelegate><MCFilterManagerDelegate;

@interface MCFilterManager : NSObject <MCMovieWriterDelegate, MCKeyFilterManagerDelegate>
{
    int _effectFilterType;
    _Bool _onTakingPhoto;
    _Bool _frontCameraMirror;
    _Bool _motionMuted;
    _Bool _motionInactive;
    _Bool _takePhotoWithOutEffectFilter;
    _Bool _recordMovieWithOutEffectFilter;
    _Bool _recordMovieWithOutMotion;
    _Bool _enableConsoleLog;
    _Bool _ignoreBackground;
    _Bool _disableBeauty;
    _Bool _disableMotion;
    _Bool _disableCosmetic;
    _Bool _onResetAssetWriter;
    int _outputFormat;
    int _outputRotation;
    int _videoBitRate;
    float _audioPowerInput;
    int _selectedFilterType;
    id <MCFilterDelegate><MCDataOutputDelegate><MCFilterManagerDelegate> _delegate;
    NSString *_motionFilterDataFolder;
    NSArray *_filterList;
    GPUImageOutput<GPUImageInput> *_customFilterBefore;
    GPUImageOutput<GPUImageInput> *_customFilter;
    NSObject<GPUImageInput> *_previewFilter;
    double _ratioGap;
    UIImageOrientationFilter *_rotationInputFilter;
    GPUImageCropFilter *_cropFilter;
    MCKeyFilterManager *_keyFilterManager;
    MCEffectFilter *_effectContainerFilter;
    MCOrientationFilter *_rotationOutputFilter;
    unsigned long long _currentOutputOrientationMode;
    MCSDKWatermarkFilter *_watermarkFilter;
    MCMovieWriterV2 *_movieWriter;
    CDUnknownBlockType _movieStartRecordCallback;
    MCDataOutput *_dataOutput;
    GPUImageOutput<GPUImageInput> *_lastFilter;
    double _selectedFilterStrength;
    struct CGSize _preferedVideoSize;
    struct CGSize _preferedPhotoSize;
    struct CGSize _sampleSize;
    struct CGSize _renderSize;
}

+ (unsigned long long)rotationModeWithImgOrientation:(long long)arg1;
+ (id)videoSaveTempPath;
+ (id)videoRecordTempPath;
+ (id)parseTemplateFileWithFullPath:(id)arg1;
@property(nonatomic) double selectedFilterStrength; // @synthesize selectedFilterStrength=_selectedFilterStrength;
@property(nonatomic) int selectedFilterType; // @synthesize selectedFilterType=_selectedFilterType;
@property _Bool onResetAssetWriter; // @synthesize onResetAssetWriter=_onResetAssetWriter;
@property(nonatomic) __weak GPUImageOutput<GPUImageInput> *lastFilter; // @synthesize lastFilter=_lastFilter;
@property(retain, nonatomic) MCDataOutput *dataOutput; // @synthesize dataOutput=_dataOutput;
@property(copy, nonatomic) CDUnknownBlockType movieStartRecordCallback; // @synthesize movieStartRecordCallback=_movieStartRecordCallback;
@property(retain, nonatomic) MCMovieWriterV2 *movieWriter; // @synthesize movieWriter=_movieWriter;
@property(retain, nonatomic) MCSDKWatermarkFilter *watermarkFilter; // @synthesize watermarkFilter=_watermarkFilter;
@property(nonatomic) unsigned long long currentOutputOrientationMode; // @synthesize currentOutputOrientationMode=_currentOutputOrientationMode;
@property(retain, nonatomic) MCOrientationFilter *rotationOutputFilter; // @synthesize rotationOutputFilter=_rotationOutputFilter;
@property(retain, nonatomic) MCEffectFilter *effectContainerFilter; // @synthesize effectContainerFilter=_effectContainerFilter;
@property(retain, nonatomic) MCKeyFilterManager *keyFilterManager; // @synthesize keyFilterManager=_keyFilterManager;
@property(retain, nonatomic) GPUImageCropFilter *cropFilter; // @synthesize cropFilter=_cropFilter;
@property(retain, nonatomic) UIImageOrientationFilter *rotationInputFilter; // @synthesize rotationInputFilter=_rotationInputFilter;
@property(nonatomic) _Bool disableCosmetic; // @synthesize disableCosmetic=_disableCosmetic;
@property(nonatomic) _Bool disableMotion; // @synthesize disableMotion=_disableMotion;
@property(nonatomic) _Bool disableBeauty; // @synthesize disableBeauty=_disableBeauty;
@property(nonatomic) double ratioGap; // @synthesize ratioGap=_ratioGap;
@property(nonatomic) _Bool ignoreBackground; // @synthesize ignoreBackground=_ignoreBackground;
@property(nonatomic) float audioPowerInput; // @synthesize audioPowerInput=_audioPowerInput;
@property(nonatomic) _Bool enableConsoleLog; // @synthesize enableConsoleLog=_enableConsoleLog;
@property(nonatomic) _Bool recordMovieWithOutMotion; // @synthesize recordMovieWithOutMotion=_recordMovieWithOutMotion;
@property(nonatomic) _Bool recordMovieWithOutEffectFilter; // @synthesize recordMovieWithOutEffectFilter=_recordMovieWithOutEffectFilter;
@property(nonatomic) _Bool takePhotoWithOutEffectFilter; // @synthesize takePhotoWithOutEffectFilter=_takePhotoWithOutEffectFilter;
@property(nonatomic) _Bool motionInactive; // @synthesize motionInactive=_motionInactive;
@property(nonatomic) _Bool motionMuted; // @synthesize motionMuted=_motionMuted;
@property(readonly, nonatomic) struct CGSize renderSize; // @synthesize renderSize=_renderSize;
@property(readonly, nonatomic) struct CGSize sampleSize; // @synthesize sampleSize=_sampleSize;
@property(nonatomic) _Bool frontCameraMirror; // @synthesize frontCameraMirror=_frontCameraMirror;
@property(nonatomic) int videoBitRate; // @synthesize videoBitRate=_videoBitRate;
@property(nonatomic) int outputRotation; // @synthesize outputRotation=_outputRotation;
@property(nonatomic) int outputFormat; // @synthesize outputFormat=_outputFormat;
@property(nonatomic) struct CGSize preferedPhotoSize; // @synthesize preferedPhotoSize=_preferedPhotoSize;
@property(nonatomic) struct CGSize preferedVideoSize; // @synthesize preferedVideoSize=_preferedVideoSize;
@property(retain, nonatomic) NSObject<GPUImageInput> *previewFilter; // @synthesize previewFilter=_previewFilter;
@property(retain, nonatomic) GPUImageOutput<GPUImageInput> *customFilter; // @synthesize customFilter=_customFilter;
@property(retain, nonatomic) GPUImageOutput<GPUImageInput> *customFilterBefore; // @synthesize customFilterBefore=_customFilterBefore;
@property(retain, nonatomic) NSArray *filterList; // @synthesize filterList=_filterList;
@property(copy, nonatomic) NSString *motionFilterDataFolder; // @synthesize motionFilterDataFolder=_motionFilterDataFolder;
@property(nonatomic) __weak id <MCFilterDelegate><MCDataOutputDelegate><MCFilterManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)resetMotionState;
- (void)resumeMotionTime;
- (void)pauseMotionTime;
- (void)restartTmpl;
- (void)disableWatermark;
- (void)updateWatermarkCanvasSize:(struct CGSize)arg1;
- (void)updateWatermarkRect:(struct CGRect)arg1;
- (void)enableWatermakWithUIImage:(id)arg1 watermarkAlpha:(double)arg2 canvasSize:(struct CGSize)arg3 imageRect:(struct CGRect)arg4;
- (void)MovieWriterDidAppendFrameBuffer:(id)arg1 withInfo:(id)arg2;
- (void)MovieWriterDidStartRecording:(id)arg1;
- (void)MCKeyFilterManager:(id)arg1 unsupportedMotionTmpl:(double)arg2 andMinCPULevel:(long long)arg3;
- (void)MCKeyFilterManager:(id)arg1 faceFeatureUpdated:(id)arg2;
- (void)MCKeyFilterManagerUpdateFilterChainInQueue:(id)arg1;
- (void)MCKeyFilterManagerMotionTmplUnSpecifiedFilter:(id)arg1;
- (void)MCKeyFilterManager:(id)arg1 motionTmplSelectFilter:(id)arg2;
- (_Bool)setupDataOutput;
- (_Bool)setupVideoWriterIsGIF:(_Bool)arg1;
- (void)updateVideoSize:(struct CGSize)arg1 landscape:(_Bool)arg2 preferedSize:(struct CGSize)arg3;
- (void)updateVideoSize:(struct CGSize)arg1 preferedSize:(struct CGSize)arg2;
- (void)setOrientation:(long long)arg1;
- (void)updateFilterChainInQueue;
- (void)updateFilterChain;
- (void)resetMediaServicesDelayed;
- (void)mediaServicesReseted:(id)arg1;
- (void)resetOutputData;
- (void)stopOutputData:(CDUnknownBlockType)arg1;
- (_Bool)startOutputData;
- (void)cancelRecordVideo;
- (void)finishRecordVideo:(CDUnknownBlockType)arg1;
- (_Bool)startRecordVideo:(_Bool)arg1 complete:(CDUnknownBlockType)arg2;
- (id)takePhoto:(struct opaqueCMSampleBuffer *)arg1;
- (void)receiveAudioSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (float)updateAudioPowerWithCMSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (_Bool)needUpdateAudioPowerAccordingToBuffer;
- (void)processVideoSize:(struct CGSize)arg1 withImgOrientation:(long long)arg2;
- (void)receiveVideoSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 withFormat:(int)arg2 orientation:(long long)arg3;
- (void)receiveVideoSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (id)processPhotoSampleImage:(id)arg1 currentTime:(CDStruct_1b6d18a9)arg2;
- (void)setupGoodluckThreshold:(double)arg1;
- (void)setupFistThreshold:(double)arg1;
- (void)setupHeartThreshold:(double)arg1;
- (void)setupSkinColor:(double)arg1;
- (void)setupToothBeauty:(double)arg1;
- (void)setupMouthHeight:(double)arg1;
- (void)setupMouthSize:(double)arg1;
- (void)setupNoseHeight:(double)arg1;
- (void)setupNoseWing:(double)arg1;
- (void)setupEyeAngle:(double)arg1;
- (void)setupEyeDistance:(double)arg1;
- (void)setupForeHead:(double)arg1;
- (void)setupThinBodyStrength:(double)arg1;
- (void)setupWaistStrength:(double)arg1;
- (void)setupLegStretch:(double)arg1;
- (void)setupFaceFeature:(double)arg1;
- (void)setupEyeLighten:(double)arg1;
- (void)setupRemovePounch:(double)arg1;
- (void)setupThinNose:(double)arg1;
- (void)setupEnlargeEye:(double)arg1;
- (void)setupShortFace:(double)arg1;
- (void)setupThinFace:(double)arg1;
- (void)setupChin:(double)arg1;
- (void)setupVFace:(double)arg1;
- (void)setupBasicFace:(double)arg1;
- (void)_setupEffectFilter:(int)arg1 strength:(double)arg2;
- (void)setupEffectFilter:(int)arg1 strength:(double)arg2;
- (void)setupBeauty:(double)arg1;
- (void)setupBeautyLevel:(long long)arg1;
- (void)selectMotionTmpl:(id)arg1 inDir:(id)arg2;
@property(readonly, nonatomic) NSArray *faceAnalyzers;
@property(readonly, nonatomic) MCTmplItem *motionItem;
- (void)dealloc;
- (void)initializeDefaultFilters;
@property(nonatomic) _Bool enableFaceColor;
@property(retain, nonatomic) NSArray *metaObjects;
@property(nonatomic) _Bool disableFlipSysFaceOri;
- (id)initWithFaceDetectTargetMaxEdge:(double)arg1 andDisableCosmetic:(_Bool)arg2;
- (id)initWithFaceDetectTargetMaxEdge:(double)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

