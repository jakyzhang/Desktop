//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBCoding-Protocol.h"
#import "WCPlayerMediaExt-Protocol.h"
#import "WCTColumnCoding-Protocol.h"

@class NSString;

@interface WCStoryMediaItem : NSObject <WCPlayerMediaExt, PBCoding, WCTColumnCoding>
{
    _Bool bUseXorEncrypt;
    _Bool _notPostSucc;
    float duration;
    int createTime;
    int encIdx;
    float _preloadDuration;
    int _preloadIndex;
    NSString *tid;
    NSString *mid;
    NSString *md5;
    NSString *videoMD5;
    NSString *thumbImageUrl;
    NSString *videoUrl;
    unsigned long long xorEncrpyKey;
    unsigned long long enckey;
    NSString *token;
}

+ (int)columnTypeForWCDB;
+ (id)unarchiveWithWCTValue:(struct NSObject *)arg1;
+ (void)initialize;
@property(nonatomic) int preloadIndex; // @synthesize preloadIndex=_preloadIndex;
@property(nonatomic) _Bool notPostSucc; // @synthesize notPostSucc=_notPostSucc;
@property(nonatomic) float preloadDuration; // @synthesize preloadDuration=_preloadDuration;
@property(retain, nonatomic) NSString *token; // @synthesize token;
@property(nonatomic) int encIdx; // @synthesize encIdx;
@property(nonatomic) unsigned long long enckey; // @synthesize enckey;
@property(nonatomic) unsigned long long xorEncrpyKey; // @synthesize xorEncrpyKey;
@property(nonatomic) _Bool bUseXorEncrypt; // @synthesize bUseXorEncrypt;
@property(retain, nonatomic) NSString *videoUrl; // @synthesize videoUrl;
@property(retain, nonatomic) NSString *thumbImageUrl; // @synthesize thumbImageUrl;
@property(retain, nonatomic) NSString *videoMD5; // @synthesize videoMD5;
@property(retain, nonatomic) NSString *md5; // @synthesize md5;
@property(nonatomic) int createTime; // @synthesize createTime;
@property(nonatomic) float duration; // @synthesize duration;
@property(retain, nonatomic) NSString *mid; // @synthesize mid;
@property(retain, nonatomic) NSString *tid; // @synthesize tid;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (unsigned int)getPreloadPercent;
- (id)getThumbImagePath;
- (id)getTmpThumbImagePath;
- (id)getFormatVideoPath;
- (id)getTempVideoPath;
- (id)getThumbIdentifier;
- (id)getMediaWrapIdentifier;
- (id)tmpPathForPreview;
- (id)pathForPreview;
- (id)pathForSightData;
- (id)tempPathForSightData;
- (id)getMediaDataPath;
- (_Bool)savePreviewFromData:(id)arg1;
- (_Bool)saveSightDataFromData:(id)arg1;
- (_Bool)saveDataFromData:(id)arg1;
- (_Bool)savePreviewFromPath:(id)arg1;
- (_Bool)saveSightDataFromPath:(id)arg1;
- (_Bool)saveDataFromPath:(id)arg1;
- (void)cleanMeidaFileCache;
- (_Bool)isValid;
- (_Bool)hasPreview;
- (_Bool)hasSight;
- (_Bool)hasData;
- (_Bool)createTempSightPath;
- (id)init;
- (struct NSObject *)archivedWCTValue;
- (const map_f8690629 *)getValueTagIndexMap;
- (id)getValueTypeTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

