//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString;

@interface MidasIAPUserInfo : NSObject <NSCopying>
{
    _Bool _isFirstCharge;
    NSString *_openId;
    NSString *_openKey;
    NSString *_sessionId;
    NSString *_sessionType;
    NSString *_payId;
    NSString *_authKey;
    NSString *_pf;
    NSString *_pfKey;
    NSString *_zoneId;
}

@property(nonatomic) _Bool isFirstCharge; // @synthesize isFirstCharge=_isFirstCharge;
@property(retain, nonatomic) NSString *zoneId; // @synthesize zoneId=_zoneId;
@property(retain, nonatomic) NSString *pfKey; // @synthesize pfKey=_pfKey;
@property(retain, nonatomic) NSString *pf; // @synthesize pf=_pf;
@property(retain, nonatomic) NSString *authKey; // @synthesize authKey=_authKey;
@property(retain, nonatomic) NSString *payId; // @synthesize payId=_payId;
@property(retain, nonatomic) NSString *sessionType; // @synthesize sessionType=_sessionType;
@property(retain, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
@property(retain, nonatomic) NSString *openKey; // @synthesize openKey=_openKey;
@property(retain, nonatomic) NSString *openId; // @synthesize openId=_openId;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)reset;
- (id)init;

@end

