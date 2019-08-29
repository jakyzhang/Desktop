//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "TXICaptureAndEncDelegate-Protocol.h"
#import "TXICustomPreprocessDelegate-Protocol.h"
#import "TXINotifyDelegate-Protocol.h"
#import "TXIQoSDelegate-Protocol.h"
#import "TXIUploaderDelegate-Protocol.h"

@class NSMutableArray, NSMutableDictionary, NSString, TXCCaptureAndEnc, TXCDataReport, TXCEventRecorderProxy, TXCQoS, TXCStreamUploader, TXLivePushConfig, UITextView, UIView;
@protocol OS_dispatch_source, TXAudioCustomProcessDelegate, TXLivePushListener, TXVideoCustomProcessDelegate;

@interface TXLivePush : NSObject <TXINotifyDelegate, TXICustomPreprocessDelegate, TXICaptureAndEncDelegate, TXIUploaderDelegate, TXIQoSDelegate>
{
    int _videoQuality;
    NSString *_rtmpURL;
    UIView *_previewContainView;
    UITextView *_statusView;
    UITextView *_evtLogView;
    NSString *_logMsg;
    struct UIEdgeInsets _logViewMargin;
    NSObject<OS_dispatch_source> *_statusTimer;
    TXCQoS *_qos;
    _Bool _enableCameraCapturer;
    _Bool _realTimeMode;
    _Bool _sendAudioFirst;
    NSMutableArray *_msgArray;
    int _netType;
    int _background;
    NSMutableArray *_userList;
    NSMutableArray *_callFuncBeforeStartPush;
    NSMutableDictionary *_lastReportTime;
    TXLivePushConfig *_config;
    id <TXLivePushListener> _delegate;
    id <TXVideoCustomProcessDelegate> _videoProcessDelegate;
    id <TXAudioCustomProcessDelegate> _audioProcessDelegate;
    TXCDataReport *_pushReporter;
    TXCStreamUploader *_streamUploader;
    TXCCaptureAndEnc *_captureEnc;
    TXCEventRecorderProxy *_eventRecorderProxy;
}

@property(retain) TXCEventRecorderProxy *eventRecorderProxy; // @synthesize eventRecorderProxy=_eventRecorderProxy;
@property(retain) TXCCaptureAndEnc *captureEnc; // @synthesize captureEnc=_captureEnc;
@property(retain) TXCStreamUploader *streamUploader; // @synthesize streamUploader=_streamUploader;
@property(retain) TXCDataReport *pushReporter; // @synthesize pushReporter=_pushReporter;
@property(nonatomic) __weak id <TXAudioCustomProcessDelegate> audioProcessDelegate; // @synthesize audioProcessDelegate=_audioProcessDelegate;
@property(nonatomic) __weak id <TXVideoCustomProcessDelegate> videoProcessDelegate; // @synthesize videoProcessDelegate=_videoProcessDelegate;
@property(nonatomic) __weak id <TXLivePushListener> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) TXLivePushConfig *config; // @synthesize config=_config;
- (void).cxx_destruct;
- (void)onEnableDropStatusChanged:(_Bool)arg1;
- (void)onEncoderParamsChangedBitrate:(long long)arg1 width:(long long)arg2 height:(long long)arg3;
- (long long)onGetVideoDropCount;
- (long long)onGetVideoQueueCurrentCount;
- (long long)onGetVideoQueueMaxCount;
- (long long)onGetQueueOutputSize;
- (long long)onGetQueueInputSize;
- (long long)onGetEncoderRealBitrate;
- (id)appendSEIBuffer:(unsigned long long)arg1 msg:(id)arg2;
- (_Bool)sendMessageEx:(id)arg1;
- (void)sendMessage:(id)arg1;
- (id)add_emulation_prevention_three_byte:(id)arg1;
- (void)onEncNAL:(id)arg1;
- (void)onEncAudio:(id)arg1;
- (void)onRecordPcmData:(id)arg1 timeStamp:(unsigned long long)arg2 sampleRate:(int)arg3 channels:(int)arg4;
- (void)onRecordRawPcmData:(id)arg1 timeStamp:(unsigned long long)arg2 sampleRate:(int)arg3 channels:(int)arg4 withBgm:(_Bool)arg5;
- (void)onDetectFacePoints:(id)arg1;
- (void)onTextureDestoryed;
- (unsigned int)onCustomPreprocess:(unsigned int)arg1 width:(long long)arg2 height:(long long)arg3;
- (void)onNotifyEvent:(int)arg1 withParams:(id)arg2;
- (void)snapshot:(CDUnknownBlockType)arg1;
- (void)showVideoDebugLog:(_Bool)arg1;
- (void)setLogViewMargin:(struct UIEdgeInsets)arg1;
- (struct UIEdgeInsets)marginSuitContainer:(struct UIEdgeInsets)arg1;
- (void)setMotionMute:(_Bool)arg1;
- (void)selectMotionTmpl:(id)arg1 inDir:(id)arg2;
- (void)setGreenScreenFile:(id)arg1;
- (_Bool)setBgmPitch:(float)arg1;
- (_Bool)setVoiceChangerType:(long long)arg1;
- (_Bool)setReverbType:(long long)arg1;
- (void)setVideoQuality:(long long)arg1 adjustBitrate:(_Bool)arg2 adjustResolution:(_Bool)arg3;
- (int)getAdjustStrategyByBitrate:(_Bool)arg1 andResolution:(_Bool)arg2;
- (void)setAdjustStrategyByBitrate:(_Bool)arg1 andResolution:(_Bool)arg2;
- (_Bool)setBGMVolume:(float)arg1;
- (_Bool)setMicVolume:(float)arg1;
- (int)getMusicDuration:(id)arg1;
- (_Bool)resumeBGM;
- (_Bool)pauseBGM;
- (_Bool)stopBGM;
- (_Bool)playBGM:(id)arg1 withBeginNotify:(CDUnknownBlockType)arg2 withProgressNotify:(CDUnknownBlockType)arg3 andCompleteNotify:(CDUnknownBlockType)arg4;
- (_Bool)playBGM:(id)arg1;
- (void)setZoom:(double)arg1;
- (void)setFocusPosition:(struct CGPoint)arg1;
- (void)setSendAudioSampleBufferMuted:(_Bool)arg1;
- (void)sendAudioSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 withType:(long long)arg2;
- (void)sendVideoSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (void)sendCustomPCMData:(char *)arg1 len:(unsigned int)arg2;
- (void)setMute:(_Bool)arg1;
- (void)setRenderRotation:(int)arg1;
- (_Bool)toggleTorch:(_Bool)arg1;
- (void)setSpecialRatio:(float)arg1;
- (void)setFilter:(id)arg1;
- (void)setNoseSlimLevel:(float)arg1;
- (void)setFaceShortLevel:(float)arg1;
- (void)setChinLevel:(float)arg1;
- (void)setFaceVLevel:(float)arg1;
- (void)setFaceScaleLevel:(float)arg1;
- (void)setEyeScaleLevel:(float)arg1;
- (void)setBeautyStyle:(int)arg1 beautyLevel:(float)arg2 whitenessLevel:(float)arg3 ruddinessLevel:(float)arg4;
- (void)setMirror:(_Bool)arg1;
- (int)switchCamera;
- (void)stopPreview;
- (int)startPreview:(id)arg1;
- (int)stopRecord;
- (int)startRecord:(id)arg1;
- (_Bool)isPublishing;
- (void)resumePush;
- (void)pausePush;
- (void)stopPush;
- (int)startPush:(id)arg1;
@property(readonly, nonatomic) _Bool frontCamera;
@property(readonly, nonatomic) NSString *rtmpURL;
- (int)getQuicMode:(int)arg1;
- (void)setSendStrategy:(_Bool)arg1 sendAudioFirst:(_Bool)arg2;
- (struct CGSize)getVideoSize:(struct CGSize)arg1;
- (void)applyConfig;
- (void)sendPushEvent:(int)arg1 withDescription:(id)arg2;
- (void)statusNotify;
- (void)stopStatusNotify;
- (void)startStatusNotify;
- (void)dealloc;
- (id)initWithConfig:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

