//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface PayCallBackBean : NSObject
{
    NSString *_status;
    NSString *_payChannel;
    NSString *_resultCode;
    NSString *_provideState;
    NSString *_money;
    NSString *_resultMsg;
    NSString *_extendInfo;
    NSString *_leitingNo;
    NSString *_payNo;
    NSString *_payChannelName;
    NSString *_ratio;
    NSString *_channelType;
    NSString *_pushAgain;
}

@property(copy, nonatomic) NSString *pushAgain; // @synthesize pushAgain=_pushAgain;
@property(copy, nonatomic) NSString *channelType; // @synthesize channelType=_channelType;
@property(copy, nonatomic) NSString *ratio; // @synthesize ratio=_ratio;
@property(copy, nonatomic) NSString *payChannelName; // @synthesize payChannelName=_payChannelName;
@property(copy, nonatomic) NSString *payNo; // @synthesize payNo=_payNo;
@property(copy, nonatomic) NSString *leitingNo; // @synthesize leitingNo=_leitingNo;
@property(copy, nonatomic) NSString *extendInfo; // @synthesize extendInfo=_extendInfo;
@property(copy, nonatomic) NSString *resultMsg; // @synthesize resultMsg=_resultMsg;
@property(copy, nonatomic) NSString *money; // @synthesize money=_money;
@property(copy, nonatomic) NSString *provideState; // @synthesize provideState=_provideState;
@property(copy, nonatomic) NSString *resultCode; // @synthesize resultCode=_resultCode;
@property(copy, nonatomic) NSString *payChannel; // @synthesize payChannel=_payChannel;
@property(copy, nonatomic) NSString *status; // @synthesize status=_status;
- (void).cxx_destruct;
- (id)getNilValue:(id)arg1;
- (id)createJson;

@end

