//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "BTBaseItemCellViewDelegate-Protocol.h"
#import "BTMsgSectionDataDelegate-Protocol.h"
#import "BTNotifyMsgCellViewDelegate-Protocol.h"
#import "BTOftenReadBarViewCellDelegate-Protocol.h"
#import "BrandArticleSearchControllerDelegate-Protocol.h"
#import "BrandTimelineMsgMgrExt-Protocol.h"
#import "BrandTimelineNotifyLogicDelegate-Protocol.h"
#import "BrandTimelineReportLogicDelegate-Protocol.h"
#import "IContactMgrExt-Protocol.h"
#import "MMRefreshTableFooterDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "UIViewControllerPreviewingDelegate-Protocol.h"
#import "WCActionSheetDelegate-Protocol.h"
#import "contactInfoDelegate-Protocol.h"
#import "tableViewDelegate-Protocol.h"

@class BrandArticleSearchController, BrandTimelineNotifyLogic, BrandTimelineReportLogic, CContact, MMTableView, MMTimer, NSIndexSet, NSMutableArray, NSString, UIButton, UIView, WCTimeLineFooterView;
@protocol UIViewControllerPreviewing;

@interface BrandTimelineViewController : MMUIViewController <BrandArticleSearchControllerDelegate, MMRefreshTableFooterDelegate, BrandTimelineMsgMgrExt, IContactMgrExt, UIViewControllerPreviewingDelegate, BrandTimelineNotifyLogicDelegate, BrandTimelineReportLogicDelegate, BTNotifyMsgCellViewDelegate, BTBaseItemCellViewDelegate, WCActionSheetDelegate, BTMsgSectionDataDelegate, contactInfoDelegate, BTOftenReadBarViewCellDelegate, UITableViewDelegate, UITableViewDataSource, tableViewDelegate>
{
    BrandArticleSearchController *m_articleSearchController;
    UIView *m_searchBarMaskView;
    struct CGPoint m_topContentOffset;
    MMTableView *m_tableView;
    WCTimeLineFooterView *m_footerView;
    UIButton *m_navNewTipsBtn;
    UIView *m_navDefaultTitleView;
    unsigned int m_navBarNewMsgCount;
    unsigned int m_newMsgCountInBgCacheTime;
    unsigned long long m_topLastNewMsgSequenceId;
    unsigned long long m_newMsgDividingLineSequenceId;
    MMTimer *m_msgRefreshTimer;
    _Bool m_bLoadingData;
    _Bool m_bAnimatedInsertRowFromTop;
    NSIndexSet *m_animatedInsertSectionSetFromTop;
    _Bool m_bAnimatedInsertRowFromBottom;
    NSIndexSet *m_animatedInsertSectionSetFromBottom;
    id <UIViewControllerPreviewing> _previewingContext;
    _Bool m_isScrollingToTop;
    _Bool m_hasLoadNumberOfTableRow;
    _Bool m_hasViewWillBePushedOnce;
    CContact *_contactToProfile;
    _Bool _isPush;
    _Bool _didAppear;
    unsigned int _displayMode;
    unsigned long long _source;
    NSMutableArray *_arrSectionData;
    NSMutableArray *_arrTimelineMsg;
    NSMutableArray *_arrTimelineMsgToAdd;
    BrandTimelineNotifyLogic *_notifyMsgLogic;
    BrandTimelineReportLogic *_reportLogic;
}

@property(nonatomic) _Bool didAppear; // @synthesize didAppear=_didAppear;
@property(nonatomic) _Bool isPush; // @synthesize isPush=_isPush;
@property(retain, nonatomic) BrandTimelineReportLogic *reportLogic; // @synthesize reportLogic=_reportLogic;
@property(retain, nonatomic) BrandTimelineNotifyLogic *notifyMsgLogic; // @synthesize notifyMsgLogic=_notifyMsgLogic;
@property(retain, nonatomic) NSMutableArray *arrTimelineMsgToAdd; // @synthesize arrTimelineMsgToAdd=_arrTimelineMsgToAdd;
@property(retain, nonatomic) NSMutableArray *arrTimelineMsg; // @synthesize arrTimelineMsg=_arrTimelineMsg;
@property(retain, nonatomic) NSMutableArray *arrSectionData; // @synthesize arrSectionData=_arrSectionData;
@property(nonatomic) unsigned int displayMode; // @synthesize displayMode=_displayMode;
@property(nonatomic) unsigned long long source; // @synthesize source=_source;
- (void).cxx_destruct;
- (unsigned long long)msgIndexForMsg:(id)arg1;
- (unsigned long long)msgIndexFormsgSectionData:(id)arg1;
- (id)visibleMsgList;
- (id)visibleReaderItemViewModelList;
- (id)visibleMsgSectionDataList;
- (id)msgSectionDataAtIndex:(unsigned long long)arg1;
- (unsigned long long)indexForMsgSectionToInsert;
- (unsigned long long)indexForFirstMsgSection;
- (void)traitCollectionDidChange:(id)arg1;
- (void)previewingContext:(id)arg1 commitViewController:(id)arg2;
- (id)previewingContext:(id)arg1 viewControllerForLocation:(struct CGPoint)arg2;
- (void)unregisterPreviewing;
- (void)registerPreviewing;
- (void)brandArticleSearchWillEndSearch;
- (void)brandArticleSearchWillBeginSearch;
- (void)deleteAllMsg;
- (_Bool)isContactNeedProcess:(id)arg1;
- (void)onModifyContact:(id)arg1;
- (unsigned long long)indexForOftenRead;
- (id)oftenReadSection;
- (void)updateOftenReadBarWithContactArr:(id)arg1;
- (void)resetOftenReadBarPosition;
- (void)updateOftenReadBar;
- (void)onUpateOftenReadBiz:(id)arg1;
- (void)onMigrateBrandMsgFinish:(unsigned long long)arg1;
- (void)updateOneDayLinePosition;
- (void)onDelBrandTimelineMsg:(id)arg1 msgWrap:(id)arg2;
- (void)onDelBrandTimelineMsgBySession:(id)arg1;
- (void)onClearAllTimelineMsgUnreadStatus;
- (void)onModBrandTimelineMsgArr:(id)arg1;
- (void)onModBrandTimelineMsg:(id)arg1;
- (void)p_addBrandTimelineMsgArr;
- (_Bool)isMsgWrapExist:(id)arg1;
- (void)onAddBrandTimelineMsg:(id)arg1;
- (_Bool)canInsertCellFromTopWithAnimation;
- (void)onOftenReadBarView:(id)arg1 exposeItemViewArr:(id)arg2;
- (void)onOftenReadBarView:(id)arg1 didClickItemView:(id)arg2;
- (void)onNotifyMsgCountChange:(unsigned int)arg1;
- (unsigned long long)indexForNotifySection;
- (unsigned long long)indexForNotifySectionToInsert;
- (id)getNotifySectionData;
- (_Bool)existNotifySection;
- (void)onNotifyMsgCellViewClicked;
- (id)getWebViewController:(id)arg1 url:(id)arg2 forPeek:(_Bool)arg3 fromMsgWrap:(id)arg4;
- (id)webViewExtraInfoWithReaderWrap:(id)arg1 msgWrap:(id)arg2;
- (void)ShowReader:(id)arg1 fromMsgWrap:(id)arg2;
- (void)jumpWeappOpWrap:(id)arg1 fromMsgWrap:(id)arg2;
- (_Bool)jumpVideoPageView:(id)arg1 fromMsgWrap:(id)arg2 fromItemView:(id)arg3;
- (_Bool)shouldGoToEmoticonDetail:(id)arg1 fromMsgWrap:(id)arg2;
- (void)unsubscribeContact:(id)arg1;
- (void)openReaderWrap:(id)arg1 fromMsgWrap:(id)arg2 fromItemView:(id)arg3;
- (void)openContactSession:(id)arg1 fromOftenRead:(_Bool)arg2;
- (void)unfoldTimelineMsg:(id)arg1;
- (void)onLongPressForDebug:(id)arg1;
- (void)onPreviewMsgImg:(id)arg1 originFrame:(struct CGRect)arg2 fromView:(id)arg3;
- (void)reloadCellWithCellView:(id)arg1;
- (void)onShowUnFinishedView;
- (id)getViewController;
- (void)onBrandItemAudioClick:(id)arg1;
- (void)onReloadItemView:(id)arg1;
- (void)onClickHeaderLongPress:(id)arg1 fromView:(id)arg2;
- (void)onClickHeaderDeleteMsg:(id)arg1 fromView:(id)arg2;
- (void)onClickHeaderRemoveContact:(id)arg1 fromView:(id)arg2;
- (void)onClickHeaderUnTopContact:(id)arg1 fromView:(id)arg2;
- (void)onClickHeaderTopContact:(id)arg1 fromView:(id)arg2;
- (void)onClickHeaderContact:(id)arg1 fromView:(id)arg2;
- (void)onMsgSectionHeightChange:(id)arg1;
- (void)ayncNotifyEnterChat:(id)arg1;
- (void)tryLoadDownMoreMessageWithInsertAnimation:(_Bool)arg1;
- (void)footerTryLoadDownMoreMsg;
- (_Bool)shouldDownMoreLoading;
- (void)MMRefreshTableFooterDidTriggerRefresh:(id)arg1;
- (void)updateLoadingState;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScrollToTop:(id)arg1;
- (_Bool)scrollViewShouldScrollToTop:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)showConfirmUnsubcribeActionSheet:(id)arg1 fromHeaderCellView:(id)arg2;
- (void)showComfirmDeleteActionSheet:(id)arg1 fromHeaderCellView:(id)arg2;
- (void)showHeaderActionSheet:(id)arg1 fromHeaderCellView:(id)arg2;
- (id)getContactFromHeaderCell:(id)arg1;
- (id)getContactDisplayNameFromHeaderCell:(id)arg1;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)animatedDisplayCell:(id)arg1 delay:(double)arg2 duration:(double)arg3;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)oneDayDividineLine;
- (void)updateNewMsgDividingLinePosition:(unsigned long long)arg1 reloadTableView:(_Bool)arg2;
- (void)updateDivdingLinePositionOnViewDealloc;
- (void)updateDivdingLinePositionOnViewBePushed;
- (_Bool)isSectionLastNewMsgSection:(long long)arg1;
- (_Bool)isSectionOneDayLastMsgSection:(long long)arg1;
- (id)viewControllerForBrandArticleSearch;
- (void)onNavBackBarButtonClicked;
- (void)showMessageList;
- (void)onScrollToTop;
- (void)onClickNavNewTipsBtn;
- (void)advanceUpdateMPPageDataWithMessage:(id)arg1;
- (void)advanceUpdateMPPageData;
- (void)tryRefreshTimelineItemInfo;
- (void)setVisibleMsgBrowsed;
- (void)layoutNavTipsBtn;
- (void)viewWillLayoutSubviews;
- (void)checkFirstVisibleCell;
- (void)updateVisibleCellTime;
- (void)adjustTableViewInset:(id)arg1;
- (void)updateNavigationBarWithNewMsgCount:(unsigned int)arg1;
- (id)getTitleColor;
- (void)initNavigationBar;
- (_Bool)isSeachActive;
- (void)initSearchBar;
- (void)initFooterView;
- (void)reloadTableView;
- (void)initTableView;
- (void)initView;
- (void)addMsgSectionIfNeed;
- (void)addNotifySectionIfNeed;
- (void)removeOftenReadSection;
- (void)addOftenReadSectionIfNeed:(id)arg1;
- (void)initData;
- (void)willEnterForeground:(id)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidBePoped:(_Bool)arg1;
- (void)viewWillBePoped:(_Bool)arg1;
- (void)viewDidBePushed:(_Bool)arg1;
- (void)advanceDownloadNewMsgCoverIfNeed;
- (void)viewWillBePushed:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

