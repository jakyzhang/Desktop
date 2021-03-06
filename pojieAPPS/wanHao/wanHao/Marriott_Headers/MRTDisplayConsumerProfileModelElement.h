//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString, UIImage;

@interface MRTDisplayConsumerProfileModelElement : NSObject
{
    NSString *_headerString;
    UIImage *_image;
    NSArray *_contentLineItems;
    unsigned long long _action;
}

@property(nonatomic) unsigned long long action; // @synthesize action=_action;
@property(retain, nonatomic) NSArray *contentLineItems; // @synthesize contentLineItems=_contentLineItems;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(copy, nonatomic) NSString *headerString; // @synthesize headerString=_headerString;
- (void).cxx_destruct;
- (_Bool)isEmpty;
- (id)init;

@end

