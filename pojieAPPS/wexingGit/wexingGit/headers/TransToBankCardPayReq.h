//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WXPBGeneratedMessage.h"

@class BaseRequest, NSString;

@interface TransToBankCardPayReq : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *bankCardSeqno; // @dynamic bankCardSeqno;
@property(retain, nonatomic) NSString *bankCardTailno; // @dynamic bankCardTailno;
@property(retain, nonatomic) NSString *bankType; // @dynamic bankType;
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSString *encryptData; // @dynamic encryptData;
@property(nonatomic) unsigned int enterTimeScene; // @dynamic enterTimeScene;
@property(nonatomic) unsigned int inputType; // @dynamic inputType;
@property(retain, nonatomic) NSString *lastTransferBillId; // @dynamic lastTransferBillId;
@property(nonatomic) unsigned int poundage; // @dynamic poundage;
@property(nonatomic) unsigned int transferAmt; // @dynamic transferAmt;
@property(retain, nonatomic) NSString *transferExplain; // @dynamic transferExplain;
@property(retain, nonatomic) NSString *uniqueId; // @dynamic uniqueId;
@property(nonatomic) unsigned int unpayType; // @dynamic unpayType;

@end

