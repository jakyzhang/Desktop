//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMAlbumForiOS8Plus.h"

@class NSArray, NSDictionary, NSMutableDictionary, PHAssetCollection, PHFetchResult;

@interface MMALbumForPHAssetFramework : MMAlbumForiOS8Plus
{
    _Bool _m_shouldIncludeVideo;
    _Bool _m_isOnlyShowVideo;
    PHAssetCollection *m_collection;
    PHFetchResult *m_fetchResult;
    NSMutableDictionary *m_assetDic;
    NSArray *_m_imagesArray;
    NSDictionary *_m_indexInAllToIndexInImages;
}

@property(nonatomic) _Bool m_isOnlyShowVideo; // @synthesize m_isOnlyShowVideo=_m_isOnlyShowVideo;
@property(nonatomic) _Bool m_shouldIncludeVideo; // @synthesize m_shouldIncludeVideo=_m_shouldIncludeVideo;
@property(retain, nonatomic) NSDictionary *m_indexInAllToIndexInImages; // @synthesize m_indexInAllToIndexInImages=_m_indexInAllToIndexInImages;
@property(retain, nonatomic) NSArray *m_imagesArray; // @synthesize m_imagesArray=_m_imagesArray;
@property(retain, nonatomic) NSMutableDictionary *m_assetDic; // @synthesize m_assetDic;
@property(retain, nonatomic) PHFetchResult *m_fetchResult; // @synthesize m_fetchResult;
@property(retain, nonatomic) PHAssetCollection *m_collection; // @synthesize m_collection;
- (void).cxx_destruct;
- (id)lastAssetWithSecond:(double)arg1;
- (void)retrivePhotoCountWithAsyncBlock:(CDUnknownBlockType)arg1;
- (void)retriveCoverImageWithAsyncBlock:(CDUnknownBlockType)arg1;
- (void)stopICloudActivity;
- (id)assetForPHAssset:(id)arg1;
- (id)assetOfIndex:(unsigned long long)arg1;
- (id)coverImage;
- (unsigned long long)photosCount;
- (id)name;
- (id)albumId;
- (void)updateFetchResult:(id)arg1;
- (id)getFetchResultWithOtionSorting;
- (id)getFetchResult;
- (id)initWithPHAssetCollection:(id)arg1 shouldIncludeVideo:(_Bool)arg2 isOnlyShowVideo:(_Bool)arg3;
- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;

@end

