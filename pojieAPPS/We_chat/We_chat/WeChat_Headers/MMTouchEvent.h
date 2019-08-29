//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface MMTouchEvent : NSObject
{
    float _x;
    float _y;
    long long _event;
}

+ (id)TouchEventWithX:(float)arg1 y:(float)arg2 event:(long long)arg3;
@property(readonly, nonatomic) long long event; // @synthesize event=_event;
@property(readonly, nonatomic) float y; // @synthesize y=_y;
@property(readonly, nonatomic) float x; // @synthesize x=_x;
- (id)description;
- (id)initWithX:(float)arg1 y:(float)arg2 event:(long long)arg3;

@end
