//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class HFUIImage, UIImage;

@interface HFAlgorithmHandle : NSObject
{
    HFUIImage *inputImage;
    HFUIImage *resultImage;
}

- (void).cxx_destruct;
- (id)resultImage;
- (void)process;
@property(retain, nonatomic) UIImage *image;

@end

