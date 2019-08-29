//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"
#import "WCStoryCollectionFooterViewDelegate-Protocol.h"
#import "WCStoryFacadeExt-Protocol.h"

@class MMUILabel, NSMutableArray, NSMutableDictionary, NSString, TTCollectionView, UICollectionViewFlowLayout, WCStoryCollectionFooterView, WCStoryFloatTopBar;

@interface WCStoryHistoryViewController : MMUIViewController <WCStoryFacadeExt, UIScrollViewDelegate, UICollectionViewDelegate, UICollectionViewDataSource, WCStoryCollectionFooterViewDelegate>
{
    _Bool _isFetchingData;
    _Bool _hasNoMoreLocalData;
    _Bool _hasNoMoreServerData;
    TTCollectionView *_collectionView;
    UICollectionViewFlowLayout *_flowLayout;
    WCStoryFloatTopBar *_floatTopBar;
    WCStoryCollectionFooterView *_footerView;
    NSString *_username;
    unsigned long long _currentDataID;
    NSMutableArray *_timeTable;
    NSMutableDictionary *_historyMediaData;
    NSMutableArray *_dateKeyTable;
    MMUILabel *_noDataLabel;
}

@property(retain, nonatomic) MMUILabel *noDataLabel; // @synthesize noDataLabel=_noDataLabel;
@property(retain, nonatomic) NSMutableArray *dateKeyTable; // @synthesize dateKeyTable=_dateKeyTable;
@property(retain, nonatomic) NSMutableDictionary *historyMediaData; // @synthesize historyMediaData=_historyMediaData;
@property(retain, nonatomic) NSMutableArray *timeTable; // @synthesize timeTable=_timeTable;
@property(nonatomic) _Bool hasNoMoreServerData; // @synthesize hasNoMoreServerData=_hasNoMoreServerData;
@property(nonatomic) _Bool hasNoMoreLocalData; // @synthesize hasNoMoreLocalData=_hasNoMoreLocalData;
@property(nonatomic) _Bool isFetchingData; // @synthesize isFetchingData=_isFetchingData;
@property(nonatomic) unsigned long long currentDataID; // @synthesize currentDataID=_currentDataID;
@property(copy, nonatomic) NSString *username; // @synthesize username=_username;
@property(retain, nonatomic) WCStoryCollectionFooterView *footerView; // @synthesize footerView=_footerView;
@property(retain, nonatomic) WCStoryFloatTopBar *floatTopBar; // @synthesize floatTopBar=_floatTopBar;
@property(retain, nonatomic) UICollectionViewFlowLayout *flowLayout; // @synthesize flowLayout=_flowLayout;
@property(retain, nonatomic) TTCollectionView *collectionView; // @synthesize collectionView=_collectionView;
- (void).cxx_destruct;
- (void)onDeleteStoryWithStory:(id)arg1 PageIndexObj:(id)arg2;
- (void)MMRefreshCollectionFooterDidTriggerRefresh:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)changeFooterViewState;
- (void)handleNewDataItems:(id)arg1;
- (void)getHistoryDataFromServer;
- (id)getHistoryDataFromDB;
- (void)fetchMoreData;
- (void)setupData;
- (void)changeContentInsetAdjustmentBehavior;
- (void)setUpUI;
- (void)dealloc;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithUsername:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

