//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IMYDoctorDoctorModel, NSString;

@interface IMYDoctorDiagnosticModel : NSObject
{
    _Bool _toDoc;
    _Bool _isViewed;
    _Bool _hasAnswer;
    _Bool _needAssess;
    NSString *_status;
    long long _star;
    NSString *_title;
    long long _price;
    double _creatTime;
    NSString *_creatTimes;
    NSString *_clinicNo;
    NSString *_clinicName;
    NSString *_ask;
    long long _problemId;
    long long _payStatus;
    double _cellHeight;
    NSString *_timeFormat;
    IMYDoctorDoctorModel *_doctor;
    double _localUpdateTime;
}

+ (id)getPrimaryKey;
+ (id)getTableName;
+ (id)getUsingLKDBHelper;
+ (void)initialize;
+ (struct CGSize)boundingRectWithWidth:(double)arg1 withTextFont:(id)arg2 withLineSpacing:(double)arg3 text:(id)arg4;
+ (id)IMYD_attributedStringFromStingWithModle:(id)arg1;
+ (double)IMYD_getCellHeightWithTitle:(id)arg1;
+ (void)updateModelWithModel:(id)arg1;
+ (void)updateModelWithProblemId:(long long)arg1;
+ (id)timeFormateWithTimeStamp:(double)arg1;
+ (id)getCacheData;
+ (_Bool)hasCacheData;
@property(nonatomic) double localUpdateTime; // @synthesize localUpdateTime=_localUpdateTime;
@property(retain, nonatomic) IMYDoctorDoctorModel *doctor; // @synthesize doctor=_doctor;
@property(copy, nonatomic) NSString *timeFormat; // @synthesize timeFormat=_timeFormat;
@property(nonatomic) double cellHeight; // @synthesize cellHeight=_cellHeight;
@property(nonatomic) long long payStatus; // @synthesize payStatus=_payStatus;
@property(nonatomic) _Bool needAssess; // @synthesize needAssess=_needAssess;
@property(nonatomic) long long problemId; // @synthesize problemId=_problemId;
@property(copy, nonatomic) NSString *ask; // @synthesize ask=_ask;
@property(copy, nonatomic) NSString *clinicName; // @synthesize clinicName=_clinicName;
@property(copy, nonatomic) NSString *clinicNo; // @synthesize clinicNo=_clinicNo;
@property(copy, nonatomic) NSString *creatTimes; // @synthesize creatTimes=_creatTimes;
@property(nonatomic) double creatTime; // @synthesize creatTime=_creatTime;
@property(nonatomic) _Bool hasAnswer; // @synthesize hasAnswer=_hasAnswer;
@property(nonatomic) _Bool isViewed; // @synthesize isViewed=_isViewed;
@property(nonatomic) long long price; // @synthesize price=_price;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) long long star; // @synthesize star=_star;
@property(nonatomic) _Bool toDoc; // @synthesize toDoc=_toDoc;
@property(copy, nonatomic) NSString *status; // @synthesize status=_status;
- (void).cxx_destruct;

@end

