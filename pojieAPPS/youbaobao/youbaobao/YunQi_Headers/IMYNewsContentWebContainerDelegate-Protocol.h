//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IMYNewsContentWebContainer, NSError;

@protocol IMYNewsContentWebContainerDelegate <NSObject>
- (void)webContainer:(IMYNewsContentWebContainer *)arg1 didFailLoadWithError:(NSError *)arg2;
- (void)webContainer:(IMYNewsContentWebContainer *)arg1 contentSizeDidChanged:(struct CGSize)arg2;
- (void)webContainerDidLoaded:(IMYNewsContentWebContainer *)arg1;
- (void)webContainerDidStartLoad:(IMYNewsContentWebContainer *)arg1;
@end
