//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TTQDragableBaseView.h"

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"

@class NSArray, NSMutableDictionary, NSString, TTQVideoDetailModel, TTQVideoDetailViewModel, UICollectionView, UIImage, UIImageView, UIView;
@protocol TTQVideoPlayViewDelegate;

@interface TTQVideoPlayView : TTQDragableBaseView <UIScrollViewDelegate, UICollectionViewDelegate, UICollectionViewDataSource>
{
    _Bool _recommend_type;
    _Bool _isClosedByDrag;
    _Bool _isNeedRefresh;
    id <TTQVideoPlayViewDelegate> _delegate;
    UIView *_oriView;
    UIImage *_oriImage;
    long long _entrance;
    long long _type;
    NSString *_al_source;
    NSString *_algorithm;
    CDUnknownBlockType _hideImageAnimate;
    CDUnknownBlockType _alphaViewIfNeed;
    UICollectionView *_collectionView;
    NSArray *_videoArray;
    NSMutableDictionary *_cacheModels;
    long long _selIndex;
    long long _barStyle;
    TTQVideoDetailViewModel *_viewModel;
    UIImageView *_coverImageView;
    struct CGRect _oriFrame;
}

@property(retain, nonatomic) UIImageView *coverImageView; // @synthesize coverImageView=_coverImageView;
@property(retain, nonatomic) TTQVideoDetailViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(nonatomic) _Bool isNeedRefresh; // @synthesize isNeedRefresh=_isNeedRefresh;
@property(nonatomic) _Bool isClosedByDrag; // @synthesize isClosedByDrag=_isClosedByDrag;
@property(nonatomic) long long barStyle; // @synthesize barStyle=_barStyle;
@property(nonatomic) long long selIndex; // @synthesize selIndex=_selIndex;
@property(retain, nonatomic) NSMutableDictionary *cacheModels; // @synthesize cacheModels=_cacheModels;
@property(copy, nonatomic) NSArray *videoArray; // @synthesize videoArray=_videoArray;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(copy, nonatomic) CDUnknownBlockType alphaViewIfNeed; // @synthesize alphaViewIfNeed=_alphaViewIfNeed;
@property(copy, nonatomic) CDUnknownBlockType hideImageAnimate; // @synthesize hideImageAnimate=_hideImageAnimate;
@property(copy, nonatomic) NSString *algorithm; // @synthesize algorithm=_algorithm;
@property(copy, nonatomic) NSString *al_source; // @synthesize al_source=_al_source;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(nonatomic) long long entrance; // @synthesize entrance=_entrance;
@property(nonatomic) _Bool recommend_type; // @synthesize recommend_type=_recommend_type;
@property(nonatomic) __weak UIImage *oriImage; // @synthesize oriImage=_oriImage;
@property(nonatomic) __weak UIView *oriView; // @synthesize oriView=_oriView;
@property(nonatomic) struct CGRect oriFrame; // @synthesize oriFrame=_oriFrame;
@property(nonatomic) __weak id <TTQVideoPlayViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)reloadCellWithIndex:(long long)arg1;
- (void)reloadAdjacentCell;
- (void)setupCellBlock:(id)arg1 index:(long long)arg2;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)addCommitCount:(long long)arg1;
- (void)replay;
- (void)play;
- (void)pause;
- (void)shareForDetail;
- (void)shareAction:(_Bool)arg1;
- (void)deleteButtonAction;
- (void)addNewComment;
- (void)commentsButtonAction:(id)arg1;
- (void)goHomePage;
- (void)goThemePage;
- (void)joinRecordVideo;
- (void)followAction:(id)arg1;
- (void)collectionAction:(id)arg1;
- (void)pariseAction:(id)arg1;
- (void)dragEndWithPoint:(struct CGPoint)arg1 shouldHideView:(_Bool)arg2;
- (void)dragingWithPoint:(struct CGPoint)arg1;
- (void)dragBeginWithPoint:(struct CGPoint)arg1;
- (void)dismissVideoPlayView;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (id)getDetailModelWithIndex:(long long)arg1;
- (void)refreshDataWithIndex:(long long)arg1 isNeedRequestList:(_Bool)arg2;
- (void)refreshDataWithIndex:(long long)arg1;
- (void)getNextSmallVideoArray;
- (void)addMoreData:(id)arg1;
- (id)currentPlayCell;
- (id)currentPlayingView;
- (void)prepareUI;
@property(readonly, nonatomic) TTQVideoDetailModel *currentModel;
- (void)viewDidDisappear;
- (void)viewDidAppear;
- (void)viewWillDisappear;
- (void)viewWillAppear;
- (id)initWithVideoID:(long long)arg1 videoArray:(id)arg2 selIndex:(long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
