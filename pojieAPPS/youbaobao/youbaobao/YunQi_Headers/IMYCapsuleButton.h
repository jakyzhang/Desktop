//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IMYButton.h"

@interface IMYCapsuleButton : IMYButton
{
    _Bool _makeBorder;
    double _lineWidth;
}

@property(nonatomic) _Bool makeBorder; // @synthesize makeBorder=_makeBorder;
@property(nonatomic) double lineWidth; // @synthesize lineWidth=_lineWidth;
- (void)setupBackgroundImageForState:(unsigned long long)arg1 cap:(unsigned long long)arg2 borderColor:(id)arg3 contentColor:(id)arg4 cornerRadius:(double)arg5 lineWidth:(double)arg6;
- (void)imy_layoutStyle;
- (void)_initMyself;

@end

