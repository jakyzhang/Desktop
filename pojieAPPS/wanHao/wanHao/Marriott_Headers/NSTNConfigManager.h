//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSTNAsyncDelegate-Protocol.h"
#import "NSTNParserDelegate-Protocol.h"

@class NSString, NSTNConfig, NSTNConfigDownloader, NSTNConfigParser, NSTimer;

@interface NSTNConfigManager : NSObject <NSTNAsyncDelegate, NSTNParserDelegate>
{
    NSTNConfig *config;
    NSTNConfigDownloader *downloader;
    NSTNConfigParser *parser;
    NSTimer *configRefreshTimer;
    _Bool isSavedConfig;
    _Bool _hasLoadedOnce;
}

+ (void)startTimer;
+ (void)stopTimer;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)configManager;
@property _Bool hasLoadedOnce; // @synthesize hasLoadedOnce=_hasLoadedOnce;
- (void).cxx_destruct;
- (void)updateConfigUrlString:(id)arg1;
- (id)getConfigUrlString;
- (id)eventRulesForObject:(id)arg1;
- (id)appDelClassRulesForSelector:(SEL)arg1;
- (id)appClassRulesForSelector:(SEL)arg1;
- (id)methodRulesForSelector:(SEL)arg1;
- (id)getInitRules;
- (id)notificationRulesForName:(id)arg1;
- (id)classRulesForClassName:(id)arg1 andSelector:(SEL)arg2;
- (id)getAdminKey;
- (id)classesToDump;
- (_Bool)shouldDumpScreens;
- (id)classInfoURL;
- (id)uploadURL;
- (_Bool)canServeView;
- (int)getVServeMaxViews;
- (id)getVServeURL;
- (void)updateRefreshInterval:(int)arg1;
- (int)configRefreshInterval;
- (int)queueDepth;
- (id)queueExclusions;
- (void)updateLastRefreshTime:(id)arg1;
- (id)lastConfigRefresh;
- (id)appVersion;
- (void)updateCurrentVersion:(id)arg1;
- (id)currentVersion;
- (id)dataForBatteryWatcher;
- (id)optOutMessage;
- (int)canOptOut;
- (id)whiteList;
- (int)isGatewayEnabled;
- (int)canStoreToDisk;
- (id)latestLbVersion;
- (id)movieWatcher;
- (id)events;
- (void)updateConfigDictionary:(id)arg1;
- (id)getMethods;
- (id)notifications;
- (id)classes;
- (void)parseConfig:(id)arg1;
- (void)handleCompletedRequest:(id)arg1;
- (void)doneParsing;
- (void)requestWentWrong:(id)arg1;
- (void)requestFinished:(id)arg1 info:(id)arg2;
- (void)requestReturnedResponse:(id)arg1 info:(id)arg2;
- (void)stopTimer;
- (void)timerFireMethod:(id)arg1;
- (void)startTimer;
- (_Bool)isSavedConfig;
- (void)loadSavedConfig;
- (void)downloadConfig;
- (int)assertConfig;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

