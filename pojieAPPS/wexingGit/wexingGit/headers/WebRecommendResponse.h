//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WXPBGeneratedMessage.h"

@class BaseResponse, NSString, RecPluginMsg, WebRecommendResponse_RecClientCache;

@interface WebRecommendResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) WebRecommendResponse_RecClientCache *clientCache; // @dynamic clientCache;
@property(retain, nonatomic) NSString *json; // @dynamic json;
@property(nonatomic) unsigned int offset; // @dynamic offset;
@property(retain, nonatomic) RecPluginMsg *pluginMsg; // @dynamic pluginMsg;
@property(nonatomic) unsigned int redDotTimeStamp; // @dynamic redDotTimeStamp;
@property(nonatomic) unsigned int updateCode; // @dynamic updateCode;

@end

