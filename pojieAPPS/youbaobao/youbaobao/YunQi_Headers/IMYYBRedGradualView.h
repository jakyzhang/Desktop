//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "IMY_ThemeChangeProtocol-Protocol.h"

@class CALayer, NSString;

@interface IMYYBRedGradualView : UIView <IMY_ThemeChangeProtocol>
{
    CALayer *_maskLayer;
}

@property(retain, nonatomic) CALayer *maskLayer; // @synthesize maskLayer=_maskLayer;
- (void).cxx_destruct;
- (void)setBounds:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)imy_themeChanged;
- (void)_initMyself;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
