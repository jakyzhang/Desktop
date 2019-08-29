//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "PBCoding-Protocol.h"

@class NSString;

@interface WCImageConvertReportData : MMObject <PBCoding>
{
    vector_2633e87e _idkeyList;
    struct timeval _stBigPicStart;
    struct timeval _stBigPicEnd;
    unsigned long long _bigPicCostTime;
    struct timeval _stMiddlePicStart;
    struct timeval _stMiddlePicEnd;
    unsigned long long _middlePicCostTime;
    unsigned long long sessionCnt;
    unsigned long long picFileTotalCnt;
    unsigned long long jpgPicFileTotalSize;
    unsigned long long vcodec2PicFileTotalSize;
    unsigned long long bigPicFileTotalCnt;
    unsigned long long bigJpgPicFileTotoalSize;
    unsigned long long bigVcodec2PicFileTotalSize;
    unsigned long long middlePicFileTotalCnt;
    unsigned long long middleJpgPicFileTotalSize;
    unsigned long long middleVcodec2PicFileTotalSize;
    unsigned long long bigPicConvertCostTime;
    unsigned long long middlePicConvertCostTime;
    unsigned long long convertTotalCostTime;
    unsigned long long convertStartTimeStamp;
    unsigned long long convertEndTimeStamp;
    unsigned long long bigPicTotalQP;
    unsigned long long middlePicTotalQP;
}

+ (void)initialize;
@property(nonatomic) unsigned long long middlePicTotalQP; // @synthesize middlePicTotalQP;
@property(nonatomic) unsigned long long bigPicTotalQP; // @synthesize bigPicTotalQP;
@property(nonatomic) unsigned long long convertEndTimeStamp; // @synthesize convertEndTimeStamp;
@property(nonatomic) unsigned long long convertStartTimeStamp; // @synthesize convertStartTimeStamp;
@property(nonatomic) unsigned long long convertTotalCostTime; // @synthesize convertTotalCostTime;
@property(nonatomic) unsigned long long middlePicConvertCostTime; // @synthesize middlePicConvertCostTime;
@property(nonatomic) unsigned long long bigPicConvertCostTime; // @synthesize bigPicConvertCostTime;
@property(nonatomic) unsigned long long middleVcodec2PicFileTotalSize; // @synthesize middleVcodec2PicFileTotalSize;
@property(nonatomic) unsigned long long middleJpgPicFileTotalSize; // @synthesize middleJpgPicFileTotalSize;
@property(nonatomic) unsigned long long middlePicFileTotalCnt; // @synthesize middlePicFileTotalCnt;
@property(nonatomic) unsigned long long bigVcodec2PicFileTotalSize; // @synthesize bigVcodec2PicFileTotalSize;
@property(nonatomic) unsigned long long bigJpgPicFileTotoalSize; // @synthesize bigJpgPicFileTotoalSize;
@property(nonatomic) unsigned long long bigPicFileTotalCnt; // @synthesize bigPicFileTotalCnt;
@property(nonatomic) unsigned long long vcodec2PicFileTotalSize; // @synthesize vcodec2PicFileTotalSize;
@property(nonatomic) unsigned long long jpgPicFileTotalSize; // @synthesize jpgPicFileTotalSize;
@property(nonatomic) unsigned long long picFileTotalCnt; // @synthesize picFileTotalCnt;
@property(nonatomic) unsigned long long sessionCnt; // @synthesize sessionCnt;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)reportEncodeProcessIdKey;
- (void)recordMiddlePicEndEncodeTimeStampWithResult:(_Bool)arg1;
- (void)recordMiddlePicStartEncodeTimeStamp;
- (void)recordBigPicEndEncodeTimeStampWithResult:(_Bool)arg1;
- (void)recordBigPicStartEncodeTimeStamp;
- (void)beginEncodeProcessIdKey;
@property(readonly, copy) NSString *description;
- (_Bool)reportDataToKV;
- (void)recordConvertCostTime:(unsigned long long)arg1 andMiddlePicCostTime:(unsigned long long)arg2;
- (void)recordVcodec2PicFileReportData:(id)arg1 andMiddlePic:(id)arg2;
- (void)recordJpgPicFileReportData:(id)arg1 andMiddlePic:(id)arg2;
- (void)recordJpgPicBigQP:(int)arg1 andMiddleQP:(int)arg2;
- (const map_f8690629 *)getValueTagIndexMap;
- (id)getValueTypeTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

