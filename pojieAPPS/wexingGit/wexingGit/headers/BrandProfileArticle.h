//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBCoding-Protocol.h"

@class BrandProfileArticleVideoInfo, NSString;

@interface BrandProfileArticle : NSObject <PBCoding>
{
    _Bool isOriginal;
    unsigned int dividingStyle;
    NSString *title;
    NSString *thumbUrl;
    NSString *articleUrl;
    NSString *fansDesc;
    long long type;
    long long dateTime;
    BrandProfileArticleVideoInfo *videoInfo;
    NSString *digest;
    NSString *_messageID;
    unsigned long long _messageIdx;
    NSString *_reportContent;
}

+ (void)initialize;
@property(retain, nonatomic) NSString *reportContent; // @synthesize reportContent=_reportContent;
@property(nonatomic) unsigned long long messageIdx; // @synthesize messageIdx=_messageIdx;
@property(retain, nonatomic) NSString *messageID; // @synthesize messageID=_messageID;
@property(retain, nonatomic) NSString *digest; // @synthesize digest;
@property(retain, nonatomic) BrandProfileArticleVideoInfo *videoInfo; // @synthesize videoInfo;
@property(nonatomic) long long dateTime; // @synthesize dateTime;
@property(nonatomic) unsigned int dividingStyle; // @synthesize dividingStyle;
@property(nonatomic) long long type; // @synthesize type;
@property(retain, nonatomic) NSString *fansDesc; // @synthesize fansDesc;
@property(nonatomic) _Bool isOriginal; // @synthesize isOriginal;
@property(retain, nonatomic) NSString *articleUrl; // @synthesize articleUrl;
@property(retain, nonatomic) NSString *thumbUrl; // @synthesize thumbUrl;
@property(retain, nonatomic) NSString *title; // @synthesize title;
- (void).cxx_destruct;
- (const map_f8690629 *)getValueTagIndexMap;
- (id)getValueTypeTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

