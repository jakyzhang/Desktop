//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UIImageView, UILabel;

@interface KMDataStatusView : UIView
{
    CDUnknownBlockType myRetryBlock;
    UIImageView *statusImage;
    UILabel *stateLabel;
    UIButton *btnRetry;
    long long _state;
    CDUnknownBlockType _retryBlcok;
}

@property(nonatomic) CDUnknownBlockType retryBlcok; // @synthesize retryBlcok=_retryBlcok;
@property(nonatomic) long long state; // @synthesize state=_state;
- (void).cxx_destruct;
- (void)btnRetry:(id)arg1;
- (void)hideImageView;
- (void)loadView;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

@end
