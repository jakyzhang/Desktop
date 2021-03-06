//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IMYViewCacheRegisterInfo, NSMutableArray;

@interface IMYViewCache : NSObject
{
    IMYViewCacheRegisterInfo *_viewInfo;
    NSMutableArray *_cacheArray;
    double _afterDelay;
}

@property(nonatomic) double afterDelay; // @synthesize afterDelay=_afterDelay;
@property(retain, nonatomic) NSMutableArray *cacheArray; // @synthesize cacheArray=_cacheArray;
@property(retain, nonatomic) IMYViewCacheRegisterInfo *viewInfo; // @synthesize viewInfo=_viewInfo;
- (void).cxx_destruct;
- (void)willMoveToSuperview:(id)arg1 fromView:(id)arg2;
- (id)loadOneView;
- (id)getViewInstance;
- (void)prepareLoadViewCache;

@end

