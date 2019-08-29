//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSMutableDictionary, NSURL;

@interface ApptentiveEngagementBackend : NSObject
{
    NSURL *_localEngagementManifestURL;
    NSData *_engagementManifestJSON;
    NSMutableDictionary *_engagementTargets;
    NSMutableDictionary *_engagementInteractions;
}

+ (id)codePointForVendor:(id)arg1 interactionType:(id)arg2 event:(id)arg3;
+ (id)stringByEscapingCodePointSeparatorCharactersInString:(id)arg1;
+ (id)cachedInteractionsStoragePath;
+ (id)cachedTargetsStoragePath;
@property(retain, nonatomic) NSMutableDictionary *engagementInteractions; // @synthesize engagementInteractions=_engagementInteractions;
@property(retain, nonatomic) NSMutableDictionary *engagementTargets; // @synthesize engagementTargets=_engagementTargets;
@property(copy, nonatomic) NSData *engagementManifestJSON; // @synthesize engagementManifestJSON=_engagementManifestJSON;
@property(retain, nonatomic) NSURL *localEngagementManifestURL; // @synthesize localEngagementManifestURL=_localEngagementManifestURL;
- (void).cxx_destruct;
- (void)resetEngagementData;
- (void)loadCachedEngagementManifest;
- (id)targetedLocalEvents;
- (id)allEngagementInteractions;
- (void)resetUpgradeVersionInfo;
- (void)presentInteraction:(id)arg1 fromViewController:(id)arg2;
- (void)interactionWasEngaged:(id)arg1;
- (void)interactionWasSeen:(id)arg1;
- (void)codePointWasEngaged:(id)arg1;
- (void)codePointWasSeen:(id)arg1;
- (_Bool)engageCodePoint:(id)arg1 fromInteraction:(id)arg2 userInfo:(id)arg3 customData:(id)arg4 extendedData:(id)arg5 fromViewController:(id)arg6;
- (_Bool)engageLocalEvent:(id)arg1 userInfo:(id)arg2 customData:(id)arg3 extendedData:(id)arg4 fromViewController:(id)arg5;
- (_Bool)engageApptentiveAppEvent:(id)arg1;
- (id)interactionForEvent:(id)arg1;
- (id)interactionForIdentifier:(id)arg1;
- (id)interactionForInvocations:(id)arg1;
- (_Bool)canShowInteractionForCodePoint:(id)arg1;
- (_Bool)canShowInteractionForLocalEvent:(id)arg1;
- (void)updateVersionInfo;
- (void)didReceiveNewTargets:(id)arg1 andInteractions:(id)arg2 maxAge:(double)arg3;
- (_Bool)shouldRetrieveNewEngagementManifest;
- (void)checkForEngagementManifest;
- (void)invalidateInteractionCache;
- (_Bool)invalidateInteractionCacheIfNeeded;
- (id)init;

@end
