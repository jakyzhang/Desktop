//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSString;

@protocol MMWebViewPreloadContentHandler <NSObject>
- (NSDictionary *)requestSessionHeader;
- (NSString *)addTemplateQueryForUrl:(NSString *)arg1 useFlag:(unsigned long long)arg2;
- (NSString *)addSessoinQueryForRequestUrl:(NSString *)arg1;
- (unsigned long long)useFlagForIsUsePreCreateWebView:(_Bool)arg1 isSyncGetPageData:(_Bool)arg2;
- (void)onInjectPageDataNotifySuccessWithA8keyScene:(unsigned int)arg1 useFlag:(unsigned long long)arg2;
- (void)saveA8KeyInfoWithUrl:(NSString *)arg1 header:(NSDictionary *)arg2;
- (void)updatePageDataWithCompletion:(void (^)(NSString *, NSString *))arg1;
- (NSString *)pageDataString;
- (unsigned int)getPageDataRequiredTemplateVersion;
- (NSString *)getPageForceUrl;
- (void)setupPageUrl:(NSString *)arg1 pageDataKeyUrl:(NSString *)arg2 scene:(unsigned int)arg3;
- (NSString *)pageFrameHtmlString;
- (NSString *)pageFrameUrlString;
- (unsigned int)getPageTemplateReportId;
- (unsigned int)getPageCheckInterval;
- (NSString *)getPageTemplateHttpHeader;
- (NSString *)getLatestPageTemplateFullVersion;
- (NSString *)getPageTemplateFullVersion;
- (unsigned int)getPageTemplateVersion;
- (unsigned int)getPageTemplateType;
- (id)initWithParameter:(id)arg1;
@end

