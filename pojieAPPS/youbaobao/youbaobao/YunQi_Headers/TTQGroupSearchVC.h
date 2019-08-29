//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TTQTableViewController.h"

@class NSMutableSet, TTQGroupSearchVM, TTQSearchAssociateVC, TTQTopSeaResTitleV, UITableViewCell;

@interface TTQGroupSearchVC : TTQTableViewController
{
    _Bool _isFirst;
    TTQGroupSearchVM *_viewModel;
    TTQTopSeaResTitleV *_searchBar;
    TTQSearchAssociateVC *_associateVC;
    UITableViewCell *_tagCell;
    NSMutableSet *_displaySections;
}

@property(retain, nonatomic) NSMutableSet *displaySections; // @synthesize displaySections=_displaySections;
@property(nonatomic) _Bool isFirst; // @synthesize isFirst=_isFirst;
@property(retain, nonatomic) UITableViewCell *tagCell; // @synthesize tagCell=_tagCell;
@property(retain, nonatomic) TTQSearchAssociateVC *associateVC; // @synthesize associateVC=_associateVC;
@property(retain, nonatomic) TTQTopSeaResTitleV *searchBar; // @synthesize searchBar=_searchBar;
@property(retain, nonatomic) TTQGroupSearchVM *viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (void)clearHistory;
- (void)searchWithKeyWord:(id)arg1;
- (void)textFieldTextChange:(id)arg1;
- (void)search:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)tagCellWithIndexPath:(id)arg1;
- (void)tableView:(id)arg1 willDisplayHeaderView:(id)arg2 forSection:(long long)arg3;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (void)updateStatusBarStyle;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (_Bool)isWhiteNavigationBar;
- (void)viewDidLoad;
- (void)bindViewModel;

@end
