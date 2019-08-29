//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface NewTipsConfigCenter : NSObject
{
    NSMutableDictionary *_dictNewTipsConfig;
}

@property(retain, nonatomic) NSMutableDictionary *dictNewTipsConfig; // @synthesize dictNewTipsConfig=_dictNewTipsConfig;
- (void).cxx_destruct;
- (id)GetPathOfNewTipsConfig;
- (id)GetRootPathOfNewTips;
- (id)getConfigWithId:(unsigned int)arg1 Version:(unsigned int)arg2 Key:(id)arg3 Type:(unsigned long long)arg4 FilterClass:(id)arg5 Path:(id)arg6;
- (void)syncConfigsToFile;
- (void)registerTipsWithId:(unsigned int)arg1 Version:(unsigned int)arg2 Key:(id)arg3 Type:(unsigned long long)arg4 FilterClass:(id)arg5 Path:(id)arg6;
- (void)registerInteractiveTipsWithId:(unsigned int)arg1 FilterClass:(id)arg2 Path:(id)arg3;
- (void)registerInteractiveWithId:(unsigned int)arg1;
- (void)registerDynamicTipsWithId:(unsigned int)arg1 FilterClass:(id)arg2 Path:(id)arg3;
- (void)registerDynamicTipsWithId:(unsigned int)arg1;
- (void)registerLocalTipsWithId:(unsigned int)arg1 Version:(unsigned int)arg2 Key:(id)arg3 FilterClass:(id)arg4 Path:(id)arg5;
- (void)registerLocalTipsWithId:(unsigned int)arg1 Version:(unsigned int)arg2 Key:(id)arg3;
- (id)getDictNewTipsConfig;
- (id)getNewTipsConfigWithTipsId:(unsigned int)arg1;
- (id)init;
- (void)loadTipsConfig;
- (void)registerNewTipsCenter;

@end

