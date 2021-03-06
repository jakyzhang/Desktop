//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "RCTBridgeModule-Protocol.h"

@class CMMotionManager, NSString, RCTBridge;
@protocol OS_dispatch_queue;

@interface IMYGyroSensorModule : NSObject <RCTBridgeModule>
{
    RCTBridge *_bridge;
    CMMotionManager *_motionManager;
}

+ (const struct RCTMethodInfo *)__rct_export__974;
+ (const struct RCTMethodInfo *)__rct_export__773;
+ (const struct RCTMethodInfo *)__rct_export__632;
+ (const struct RCTMethodInfo *)__rct_export__491;
+ (const struct RCTMethodInfo *)__rct_export__360;
+ (void)load;
+ (id)moduleName;
@property(retain, nonatomic) CMMotionManager *motionManager; // @synthesize motionManager=_motionManager;
@property(readonly, nonatomic) __weak RCTBridge *bridge; // @synthesize bridge=_bridge;
- (void).cxx_destruct;
- (void)stopGyroUpdates;
- (void)startGyroUpdates:(CDUnknownBlockType)arg1 rejecter:(CDUnknownBlockType)arg2;
- (void)getGyroUpdateInterval:(CDUnknownBlockType)arg1 rejecter:(CDUnknownBlockType)arg2;
- (void)setGyroUpdateInterval:(id)arg1 resolver:(CDUnknownBlockType)arg2 rejecter:(CDUnknownBlockType)arg3;
- (void)isRunning:(CDUnknownBlockType)arg1 rejecter:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *methodQueue;
@property(readonly) Class superclass;

@end

