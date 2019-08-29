//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <OfferWallBase/NSObject-Protocol.h>

@class NSError, NSURLRequest, TCWebViewController;

@protocol TCWebViewControllerDelegate <NSObject>

@optional
- (_Bool)shouldAutorotateWithWebVC:(TCWebViewController *)arg1;
- (unsigned long long)supportedInterfaceOrientationsWithWebVC:(TCWebViewController *)arg1;
- (_Bool)webViewController:(TCWebViewController *)arg1 shouldAutorotateToInterfaceOrientation:(long long)arg2;
- (_Bool)webViewController:(TCWebViewController *)arg1 shouldStartLoadWithRequest:(NSURLRequest *)arg2 navigationType:(long long)arg3;
- (void)webViewController:(TCWebViewController *)arg1 didFailLoadWithError:(NSError *)arg2;
- (void)webViewController:(TCWebViewController *)arg1 didCloseWithLastError:(NSError *)arg2;
@end
