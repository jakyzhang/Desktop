//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface MCExpressionFaceWeightItem : NSObject
{
    NSString *_itemName;
    double _itemWeight;
    struct CGPoint _fullRange;
    struct CGPoint _validRange;
}

@property(nonatomic) double itemWeight; // @synthesize itemWeight=_itemWeight;
@property(nonatomic) struct CGPoint validRange; // @synthesize validRange=_validRange;
@property(nonatomic) struct CGPoint fullRange; // @synthesize fullRange=_fullRange;
@property(copy, nonatomic) NSString *itemName; // @synthesize itemName=_itemName;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1 extraInfo:(id)arg2;
- (id)init;

@end

