//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IMYAOPTableViewDataSource-Protocol.h"
#import "IMYAOPTableViewDelegate-Protocol.h"
#import "IMYIAdManager-Protocol.h"

@class IMYAOPTableViewUtils, UITableView;

@protocol IMYITableViewAdManager <IMYIAdManager, IMYAOPTableViewDelegate, IMYAOPTableViewDataSource>
@property(readonly, nonatomic) __weak IMYAOPTableViewUtils *tableUtils;
@property(nonatomic) __weak UITableView *tableView;
@end

