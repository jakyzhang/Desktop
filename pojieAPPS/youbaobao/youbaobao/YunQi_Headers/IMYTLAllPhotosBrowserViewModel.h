//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IMYTLRecordModel, NSMutableArray, RACSignal, RACSubject;
@protocol IMYTLListService, OS_dispatch_queue;

@interface IMYTLAllPhotosBrowserViewModel : NSObject
{
    _Bool _isLastPage;
    _Bool _isPrevLastPage;
    _Bool _isFromeBigEvent;
    _Bool _isRequesting;
    _Bool _lastRequestIsPrev;
    _Bool _lastRequestIsReload;
    _Bool _isFrist;
    IMYTLRecordModel *_timeline;
    NSMutableArray *_datas;
    RACSignal *_loadDatasSignal;
    RACSignal *_loadOrignalPictureSignal;
    RACSignal *_refeashOrignalBtnSignal;
    CDUnknownBlockType _currentIndexBlock;
    id <IMYTLListService> _listService;
    NSMutableArray *_photos;
    long long _startIndex;
    RACSubject *_loadDataSubject;
    RACSignal *_loadInnerSignal;
    RACSubject *_loadOrignalSubject;
    RACSignal *_loadOrignalInnerSignal;
    RACSubject *_refeshOrignalBtnSubject;
    RACSignal *_refeashOrignalBtnInnerSignal;
    long long _largeCount;
    long long _lessCount;
    unsigned long long _syncNetToLocalStatus;
    NSMutableArray *_originalPhotos;
    NSObject<OS_dispatch_queue> *_loadDataQueue;
    CDUnknownBlockType _loadDataBlock;
}

@property(nonatomic) _Bool isFrist; // @synthesize isFrist=_isFrist;
@property(copy, nonatomic) CDUnknownBlockType loadDataBlock; // @synthesize loadDataBlock=_loadDataBlock;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *loadDataQueue; // @synthesize loadDataQueue=_loadDataQueue;
@property(retain, nonatomic) NSMutableArray *originalPhotos; // @synthesize originalPhotos=_originalPhotos;
@property(nonatomic) unsigned long long syncNetToLocalStatus; // @synthesize syncNetToLocalStatus=_syncNetToLocalStatus;
@property(nonatomic) long long lessCount; // @synthesize lessCount=_lessCount;
@property(nonatomic) long long largeCount; // @synthesize largeCount=_largeCount;
@property(nonatomic) _Bool lastRequestIsReload; // @synthesize lastRequestIsReload=_lastRequestIsReload;
@property(nonatomic) _Bool lastRequestIsPrev; // @synthesize lastRequestIsPrev=_lastRequestIsPrev;
@property(nonatomic) _Bool isRequesting; // @synthesize isRequesting=_isRequesting;
@property(retain, nonatomic) RACSignal *refeashOrignalBtnInnerSignal; // @synthesize refeashOrignalBtnInnerSignal=_refeashOrignalBtnInnerSignal;
@property(retain, nonatomic) RACSubject *refeshOrignalBtnSubject; // @synthesize refeshOrignalBtnSubject=_refeshOrignalBtnSubject;
@property(retain, nonatomic) RACSignal *loadOrignalInnerSignal; // @synthesize loadOrignalInnerSignal=_loadOrignalInnerSignal;
@property(retain, nonatomic) RACSubject *loadOrignalSubject; // @synthesize loadOrignalSubject=_loadOrignalSubject;
@property(retain, nonatomic) RACSignal *loadInnerSignal; // @synthesize loadInnerSignal=_loadInnerSignal;
@property(retain, nonatomic) RACSubject *loadDataSubject; // @synthesize loadDataSubject=_loadDataSubject;
@property(nonatomic) long long startIndex; // @synthesize startIndex=_startIndex;
@property(retain, nonatomic) NSMutableArray *photos; // @synthesize photos=_photos;
@property(retain, nonatomic) id <IMYTLListService> listService; // @synthesize listService=_listService;
@property(copy, nonatomic) CDUnknownBlockType currentIndexBlock; // @synthesize currentIndexBlock=_currentIndexBlock;
@property(retain, nonatomic) RACSignal *refeashOrignalBtnSignal; // @synthesize refeashOrignalBtnSignal=_refeashOrignalBtnSignal;
@property(retain, nonatomic) RACSignal *loadOrignalPictureSignal; // @synthesize loadOrignalPictureSignal=_loadOrignalPictureSignal;
@property(retain, nonatomic) RACSignal *loadDatasSignal; // @synthesize loadDatasSignal=_loadDatasSignal;
@property(retain, nonatomic) NSMutableArray *datas; // @synthesize datas=_datas;
@property(nonatomic) _Bool isFromeBigEvent; // @synthesize isFromeBigEvent=_isFromeBigEvent;
@property(nonatomic) _Bool isPrevLastPage; // @synthesize isPrevLastPage=_isPrevLastPage;
@property(nonatomic) _Bool isLastPage; // @synthesize isLastPage=_isLastPage;
@property(readonly, nonatomic) IMYTLRecordModel *timeline; // @synthesize timeline=_timeline;
- (void).cxx_destruct;
- (void)dealloc;
- (void)clear;
- (void)deletePhotos:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (long long)realyIndex:(id)arg1;
- (_Bool)isLastPhotoEvent:(long long)arg1;
- (void)deletePhotoAtIndex:(unsigned long long)arg1 completed:(CDUnknownBlockType)arg2;
- (long long)indexForPhotoUrl:(id)arg1;
- (void)addPhotoLoadStatusObserver;
- (void)loadOriginalPicture:(long long)arg1;
- (long long)browserStartIndex;
- (id)titleForIndex:(long long)arg1;
- (id)dataIndex:(long long)arg1;
- (long long)numberOfPhotos;
- (id)requestTimeListDataReload:(_Bool)arg1 isPrev:(_Bool)arg2 photoId:(long long)arg3 eventId:(long long)arg4 takenAt:(double)arg5;
- (id)requestTimeListDataReload:(_Bool)arg1 isPrev:(_Bool)arg2;
- (void)requestNextData:(_Bool)arg1;
- (void)requestData;
- (void)requestNetDataSyncToLocal:(unsigned long long)arg1;
- (id)createMPModels:(id)arg1;
- (long long)getRefeashIndexTimeline:(id)arg1 inDatas:(id)arg2;
- (void)createLoadDataBlock;
- (void)loadLocalDatas:(_Bool)arg1;
- (void)loadDatas;
- (void)syncNetToLocalStatusHandle;
- (void)addPhotoListServiveObsever;
- (id)initWithTimeline:(id)arg1;

@end

