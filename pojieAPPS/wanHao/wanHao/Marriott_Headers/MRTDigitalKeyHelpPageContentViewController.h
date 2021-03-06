//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class MRTPlayerView, MRTRoomInformation, MRTStyledButton, MRTStyledLabel, NSString, UIScrollView;
@protocol MRTDigitalKeyHelpPageContentDelegate;

@interface MRTDigitalKeyHelpPageContentViewController : UIViewController
{
    id <MRTDigitalKeyHelpPageContentDelegate> _delegate;
    unsigned long long _pageIndex;
    NSString *_titleText;
    NSString *_messageText;
    NSString *_videoFileName;
    MRTRoomInformation *_roomInformation;
    unsigned long long _mode;
    UIScrollView *_scrollView;
    MRTStyledButton *_notNowButton;
    MRTStyledButton *_actionButton;
    MRTStyledLabel *_dateRangeLabel;
    MRTStyledLabel *_propertyNameLabel;
    MRTStyledLabel *_titleLabel;
    MRTStyledLabel *_messageLabel;
    MRTPlayerView *_playerView;
}

@property(nonatomic) __weak MRTPlayerView *playerView; // @synthesize playerView=_playerView;
@property(nonatomic) __weak MRTStyledLabel *messageLabel; // @synthesize messageLabel=_messageLabel;
@property(nonatomic) __weak MRTStyledLabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak MRTStyledLabel *propertyNameLabel; // @synthesize propertyNameLabel=_propertyNameLabel;
@property(nonatomic) __weak MRTStyledLabel *dateRangeLabel; // @synthesize dateRangeLabel=_dateRangeLabel;
@property(nonatomic) __weak MRTStyledButton *actionButton; // @synthesize actionButton=_actionButton;
@property(nonatomic) __weak MRTStyledButton *notNowButton; // @synthesize notNowButton=_notNowButton;
@property(nonatomic) __weak UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(nonatomic) unsigned long long mode; // @synthesize mode=_mode;
@property(retain, nonatomic) MRTRoomInformation *roomInformation; // @synthesize roomInformation=_roomInformation;
@property(copy, nonatomic) NSString *videoFileName; // @synthesize videoFileName=_videoFileName;
@property(copy, nonatomic) NSString *messageText; // @synthesize messageText=_messageText;
@property(copy, nonatomic) NSString *titleText; // @synthesize titleText=_titleText;
@property(nonatomic) unsigned long long pageIndex; // @synthesize pageIndex=_pageIndex;
@property(nonatomic) __weak id <MRTDigitalKeyHelpPageContentDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)notNowButtonTitle;
- (_Bool)shouldHideNotNowButton;
- (id)actionButtonTitle;
- (unsigned long long)actionResultType;
- (void)playerItemDidReachEnd:(id)arg1;
- (void)stopVideo;
- (void)playVideo;
- (void)configureVideo;
- (void)flashScrollIndicators;
- (void)notNowButtonTapped:(id)arg1;
- (void)actionButtonTapped:(id)arg1;
- (void)oneButtonOverlayLayoutMarginsDidChange:(struct UIEdgeInsets)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;

@end

