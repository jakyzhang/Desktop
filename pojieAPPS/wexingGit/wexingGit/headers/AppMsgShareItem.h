//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSDate, NSString;

@interface AppMsgShareItem : NSObject <NSCopying>
{
    _Bool _hasItemShowType;
    _Bool _isNativePage;
    unsigned int _itemShowType;
    unsigned int _duration;
    unsigned int _width;
    unsigned int _height;
    unsigned int _funcFlag;
    NSDate *_pubTime;
    NSString *_vid;
}

@property(nonatomic) unsigned int funcFlag; // @synthesize funcFlag=_funcFlag;
@property(copy, nonatomic) NSString *vid; // @synthesize vid=_vid;
@property(nonatomic) unsigned int height; // @synthesize height=_height;
@property(nonatomic) unsigned int width; // @synthesize width=_width;
@property(nonatomic) unsigned int duration; // @synthesize duration=_duration;
@property(retain, nonatomic) NSDate *pubTime; // @synthesize pubTime=_pubTime;
@property(nonatomic) _Bool isNativePage; // @synthesize isNativePage=_isNativePage;
@property(nonatomic) unsigned int itemShowType; // @synthesize itemShowType=_itemShowType;
@property(nonatomic) _Bool hasItemShowType; // @synthesize hasItemShowType=_hasItemShowType;
- (void).cxx_destruct;
- (id)description;
- (id)toXML;
- (_Bool)fromXML:(struct XmlReaderNode_t *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

