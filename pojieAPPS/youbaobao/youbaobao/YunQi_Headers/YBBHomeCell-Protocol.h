//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary;
@protocol YBBHomeCellActionPerformer;

@protocol YBBHomeCell <NSObject>
@property(nonatomic) __weak id <YBBHomeCellActionPerformer> actionDelegate;
- (void)configureViewWithHomeModel:(id)arg1 row:(long long)arg2 rowCount:(long long)arg3 info:(NSDictionary *)arg4;

@optional
- (void)yq_cellDidEndDisplayingWithModel:(id)arg1 row:(long long)arg2 info:(NSDictionary *)arg3;
- (void)yq_cellWillDisplayWithModel:(id)arg1 row:(long long)arg2 info:(NSDictionary *)arg3;
@end
