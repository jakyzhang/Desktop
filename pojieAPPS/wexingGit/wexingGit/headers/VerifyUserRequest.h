//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WXPBGeneratedMessage.h"

@class BaseRequest, NSMutableArray, NSString, SKBuiltinBuffer_t;

@interface VerifyUserRequest : WXPBGeneratedMessage
{
    int sceneListMemoizedSerializedSize;
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) SKBuiltinBuffer_t *clientCheckData; // @dynamic clientCheckData;
@property(nonatomic) unsigned int opcode; // @dynamic opcode;
@property(retain, nonatomic) NSMutableArray *sceneList; // @dynamic sceneList;
@property(nonatomic) unsigned int sceneListCount; // @dynamic sceneListCount;
@property(retain, nonatomic) NSString *verifyContent; // @dynamic verifyContent;
@property(retain, nonatomic) NSMutableArray *verifyInfoList; // @dynamic verifyInfoList;
@property(nonatomic) unsigned int verifyInfoListCount; // @dynamic verifyInfoListCount;
@property(retain, nonatomic) NSMutableArray *verifyUserList; // @dynamic verifyUserList;
@property(nonatomic) unsigned int verifyUserListSize; // @dynamic verifyUserListSize;

@end

