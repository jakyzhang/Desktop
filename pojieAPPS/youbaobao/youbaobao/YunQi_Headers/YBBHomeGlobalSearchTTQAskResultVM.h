//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString, RACCommand;

@interface YBBHomeGlobalSearchTTQAskResultVM : NSObject
{
    NSMutableArray *_expDatas;
    NSString *_keyword;
    NSString *_cust;
    RACCommand *_refreshExpCmd;
    RACCommand *_moreExpCmd;
    NSMutableArray *_pageArray;
    NSString *_searchKey;
    long long _askType;
    long long _clickWordId;
    unsigned long long _clickBIType;
}

@property(nonatomic) unsigned long long clickBIType; // @synthesize clickBIType=_clickBIType;
@property(nonatomic) long long clickWordId; // @synthesize clickWordId=_clickWordId;
@property(nonatomic) long long askType; // @synthesize askType=_askType;
@property(copy, nonatomic) NSString *searchKey; // @synthesize searchKey=_searchKey;
@property(retain, nonatomic) NSMutableArray *pageArray; // @synthesize pageArray=_pageArray;
@property(retain, nonatomic) RACCommand *moreExpCmd; // @synthesize moreExpCmd=_moreExpCmd;
@property(retain, nonatomic) RACCommand *refreshExpCmd; // @synthesize refreshExpCmd=_refreshExpCmd;
@property(copy, nonatomic) NSString *cust; // @synthesize cust=_cust;
@property(copy, nonatomic) NSString *keyword; // @synthesize keyword=_keyword;
@property(retain, nonatomic) NSMutableArray *expDatas; // @synthesize expDatas=_expDatas;
- (void).cxx_destruct;
- (id)paramsOfBIWithTopicId:(long long)arg1;
- (id)currDataWithAskType:(long long)arg1;
- (id)createParams:(long long)arg1;
- (void)modityData:(id)arg1 WithSearchType:(long long)arg2 isRefresh:(_Bool)arg3;
- (id)signalOfLoadMoreWithType:(long long)arg1;
- (id)signalOfRefreshWithType:(long long)arg1;
- (id)initWithKeyword:(id)arg1 forumId:(long long)arg2;
- (id)initWithKeyword:(id)arg1;

@end
