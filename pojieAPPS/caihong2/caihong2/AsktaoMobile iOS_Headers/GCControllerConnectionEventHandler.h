//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface GCControllerConnectionEventHandler : NSObject
{
    CDUnknownBlockType __connectionBlock;
    CDUnknownBlockType __disconnectionBlock;
}

+ (void)destroyInstance;
+ (id)getInstance;
@property(copy) CDUnknownBlockType _disconnectionBlock; // @synthesize _disconnectionBlock=__disconnectionBlock;
@property(copy) CDUnknownBlockType _connectionBlock; // @synthesize _connectionBlock=__connectionBlock;
- (void)onControllerDisconnected:(id)arg1;
- (void)onControllerConnected:(id)arg1;
- (void)dealloc;
- (void)observerConnection:(CDUnknownBlockType)arg1 disconnection:(CDUnknownBlockType)arg2;

@end
