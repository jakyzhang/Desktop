//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IMYTLViewModel.h"

@class NSMutableArray;

@interface IMYTLPublishVM : IMYTLViewModel
{
    NSMutableArray *_dataArray;
}

@property(retain, nonatomic) NSMutableArray *dataArray; // @synthesize dataArray=_dataArray;
- (void).cxx_destruct;
- (id)getEventsCreatedAt;
- (void)saveEventCreatedAt:(long long)arg1;
- (void)saveHasShowGuideFlag;
- (_Bool)needShowGuide;
- (id)initWithGroupArray:(id)arg1 isPrivite:(_Bool)arg2;

@end

