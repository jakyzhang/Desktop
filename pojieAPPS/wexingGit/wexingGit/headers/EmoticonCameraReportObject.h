//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

@class NSString;

@interface EmoticonCameraReportObject : MMObject
{
    unsigned long long m_enterTime;
    unsigned long long m_totalTime;
    unsigned long long m_startRecordTime;
    unsigned long long m_recordTime;
    unsigned long long m_startEditTime;
    unsigned long long m_editTime;
    unsigned long long m_startComposeTime;
    unsigned long long m_composeTime;
    unsigned long long m_startUploadTime;
    unsigned long long m_uploadTime;
    unsigned long long m_recentPulledByCameraEmoticonLabelTime;
    unsigned long long m_scene;
    _Bool _removeBg;
    _Bool _fastPlay;
    _Bool _isWxam;
    _Bool _cameraPositionBack;
    int _attachedEmoticonCount;
    unsigned int _dataSize;
    NSString *_attachedText;
    NSString *_textColor;
    NSString *_followMd5;
    NSString *_md5;
    NSString *_activityId;
    NSString *_followLensId;
    NSString *_lensId;
}

+ (void)reportChooseLens:(id)arg1 lensPosition:(unsigned long long)arg2 enterTime:(unsigned long long)arg3 scene:(unsigned long long)arg4;
+ (void)reportFailureAction:(unsigned long long)arg1 enterTime:(unsigned long long)arg2 composeFailReason:(unsigned long long)arg3 uploadFailReason:(unsigned long long)arg4 scene:(unsigned long long)arg5;
+ (void)reportAction:(unsigned long long)arg1 enterTime:(unsigned long long)arg2 totalTime:(unsigned long long)arg3 recordTime:(unsigned long long)arg4 editTime:(unsigned long long)arg5 composeTime:(unsigned long long)arg6 uplaodTime:(unsigned long long)arg7 scene:(unsigned long long)arg8 boardPullUpInterval:(unsigned long long)arg9;
+ (void)reportAction:(unsigned long long)arg1 enterTime:(unsigned long long)arg2 totalTime:(unsigned long long)arg3 recordTime:(unsigned long long)arg4 editTime:(unsigned long long)arg5 composeTime:(unsigned long long)arg6 uploadTime:(unsigned long long)arg7 composeFailReason:(unsigned long long)arg8 uploadFailReason:(unsigned long long)arg9 scene:(unsigned long long)arg10 lensId:(id)arg11 lensPosition:(unsigned long long)arg12 boardPullUpInterval:(unsigned long long)arg13;
+ (void)reportClickEmoticonCameraLabelInMessage;
+ (void)reportShowEmoticonCameraEntrance;
@property(retain, nonatomic) NSString *lensId; // @synthesize lensId=_lensId;
@property(retain, nonatomic) NSString *followLensId; // @synthesize followLensId=_followLensId;
@property(nonatomic) _Bool cameraPositionBack; // @synthesize cameraPositionBack=_cameraPositionBack;
@property(retain, nonatomic) NSString *activityId; // @synthesize activityId=_activityId;
@property(retain, nonatomic) NSString *md5; // @synthesize md5=_md5;
@property(retain, nonatomic) NSString *followMd5; // @synthesize followMd5=_followMd5;
@property(nonatomic) unsigned int dataSize; // @synthesize dataSize=_dataSize;
@property(nonatomic) _Bool isWxam; // @synthesize isWxam=_isWxam;
@property(nonatomic) int attachedEmoticonCount; // @synthesize attachedEmoticonCount=_attachedEmoticonCount;
@property(nonatomic) _Bool fastPlay; // @synthesize fastPlay=_fastPlay;
@property(nonatomic) _Bool removeBg; // @synthesize removeBg=_removeBg;
@property(retain, nonatomic) NSString *textColor; // @synthesize textColor=_textColor;
@property(retain, nonatomic) NSString *attachedText; // @synthesize attachedText=_attachedText;
@property(nonatomic) unsigned long long recentPulledByCameraEmoticonLabelTime; // @synthesize recentPulledByCameraEmoticonLabelTime=m_recentPulledByCameraEmoticonLabelTime;
@property(nonatomic) unsigned long long scene; // @synthesize scene=m_scene;
@property(nonatomic) unsigned long long enterTime; // @synthesize enterTime=m_enterTime;
- (void).cxx_destruct;
- (void)reportProcessEnd;
- (void)reportChooseLens:(id)arg1 withPosition:(unsigned long long)arg2;
- (void)reportUploadFailureWithReason:(unsigned long long)arg1;
- (void)startUpload;
- (void)reportComposeFailureWithReason:(unsigned long long)arg1;
- (void)reportAction:(unsigned long long)arg1;
- (id)init;

@end

