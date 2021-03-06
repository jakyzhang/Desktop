//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BVConversationsRequest.h"

@class NSArray, NSMutableArray;

@interface BVBulkStoreItemsRequest : BVConversationsRequest
{
    int _limit;
    int _offset;
    NSMutableArray *_storeContentTypeStatistics;
    NSArray *_filterStoreIds;
}

@property(retain) NSArray *filterStoreIds; // @synthesize filterStoreIds=_filterStoreIds;
@property(retain) NSMutableArray *storeContentTypeStatistics; // @synthesize storeContentTypeStatistics=_storeContentTypeStatistics;
@property int offset; // @synthesize offset=_offset;
@property int limit; // @synthesize limit=_limit;
- (void).cxx_destruct;
- (id)getPassKey;
- (id)statisticsToParams:(id)arg1;
- (id)includeStatistics:(long long)arg1;
- (id)createParams;
- (id)endpoint;
- (void)load:(CDUnknownBlockType)arg1 failure:(CDUnknownBlockType)arg2;
- (void)initDefaultProps;
- (id)initWithStoreIds:(id)arg1;
- (id)init:(int)arg1 offset:(int)arg2;

@end

