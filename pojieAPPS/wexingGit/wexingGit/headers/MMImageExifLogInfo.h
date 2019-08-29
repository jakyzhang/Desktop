//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSString;

@interface MMImageExifLogInfo : NSObject <NSCoding>
{
    NSString *_localID;
    unsigned long long _mediaType;
    unsigned long long _originWidth;
    unsigned long long _originHeight;
    unsigned long long _compressedWidth;
    unsigned long long _compressedHeight;
    unsigned long long _originSize;
    unsigned long long _compressedSize;
    NSString *_fNumber;
    NSString *_exposureTime;
    unsigned long long _iso;
    unsigned long long _flash;
    NSString *_lensModel;
    NSString *_creatTime;
    unsigned long long _isFromWeChat;
    unsigned long long _scene;
    unsigned long long _sceneType;
    unsigned long long _fileSource;
    NSString *_make;
    NSString *_software;
    NSString *_fileExt;
    NSString *_YCbCrSubSampling;
    unsigned long long _faceCount;
    NSString *_rawExifDicInfoJSON;
    NSString *_rawTiffDicInfoJSON;
    NSString *_rawGPSDicInfoJSON;
    NSString *_md5;
}

@property(copy, nonatomic) NSString *md5; // @synthesize md5=_md5;
@property(copy, nonatomic) NSString *rawGPSDicInfoJSON; // @synthesize rawGPSDicInfoJSON=_rawGPSDicInfoJSON;
@property(copy, nonatomic) NSString *rawTiffDicInfoJSON; // @synthesize rawTiffDicInfoJSON=_rawTiffDicInfoJSON;
@property(copy, nonatomic) NSString *rawExifDicInfoJSON; // @synthesize rawExifDicInfoJSON=_rawExifDicInfoJSON;
@property(nonatomic) unsigned long long faceCount; // @synthesize faceCount=_faceCount;
@property(copy, nonatomic) NSString *YCbCrSubSampling; // @synthesize YCbCrSubSampling=_YCbCrSubSampling;
@property(copy, nonatomic) NSString *fileExt; // @synthesize fileExt=_fileExt;
@property(copy, nonatomic) NSString *software; // @synthesize software=_software;
@property(copy, nonatomic) NSString *make; // @synthesize make=_make;
@property(nonatomic) unsigned long long fileSource; // @synthesize fileSource=_fileSource;
@property(nonatomic) unsigned long long sceneType; // @synthesize sceneType=_sceneType;
@property(nonatomic) unsigned long long scene; // @synthesize scene=_scene;
@property(nonatomic) unsigned long long isFromWeChat; // @synthesize isFromWeChat=_isFromWeChat;
@property(copy, nonatomic) NSString *creatTime; // @synthesize creatTime=_creatTime;
@property(copy, nonatomic) NSString *lensModel; // @synthesize lensModel=_lensModel;
@property(nonatomic) unsigned long long flash; // @synthesize flash=_flash;
@property(nonatomic) unsigned long long iso; // @synthesize iso=_iso;
@property(copy, nonatomic) NSString *exposureTime; // @synthesize exposureTime=_exposureTime;
@property(copy, nonatomic) NSString *fNumber; // @synthesize fNumber=_fNumber;
@property(nonatomic) unsigned long long compressedSize; // @synthesize compressedSize=_compressedSize;
@property(nonatomic) unsigned long long originSize; // @synthesize originSize=_originSize;
@property(nonatomic) unsigned long long compressedHeight; // @synthesize compressedHeight=_compressedHeight;
@property(nonatomic) unsigned long long compressedWidth; // @synthesize compressedWidth=_compressedWidth;
@property(nonatomic) unsigned long long originHeight; // @synthesize originHeight=_originHeight;
@property(nonatomic) unsigned long long originWidth; // @synthesize originWidth=_originWidth;
@property(nonatomic) unsigned long long mediaType; // @synthesize mediaType=_mediaType;
@property(copy, nonatomic) NSString *localID; // @synthesize localID=_localID;
- (void).cxx_destruct;
- (void)updateSubSamplingForJPEGImage:(id)arg1;
- (_Bool)isYUV422Image;
- (void)updateForWechatSight;
- (id)getReportStr;
- (void)reportWithPublishId:(id)arg1;
- (void)report;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

