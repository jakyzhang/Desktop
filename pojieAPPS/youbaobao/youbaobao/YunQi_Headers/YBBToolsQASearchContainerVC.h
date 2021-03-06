//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IMYPublicBaseViewController.h"

#import "UITextFieldDelegate-Protocol.h"

@class NSMutableArray, NSString, UIView, YBBToolsChildbirthBagSearchHeaderView, YBBToolsQAAssociateVC, YBBToolsQAResultVC, YBBToolsXRTagListView;

@interface YBBToolsQASearchContainerVC : IMYPublicBaseViewController <UITextFieldDelegate>
{
    YBBToolsChildbirthBagSearchHeaderView *_searchView;
    YBBToolsXRTagListView *_tagList;
    YBBToolsXRTagListView *_hiTagList;
    YBBToolsQAAssociateVC *_associateVC;
    YBBToolsQAResultVC *_resultVC;
    UIView *_weSearchView;
    UIView *_historyView;
    UIView *_firstView;
    NSString *_searchKeyS;
    unsigned long long _searchType;
    NSMutableArray *_weArray;
    NSMutableArray *_historyArray;
    NSString *_searchKey;
}

@property(copy, nonatomic) NSString *searchKey; // @synthesize searchKey=_searchKey;
@property(retain, nonatomic) NSMutableArray *historyArray; // @synthesize historyArray=_historyArray;
@property(retain, nonatomic) NSMutableArray *weArray; // @synthesize weArray=_weArray;
@property(nonatomic) unsigned long long searchType; // @synthesize searchType=_searchType;
@property(copy, nonatomic) NSString *searchKeyS; // @synthesize searchKeyS=_searchKeyS;
@property(retain, nonatomic) UIView *firstView; // @synthesize firstView=_firstView;
@property(retain, nonatomic) UIView *historyView; // @synthesize historyView=_historyView;
@property(retain, nonatomic) UIView *weSearchView; // @synthesize weSearchView=_weSearchView;
@property(retain, nonatomic) YBBToolsQAResultVC *resultVC; // @synthesize resultVC=_resultVC;
@property(retain, nonatomic) YBBToolsQAAssociateVC *associateVC; // @synthesize associateVC=_associateVC;
@property(retain, nonatomic) YBBToolsXRTagListView *hiTagList; // @synthesize hiTagList=_hiTagList;
@property(retain, nonatomic) YBBToolsXRTagListView *tagList; // @synthesize tagList=_tagList;
@property(retain, nonatomic) YBBToolsChildbirthBagSearchHeaderView *searchView; // @synthesize searchView=_searchView;
- (void).cxx_destruct;
- (void)requestResult:(id)arg1 andWordsType:(unsigned long long)arg2;
- (void)requestResult:(id)arg1 andWordsType:(unsigned long long)arg2 biParams:(id)arg3;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)addLocalHistoryData;
- (void)loadData;
- (void)saveHistoryWords:(id)arg1 success:(CDUnknownBlockType)arg2;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)textFieldTextChange:(id)arg1;
- (void)addResultVC;
- (void)addAssociateVC;
- (void)refreshWeSearchView;
- (void)clearHistoryDidClick;
- (void)addFirstView;
- (void)setupSearchBar;
- (void)clickTag:(id)arg1 withType:(long long)arg2 biParams:(id)arg3;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

