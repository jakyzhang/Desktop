//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface _PSDWebViewHook : NSObject
{
}

+ (_Bool)shouldIgnoreURL:(id)arg1;
+ (void)setIgnoreBlock:(CDUnknownBlockType)arg1;
+ (void)hookNSURLProtocol;
+ (void)hookWKWebView;
+ (void)hookUIWebView;
+ (void)handleDidCreateJavaScriptContextNote:(id)arg1;
+ (void)injectHook;

@end
