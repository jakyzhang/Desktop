//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSError, NSString;

@interface YSF_NIMAudioToTextResult : NSObject
{
    long long _taskId;
    NSString *_text;
    NSError *_error;
}

@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(nonatomic) long long taskId; // @synthesize taskId=_taskId;
- (void).cxx_destruct;

@end
