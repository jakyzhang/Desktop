//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBCoding-Protocol.h"

@class NSString;

@interface WCPayOverseaGetFacingReceiveQRCodeResponse : NSObject <PBCoding>
{
    int currencyType;
    unsigned int _uiIsSetAmount;
    int _alertType;
    NSString *nsQRCodeUrl;
    NSString *currencyUint;
    NSString *_nsRealname;
    NSString *_alertTitle;
    NSString *_leftButtonText;
    NSString *_rightButtonText;
    NSString *_rightButtonUrl;
    NSString *_bottomText;
    NSString *_bottomUrl;
    NSString *_notice;
    NSString *_noticeUrl;
}

+ (id)GenFromDictionary:(id)arg1;
+ (void)initialize;
@property(retain, nonatomic) NSString *noticeUrl; // @synthesize noticeUrl=_noticeUrl;
@property(retain, nonatomic) NSString *notice; // @synthesize notice=_notice;
@property(retain, nonatomic) NSString *bottomUrl; // @synthesize bottomUrl=_bottomUrl;
@property(retain, nonatomic) NSString *bottomText; // @synthesize bottomText=_bottomText;
@property(retain, nonatomic) NSString *rightButtonUrl; // @synthesize rightButtonUrl=_rightButtonUrl;
@property(retain, nonatomic) NSString *rightButtonText; // @synthesize rightButtonText=_rightButtonText;
@property(retain, nonatomic) NSString *leftButtonText; // @synthesize leftButtonText=_leftButtonText;
@property(retain, nonatomic) NSString *alertTitle; // @synthesize alertTitle=_alertTitle;
@property(nonatomic) int alertType; // @synthesize alertType=_alertType;
@property(retain, nonatomic) NSString *nsRealname; // @synthesize nsRealname=_nsRealname;
@property(nonatomic) unsigned int uiIsSetAmount; // @synthesize uiIsSetAmount=_uiIsSetAmount;
@property(nonatomic) NSString *currencyUint; // @synthesize currencyUint;
@property(nonatomic) int currencyType; // @synthesize currencyType;
@property(retain, nonatomic) NSString *nsQRCodeUrl; // @synthesize nsQRCodeUrl;
- (void).cxx_destruct;
- (const map_f8690629 *)getValueTagIndexMap;
- (id)getValueTypeTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
