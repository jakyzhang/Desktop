//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IMYHTTPBuildable.h"

@class IMYHTTPTaskManager, RACDisposable;

@interface IMYHTTPTask : IMYHTTPBuildable
{
    CDUnknownBlockType _success;
    CDUnknownBlockType _failure;
    IMYHTTPTaskManager *_manager;
    RACDisposable *_disposable;
}

@property(retain, nonatomic) RACDisposable *disposable; // @synthesize disposable=_disposable;
@property(nonatomic) __weak IMYHTTPTaskManager *manager; // @synthesize manager=_manager;
@property(copy, nonatomic) CDUnknownBlockType failure; // @synthesize failure=_failure;
@property(copy, nonatomic) CDUnknownBlockType success; // @synthesize success=_success;
- (void).cxx_destruct;
- (void)cancel;
- (void)resume;
- (id)signal;
- (void)dealloc;
@property(readonly, nonatomic) CDUnknownBlockType FAILURE;
@property(readonly, nonatomic) CDUnknownBlockType SUCCESS;

@end
