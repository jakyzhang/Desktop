//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

@interface MMUIViewController (SessionFlowSwizzle)
+ (_Bool)hookViewDidBeDismissed;
+ (_Bool)hookViewDidBePresented;
+ (_Bool)hookViewDidDisappear;
+ (_Bool)hookViewDidAppear;
+ (_Bool)hookViewDidBePoped;
+ (_Bool)hookViewDidBePushed;
+ (void)hookMMUIViewController;
+ (void)load;
- (void)sfViewDidBeDismissed:(_Bool)arg1;
- (void)sfViewDidBePresented:(_Bool)arg1;
- (void)sfViewDidDisappear:(_Bool)arg1;
- (void)sfViewDidAppear:(_Bool)arg1;
- (void)sfViewDidBePoped:(_Bool)arg1;
- (void)sfViewDidBePushed:(_Bool)arg1;
@end

