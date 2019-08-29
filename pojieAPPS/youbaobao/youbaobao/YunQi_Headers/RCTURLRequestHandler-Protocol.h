//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "RCTBridgeModule-Protocol.h"

@class NSURLRequest;
@protocol RCTURLRequestDelegate;

@protocol RCTURLRequestHandler <RCTBridgeModule>
- (id)sendRequest:(NSURLRequest *)arg1 withDelegate:(id <RCTURLRequestDelegate>)arg2;
- (_Bool)canHandleRequest:(NSURLRequest *)arg1;

@optional
- (float)handlerPriority;
- (void)cancelRequest:(id)arg1;
@end
