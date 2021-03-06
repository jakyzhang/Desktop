//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IMYBaseWaterFlowAdView.h"

@class IMYAdRNView, IMYAdVideoView, UIImageView, UITapGestureRecognizer;

@interface IMYWaterFlowAdView : IMYBaseWaterFlowAdView
{
    UIImageView *_imageView;
    IMYAdVideoView *_videoPlayerView;
    IMYAdRNView *_rnView;
    UITapGestureRecognizer *_tap;
}

+ (double)setupComonViewHeight:(id)arg1;
+ (double)setRNStyleHeightWithModel:(id)arg1;
+ (double)setImageStyleHeightWithModel:(id)arg1;
+ (double)heightWithModel:(id)arg1;
+ (void)load;
@property(retain, nonatomic) UITapGestureRecognizer *tap; // @synthesize tap=_tap;
@property(retain, nonatomic) IMYAdRNView *rnView; // @synthesize rnView=_rnView;
@property(retain, nonatomic) IMYAdVideoView *videoPlayerView; // @synthesize videoPlayerView=_videoPlayerView;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
- (void).cxx_destruct;
- (void)clickMyeVideo;
- (void)setupCommonView:(id)arg1;
- (void)setupRNStyleWithModel:(id)arg1;
- (void)setupLiveStyleWithModel:(id)arg1;
- (void)setupVideoStyleWithModel:(id)arg1;
- (void)setupImageStyleWithModel:(id)arg1;
- (void)layoutWithModel:(id)arg1;
- (id)videoView;
- (id)imageViews;
- (void)setPlaceholderImage;
- (void)setupSubviews;
- (void)dealloc;

@end

