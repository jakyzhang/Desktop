//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MyCamGPUFilter;

@interface MyCamInputFilterParam : NSObject
{
    MyCamGPUFilter *_outputFilter;
    long long _textureIndex;
}

@property(nonatomic) long long textureIndex; // @synthesize textureIndex=_textureIndex;
@property(nonatomic) __weak MyCamGPUFilter *outputFilter; // @synthesize outputFilter=_outputFilter;
- (void).cxx_destruct;
- (id)initWithFilter:(id)arg1 atIndex:(long long)arg2;

@end

