//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "_PSDElement.h"

@class NSString;

@interface _PSDPatchElement : _PSDElement
{
    NSString *_url;
    NSString *_version;
    NSString *_md5;
    long long _status;
    NSString *_error;
    long long _timestamp;
}

+ (id)toType;
@property(nonatomic) long long timestamp; // @synthesize timestamp=_timestamp;
@property(retain, nonatomic) NSString *error; // @synthesize error=_error;
@property(nonatomic) long long status; // @synthesize status=_status;
@property(retain, nonatomic) NSString *md5; // @synthesize md5=_md5;
@property(retain, nonatomic) NSString *version; // @synthesize version=_version;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
- (void).cxx_destruct;
- (id)toJSONObject;
- (void)accept:(id)arg1;

@end
