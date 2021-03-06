//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSString, UIImage;

@protocol IMYShareManagerProtocol <NSObject>
+ (_Bool)hasAuthorizedWithType:(long long)arg1;
+ (void)shareTitle:(NSString *)arg1 content:(NSString *)arg2 imageURL:(NSString *)arg3 image:(UIImage *)arg4 fromURL:(NSString *)arg5 comment:(NSString *)arg6 shareType:(long long)arg7 contentMediaType:(long long)arg8 ext:(NSDictionary *)arg9 callback:(void (^)(_Bool))arg10;

@optional
+ (NSString *)getShareTypeStringWithType:(long long)arg1;
+ (NSString *)weiboAppKey;
+ (void)generateShortURLWithLongURL:(NSString *)arg1 complete:(void (^)(NSString *, NSString *))arg2;
@end

