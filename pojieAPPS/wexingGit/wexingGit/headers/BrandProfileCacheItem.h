//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBCoding-Protocol.h"

@class NSMutableArray, NSString;

@interface BrandProfileCacheItem : NSObject <PBCoding>
{
    _Bool isArticleListShown;
    _Bool isFuwuListShown;
    _Bool isAvatarHidden;
    _Bool isButtonHidden;
    long long originalCount;
    long long fansCount;
    NSMutableArray *articleList;
    NSMutableArray *fuwuList;
    long long accountStatus;
    NSString *accountBanReason;
    NSString *allArticleTips;
    NSString *allArticleUrl;
    NSString *decryptUserName;
}

+ (void)initialize;
@property(nonatomic) _Bool isButtonHidden; // @synthesize isButtonHidden;
@property(nonatomic) _Bool isAvatarHidden; // @synthesize isAvatarHidden;
@property(nonatomic) _Bool isFuwuListShown; // @synthesize isFuwuListShown;
@property(nonatomic) _Bool isArticleListShown; // @synthesize isArticleListShown;
@property(retain, nonatomic) NSString *decryptUserName; // @synthesize decryptUserName;
@property(retain, nonatomic) NSString *allArticleUrl; // @synthesize allArticleUrl;
@property(retain, nonatomic) NSString *allArticleTips; // @synthesize allArticleTips;
@property(retain, nonatomic) NSString *accountBanReason; // @synthesize accountBanReason;
@property(nonatomic) long long accountStatus; // @synthesize accountStatus;
@property(retain, nonatomic) NSMutableArray *fuwuList; // @synthesize fuwuList;
@property(retain, nonatomic) NSMutableArray *articleList; // @synthesize articleList;
@property(nonatomic) long long fansCount; // @synthesize fansCount;
@property(nonatomic) long long originalCount; // @synthesize originalCount;
- (void).cxx_destruct;
- (_Bool)hasFuwuList;
- (_Bool)hasArticleCount;
- (_Bool)hasArticleList;
- (_Bool)hasArticleOrFuwu;
- (const map_f8690629 *)getValueTagIndexMap;
- (id)getValueTypeTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

