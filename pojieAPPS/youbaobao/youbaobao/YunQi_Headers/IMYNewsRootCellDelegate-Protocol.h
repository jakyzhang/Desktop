//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class UIButton, UITableViewCell;

@protocol IMYNewsRootCellDelegate <NSObject>

@optional
- (void)IMYNewsRootCellVoteClick:(UITableViewCell *)arg1 index:(long long)arg2;
- (void)IMYNewsRootCellTopCommendClick:(UITableViewCell *)arg1;
- (void)IMYNewsRootCellShareVideo:(UITableViewCell *)arg1;
- (void)IMYNewsRootCellDidClickIcon:(UITableViewCell *)arg1;
- (void)IMYNewsRootCellDidClickCellBtn:(UITableViewCell *)arg1 btn:(UIButton *)arg2;
@end
