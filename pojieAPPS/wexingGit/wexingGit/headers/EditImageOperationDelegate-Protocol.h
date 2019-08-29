//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class UIScrollView, UIView;

@protocol EditImageOperationDelegate <NSObject>
- (void)dragaAndDropWidget;
- (void)editImageViewdidEndDraw;
- (void)editImageViewDidStartDraw;

@optional
- (_Bool)scrollViewDidEndZooming:(UIScrollView *)arg1 withView:(UIView *)arg2 atScale:(double)arg3;
- (void)scrollViewDidEndDecelerating:(UIScrollView *)arg1;
- (void)scrollViewDidEndDragging:(UIScrollView *)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(UIScrollView *)arg1;
- (_Bool)scrollViewDidZoom:(UIScrollView *)arg1;
- (_Bool)isZooming;
@end

