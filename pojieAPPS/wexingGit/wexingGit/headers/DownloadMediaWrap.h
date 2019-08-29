//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, UIImage, WCMediaItem;

@interface DownloadMediaWrap : NSObject
{
    WCMediaItem *mediaItem;
    int downloadType;
    NSString *downloadID;
    NSString *downloadMd5;
    _Bool isDownloading;
    UIImage *resultImage;
    int requestType;
}

+ (id)getDownloadID:(id)arg1 downloadType:(int)arg2;
@property(nonatomic) int requestType; // @synthesize requestType;
@property(retain, nonatomic) UIImage *resultImage; // @synthesize resultImage;
@property(nonatomic) _Bool isDownloading; // @synthesize isDownloading;
@property(nonatomic) int downloadType; // @synthesize downloadType;
@property(retain, nonatomic) WCMediaItem *mediaItem; // @synthesize mediaItem;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *downloadMd5;
@property(readonly, nonatomic) NSString *downloadID;
- (id)initWithMediaItem:(id)arg1 downloadType:(int)arg2;

@end

