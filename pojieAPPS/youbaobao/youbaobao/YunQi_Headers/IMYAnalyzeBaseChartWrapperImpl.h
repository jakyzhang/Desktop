//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "IMYAnalyzeChartWrapper-Protocol.h"

@class IMYAnalyzeLineChartView, NSString, UIView;

@interface IMYAnalyzeBaseChartWrapperImpl : NSObject <IMYAnalyzeChartWrapper>
{
    _Bool _shouldScrollToday;
    _Bool _shouldScrollToLast;
    _Bool _autoAdjustVerticalScale;
    CDUnknownBlockType _didSelectedItem;
    CDUnknownBlockType _didClickItem;
    CDUnknownBlockType _didShowStatusTypes;
}

@property(nonatomic) _Bool autoAdjustVerticalScale; // @synthesize autoAdjustVerticalScale=_autoAdjustVerticalScale;
@property(nonatomic) _Bool shouldScrollToLast; // @synthesize shouldScrollToLast=_shouldScrollToLast;
@property(nonatomic) _Bool shouldScrollToday; // @synthesize shouldScrollToday=_shouldScrollToday;
@property(copy, nonatomic) CDUnknownBlockType didShowStatusTypes; // @synthesize didShowStatusTypes=_didShowStatusTypes;
@property(copy, nonatomic) CDUnknownBlockType didClickItem; // @synthesize didClickItem=_didClickItem;
@property(copy, nonatomic) CDUnknownBlockType didSelectedItem; // @synthesize didSelectedItem=_didSelectedItem;
- (void).cxx_destruct;
- (id)copy;
- (void)selectToShowItem:(id)arg1;
- (void)scrollToShowItem:(id)arg1 animated:(_Bool)arg2;
- (void)disableShowActionButton;
- (void)refreshView;
- (void)startLoading;
- (void)fillColorsWithShowItem:(id)arg1;
- (id)stringForTodayStatusType:(long long)arg1;
@property(nonatomic) _Bool needRefresh;
@property(readonly, nonatomic) IMYAnalyzeLineChartView *chartView;
@property(readonly, nonatomic) UIView *view;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

