//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HFManualFaceHandle.h"

@class NSMutableArray;

@interface HFManualFacePathHandle : HFManualFaceHandle
{
    struct CGPoint topLeft;
    struct CGPoint rightBottom;
    struct _Image *pathImage;
    NSMutableArray *pathPoints;
}

- (void).cxx_destruct;
- (void)createPouchMaskImageWithBrushSize:(int)arg1;
- (struct _Rect)touchArea;
- (void)touchEndedAt:(struct CGPoint)arg1;
- (_Bool)touchMovedTo:(struct CGPoint)arg1;
- (void)touchBeganAt:(struct CGPoint)arg1;
- (void)setImage:(id)arg1;
- (void)dealloc;
- (id)init;

@end

