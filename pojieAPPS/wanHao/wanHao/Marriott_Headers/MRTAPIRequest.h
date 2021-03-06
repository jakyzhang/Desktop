//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AFHTTPRequestOperation, NSArray, NSDate, NSDictionary, NSFetchRequest, NSMutableArray, NSMutableDictionary, NSString;

@interface MRTAPIRequest : NSObject
{
    _Bool _foundInCache;
    NSString *_path;
    NSString *_requestMethod;
    NSDictionary *_parameters;
    NSArray *_queryItems;
    NSArray *_successStatuses;
    double _timeout;
    long long _requestType;
    long long _responseType;
    unsigned long long _options;
    unsigned long long _usageMask;
    long long _cacheType;
    long long _cacheStrategy;
    double _cacheLimit;
    double _cacheFetchLimit;
    NSFetchRequest *_coreDataRequest;
    NSString *_cachePurgePattern;
    double _cachePurgeLimit;
    CDUnknownBlockType _successBlock;
    CDUnknownBlockType _failureBlock;
    NSArray *_additionalSupportedContentTypes;
    NSArray *_additionalSupportedStringEncodings;
    id _foundInCacheObject;
    NSDate *_foundInCacheDate;
    NSDate *_unmodifiedAsOfDate;
    unsigned long long _maxRetries;
    double _retryDelay;
    unsigned long long _retryCount;
    AFHTTPRequestOperation *_operation;
    NSMutableDictionary *_subresponseCacheData;
    NSMutableArray *_subresponses;
}

@property(retain, nonatomic) NSMutableArray *subresponses; // @synthesize subresponses=_subresponses;
@property(retain, nonatomic) NSMutableDictionary *subresponseCacheData; // @synthesize subresponseCacheData=_subresponseCacheData;
@property(nonatomic) __weak AFHTTPRequestOperation *operation; // @synthesize operation=_operation;
@property(nonatomic) unsigned long long retryCount; // @synthesize retryCount=_retryCount;
@property(nonatomic) double retryDelay; // @synthesize retryDelay=_retryDelay;
@property(nonatomic) unsigned long long maxRetries; // @synthesize maxRetries=_maxRetries;
@property(copy, nonatomic) NSDate *unmodifiedAsOfDate; // @synthesize unmodifiedAsOfDate=_unmodifiedAsOfDate;
@property(copy, nonatomic) NSDate *foundInCacheDate; // @synthesize foundInCacheDate=_foundInCacheDate;
@property(retain, nonatomic) id foundInCacheObject; // @synthesize foundInCacheObject=_foundInCacheObject;
@property(nonatomic) _Bool foundInCache; // @synthesize foundInCache=_foundInCache;
@property(copy, nonatomic) NSArray *additionalSupportedStringEncodings; // @synthesize additionalSupportedStringEncodings=_additionalSupportedStringEncodings;
@property(copy, nonatomic) NSArray *additionalSupportedContentTypes; // @synthesize additionalSupportedContentTypes=_additionalSupportedContentTypes;
@property(copy) CDUnknownBlockType failureBlock; // @synthesize failureBlock=_failureBlock;
@property(copy) CDUnknownBlockType successBlock; // @synthesize successBlock=_successBlock;
@property(nonatomic) double cachePurgeLimit; // @synthesize cachePurgeLimit=_cachePurgeLimit;
@property(copy, nonatomic) NSString *cachePurgePattern; // @synthesize cachePurgePattern=_cachePurgePattern;
@property(retain, nonatomic) NSFetchRequest *coreDataRequest; // @synthesize coreDataRequest=_coreDataRequest;
@property(nonatomic) double cacheFetchLimit; // @synthesize cacheFetchLimit=_cacheFetchLimit;
@property(nonatomic) double cacheLimit; // @synthesize cacheLimit=_cacheLimit;
@property(nonatomic) long long cacheStrategy; // @synthesize cacheStrategy=_cacheStrategy;
@property(nonatomic) long long cacheType; // @synthesize cacheType=_cacheType;
@property(nonatomic) unsigned long long usageMask; // @synthesize usageMask=_usageMask;
@property(nonatomic) unsigned long long options; // @synthesize options=_options;
@property(nonatomic) long long responseType; // @synthesize responseType=_responseType;
@property(nonatomic) long long requestType; // @synthesize requestType=_requestType;
@property(nonatomic) double timeout; // @synthesize timeout=_timeout;
@property(copy, nonatomic) NSArray *successStatuses; // @synthesize successStatuses=_successStatuses;
@property(copy, nonatomic) NSArray *queryItems; // @synthesize queryItems=_queryItems;
@property(copy, nonatomic) NSDictionary *parameters; // @synthesize parameters=_parameters;
@property(copy, nonatomic) NSString *requestMethod; // @synthesize requestMethod=_requestMethod;
@property(copy, nonatomic) NSString *path; // @synthesize path=_path;
- (void).cxx_destruct;
- (void)cancel;
- (id)mergeIntoEntityName:(id)arg1 context:(id)arg2 identifier:(id)arg3 managedArray:(id)arg4 jsonIdentifier:(id)arg5 jsonArray:(id)arg6 deleteNonMatching:(_Bool)arg7 error:(id *)arg8 withBlock:(CDUnknownBlockType)arg9;
- (id)mergeIntoEntityName:(id)arg1 context:(id)arg2 identifier:(id)arg3 jsonIdentifier:(id)arg4 jsonArray:(id)arg5 deleteNonMatching:(_Bool)arg6 error:(id *)arg7 withBlock:(CDUnknownBlockType)arg8;
- (void)addToQueryItems:(id)arg1;
- (void)setQueryParameters:(id)arg1;
- (void)iterateAdditionalCachesWithBlock:(CDUnknownBlockType)arg1;
- (void)storeCacheValue:(id)arg1 forRequest:(id)arg2;
- (id)transformResponse:(id)arg1 error:(id *)arg2;
- (void)didReceiveResponse:(id)arg1 data:(id)arg2;
- (void)willSendRequest:(id)arg1;
- (id)willUseCachedObject:(id)arg1 date:(id *)arg2;
- (void)loginRequestFinished:(id)arg1;
@property(readonly, nonatomic) _Bool checksIfModified;
- (id)v2LoginIdAppendedToRequestKey:(id)arg1;
- (id)requestKey;
- (_Bool)requestKeyIncludesLanguage;
- (id)baseURL;
- (id)init;

@end

