//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TTQTopicBaseCell.h"

@class TTQVideoImageView;

@interface TTQTopicVideoCell : TTQTopicBaseCell
{
    TTQVideoImageView *_thumbImageView;
}

@property(retain, nonatomic) TTQVideoImageView *thumbImageView; // @synthesize thumbImageView=_thumbImageView;
- (void).cxx_destruct;
- (void)configurationForPrepare:(id)arg1 configuration:(id)arg2 cellForRowAtIndexPath:(id)arg3 viewModel:(id)arg4;
- (void)setupExtraContentView:(id)arg1 cellForRowAtIndexPath:(id)arg2 viewModel:(id)arg3;
- (id)extraContentView:(id)arg1 cellForRowAtIndexPath:(id)arg2 viewModel:(id)arg3;

@end
