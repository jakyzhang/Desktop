//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IMYEBBaseViewController.h"

#import "IMYFakeNavigationBarTransitionDelegate-Protocol.h"

@class IMYEBCartViewController, IMYEBMeetyouCouponCartViewController, IMYEBSwitchModel, NSString, UIButton, UISegmentedControl;

@interface IMYEBRootCartViewController : IMYEBBaseViewController <IMYFakeNavigationBarTransitionDelegate>
{
    _Bool _isShowSegment;
    _Bool _isToShowBottomTabBar;
    IMYEBMeetyouCouponCartViewController *_couponCartViewController;
    IMYEBCartViewController *_taobaoCartViewController;
    CDUnknownBlockType _tabButtonClickBlock;
    UISegmentedControl *_seg;
    NSString *_segTitleLeft;
    NSString *_segTitleRight;
    IMYEBSwitchModel *_cartTitlesConfigModel;
    NSString *_rightItemRediectURL;
    UIButton *_recordButton;
}

@property(retain, nonatomic) UIButton *recordButton; // @synthesize recordButton=_recordButton;
@property(retain, nonatomic) NSString *rightItemRediectURL; // @synthesize rightItemRediectURL=_rightItemRediectURL;
@property(retain, nonatomic) IMYEBSwitchModel *cartTitlesConfigModel; // @synthesize cartTitlesConfigModel=_cartTitlesConfigModel;
@property(copy, nonatomic) NSString *segTitleRight; // @synthesize segTitleRight=_segTitleRight;
@property(copy, nonatomic) NSString *segTitleLeft; // @synthesize segTitleLeft=_segTitleLeft;
@property(retain, nonatomic) UISegmentedControl *seg; // @synthesize seg=_seg;
@property(copy, nonatomic) CDUnknownBlockType tabButtonClickBlock; // @synthesize tabButtonClickBlock=_tabButtonClickBlock;
@property(nonatomic) _Bool isToShowBottomTabBar; // @synthesize isToShowBottomTabBar=_isToShowBottomTabBar;
@property(nonatomic) _Bool isShowSegment; // @synthesize isShowSegment=_isShowSegment;
@property(retain, nonatomic) IMYEBCartViewController *taobaoCartViewController; // @synthesize taobaoCartViewController=_taobaoCartViewController;
@property(retain, nonatomic) IMYEBMeetyouCouponCartViewController *couponCartViewController; // @synthesize couponCartViewController=_couponCartViewController;
- (void).cxx_destruct;
- (_Bool)fullPopGestureRecognizerShouldBegin:(id)arg1;
- (void)changesegmentToOtherShopCart;
- (void)onTabClick:(id)arg1;
- (void)cartConfig;
- (void)showNavRightItem:(_Bool)arg1 rediectURL:(id)arg2;
- (void)showNavTab:(_Bool)arg1;
- (void)dealloc;
- (void)viewWillAppear:(_Bool)arg1;
- (_Bool)shouldFakeNavigationBarTransition;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

