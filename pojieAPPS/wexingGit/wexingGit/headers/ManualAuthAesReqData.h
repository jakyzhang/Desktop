//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WXPBGeneratedMessage.h"

@class BaseAuthReqInfo, BaseRequest, NSString, SKBuiltinBuffer_t;

@interface ManualAuthAesReqData : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *adSource; // @dynamic adSource;
@property(retain, nonatomic) BaseAuthReqInfo *baseReqInfo; // @dynamic baseReqInfo;
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(nonatomic) unsigned int builtinIpseq; // @dynamic builtinIpseq;
@property(retain, nonatomic) NSString *bundleId; // @dynamic bundleId;
@property(nonatomic) int channel; // @dynamic channel;
@property(retain, nonatomic) SKBuiltinBuffer_t *clientCheckData; // @dynamic clientCheckData;
@property(retain, nonatomic) NSString *clientSeqId; // @dynamic clientSeqId;
@property(retain, nonatomic) NSString *deviceBrand; // @dynamic deviceBrand;
@property(retain, nonatomic) NSString *deviceModel; // @dynamic deviceModel;
@property(retain, nonatomic) NSString *deviceName; // @dynamic deviceName;
@property(retain, nonatomic) NSString *deviceType; // @dynamic deviceType;
@property(retain, nonatomic) NSString *imei; // @dynamic imei;
@property(nonatomic) unsigned int inputType; // @dynamic inputType;
@property(retain, nonatomic) NSString *iphoneVer; // @dynamic iphoneVer;
@property(retain, nonatomic) NSString *language; // @dynamic language;
@property(retain, nonatomic) NSString *ostype; // @dynamic ostype;
@property(retain, nonatomic) NSString *realCountry; // @dynamic realCountry;
@property(retain, nonatomic) NSString *signature; // @dynamic signature;
@property(retain, nonatomic) NSString *softType; // @dynamic softType;
@property(nonatomic) unsigned int timeStamp; // @dynamic timeStamp;
@property(retain, nonatomic) NSString *timeZone; // @dynamic timeZone;

@end

