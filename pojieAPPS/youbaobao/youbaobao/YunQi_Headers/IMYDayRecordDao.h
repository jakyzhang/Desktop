//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface IMYDayRecordDao : NSObject
{
}

+ (_Bool)duringRecoverPeriodWithDate:(id)arg1;
+ (_Bool)getHasAntenatalCare;
+ (_Bool)getNeedSynchronous;
+ (id)searchWithWhere:(id)arg1 startDate:(id)arg2 endDate:(id)arg3;
+ (id)searchDayRecordWithStartDate:(id)arg1 endDate:(id)arg2;
+ (id)searchDayRecordWithDate:(id)arg1;
+ (id)getModelFlagsWithDateMonth:(id)arg1;
+ (long long)getHasRecordCountWithYear:(int)arg1 month:(int)arg2;
+ (long long)getHasRecordCount;
+ (id)searchFirstWeight:(_Bool)arg1;
+ (id)searchAllWeight:(_Bool)arg1;
+ (id)searchFirstTemperature:(_Bool)arg1;
+ (id)searchAllTemperature:(_Bool)arg1;
+ (id)getOnlyMensesDataRecord:(id)arg1 dayu:(_Bool)arg2 dengyu:(_Bool)arg3;
+ (void)reshowInsertToDB:(id)arg1;
+ (_Bool)mensesInsertToDB:(id)arg1;

@end

