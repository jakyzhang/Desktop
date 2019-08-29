//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface IMYTLHucaiPrintVM : NSObject
{
    NSMutableArray *_datas;
    CDUnknownBlockType _noSeePageBlock;
    CDUnknownBlockType _hasEidtPageBlock;
    CDUnknownBlockType _hasNoEidtPageBlock;
    CDUnknownBlockType _emptyPageBlock;
    unsigned long long _type;
    CDUnknownBlockType _commitSuccessBlock;
    CDUnknownBlockType _commiteFailBlock;
}

@property(copy, nonatomic) CDUnknownBlockType commiteFailBlock; // @synthesize commiteFailBlock=_commiteFailBlock;
@property(copy, nonatomic) CDUnknownBlockType commitSuccessBlock; // @synthesize commitSuccessBlock=_commitSuccessBlock;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(copy, nonatomic) CDUnknownBlockType emptyPageBlock; // @synthesize emptyPageBlock=_emptyPageBlock;
@property(copy, nonatomic) CDUnknownBlockType hasNoEidtPageBlock; // @synthesize hasNoEidtPageBlock=_hasNoEidtPageBlock;
@property(copy, nonatomic) CDUnknownBlockType hasEidtPageBlock; // @synthesize hasEidtPageBlock=_hasEidtPageBlock;
@property(copy, nonatomic) CDUnknownBlockType noSeePageBlock; // @synthesize noSeePageBlock=_noSeePageBlock;
@property(retain, nonatomic) NSMutableArray *datas; // @synthesize datas=_datas;
- (void).cxx_destruct;
- (id)getImageCropWithUserEidtModel:(id)arg1 drawSize:(struct CGSize)arg2 check:(_Bool)arg3;
- (void)postToService:(id)arg1 hasLocal:(_Bool)arg2 callBack:(CDUnknownBlockType)arg3;
- (id)getTLAssetInfoFromItemModel:(id)arg1 orderNo:(id)arg2;
- (long long)getUploadStatus;
- (id)getNeedHucaiPrintUploadAssetInfoWithOrderNo:(id)arg1;
- (void)checkAndUploadPhotosOrderNo:(id)arg1 completed:(CDUnknownBlockType)arg2;
- (id)paramsDicWithOrderId:(id)arg1 billJson:(id)arg2;
- (void)commitEidtToServiceType:(unsigned long long)arg1 count:(long long)arg2 success:(CDUnknownBlockType)arg3 fail:(CDUnknownBlockType)arg4;
- (void)getOrderNotificationHandle:(id)arg1;
- (void)clearUserEidtDatas;
- (void)saveUserEidtDatas;
- (void)clearSavedUserEidtDatas;
- (void)loadSavedUserEidtDatas;
- (_Bool)hasSavedUserEidtDatas;
- (_Bool)checkIsNeedShowInfoTip;
- (_Bool)checkIsNeedShowTipForType:(unsigned long long)arg1;
- (_Bool)needShowSaveDraftTip;
- (void)recordModelHasSeeIndex:(long long)arg1;
- (id)getEidtAbnormalPages;
- (id)getPagesWithBlock:(CDUnknownBlockType)arg1;
- (id)getEmptyPages;
- (id)getNoSeePages;
- (id)getNoEidtPages;
- (id)getHasEidtPages;
- (id)getDpiTooLowPointsPage:(long long)arg1;
- (unsigned long long)thisTimeMaxLoadPhotoCountStartPage:(long long)arg1 isReplace:(_Bool)arg2;
- (void)removeThumb:(id)arg1 imageKey:(id)arg2;
- (_Bool)updateWaitingThumb:(id)arg1 cell:(id)arg2;
- (_Bool)addThumb:(id)arg1 imageKey:(id)arg2 cell:(id)arg3;
- (id)getAllUserEidtModels;
- (void)deleteDuplicate:(id)arg1;
- (void)localPhotosDeleteDuplicate;
- (void)addEidtPhotos:(id)arg1 startPage:(long long)arg2 startIndex:(long long)arg3;
- (void)loadDatas;
- (id)initWithType:(unsigned long long)arg1;

@end
