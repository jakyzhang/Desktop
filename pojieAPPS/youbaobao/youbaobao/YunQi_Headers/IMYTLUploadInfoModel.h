//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IMYTLSyncModel.h"

@class NSString;

@interface IMYTLUploadInfoModel : IMYTLSyncModel
{
    double _date;
    NSString *_names;
    unsigned long long _photo_count;
    NSString *_babySN;
}

+ (_Bool)isContainParent;
+ (id)persistPrimaryKey;
+ (id)persistTableName;
@property(copy, nonatomic) NSString *babySN; // @synthesize babySN=_babySN;
@property(nonatomic) unsigned long long photo_count; // @synthesize photo_count=_photo_count;
@property(copy, nonatomic) NSString *names; // @synthesize names=_names;
@property(nonatomic) double date; // @synthesize date=_date;
- (void).cxx_destruct;
- (id)db_tableName;

@end
