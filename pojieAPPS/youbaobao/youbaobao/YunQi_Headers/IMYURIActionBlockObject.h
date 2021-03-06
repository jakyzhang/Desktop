//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IMYURI, IMYVKWebView, UIViewController;

@interface IMYURIActionBlockObject : NSObject
{
    _Bool _hasStop;
    IMYURI *_uri;
    id _userInfo;
    IMYVKWebView *_webView;
    CDUnknownBlockType _implCallbackBlock;
    UIViewController *_usingViewController;
}

+ (id)actionBlockWithURI:(id)arg1;
@property(nonatomic) __weak UIViewController *usingViewController; // @synthesize usingViewController=_usingViewController;
@property(copy, nonatomic) CDUnknownBlockType implCallbackBlock; // @synthesize implCallbackBlock=_implCallbackBlock;
@property(nonatomic) __weak IMYVKWebView *webView; // @synthesize webView=_webView;
@property(retain, nonatomic) id userInfo; // @synthesize userInfo=_userInfo;
@property(nonatomic) _Bool hasStop; // @synthesize hasStop=_hasStop;
@property(retain, nonatomic) IMYURI *uri; // @synthesize uri=_uri;
- (void).cxx_destruct;
- (void)callbackWithObject:(id)arg1 error:(id)arg2 eventName:(id)arg3;
- (void)callbackWithObject:(id)arg1;
- (id)getUsingViewController;

@end

