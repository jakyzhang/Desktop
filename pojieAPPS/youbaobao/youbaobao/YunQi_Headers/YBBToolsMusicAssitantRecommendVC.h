//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IMYPublicBaseViewController.h"

@class IMYCaptionView, UITableView, YBBToolsMusicAssitantRecommendViewModel;

@interface YBBToolsMusicAssitantRecommendVC : IMYPublicBaseViewController
{
    UITableView *_tableView;
    YBBToolsMusicAssitantRecommendViewModel *_viewModel;
    IMYCaptionView *_captionView;
}

@property(retain, nonatomic) IMYCaptionView *captionView; // @synthesize captionView=_captionView;
@property(retain, nonatomic) YBBToolsMusicAssitantRecommendViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
- (void).cxx_destruct;
- (void)viewModelSubject;
- (void)requestData;
- (void)viewDidLoad;
- (void)dealloc;

@end

