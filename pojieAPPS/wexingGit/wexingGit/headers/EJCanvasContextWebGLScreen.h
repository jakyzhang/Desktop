//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "EJCanvasContextWebGL.h"

#import "EJPresentable-Protocol.h"

@class EAGLView, UIView;

@interface EJCanvasContextWebGLScreen : EJCanvasContextWebGL <EJPresentable>
{
    EAGLView *glview;
    struct CGRect style;
    _Bool needResumeUpdate;
}

@property(readonly, nonatomic) UIView *view; // @synthesize view=glview;
@property(nonatomic) struct CGRect style; // @synthesize style;
- (void)resumeUpdate;
- (id)texture;
- (void)present;
- (void)resetFramebuffer;
- (void)finish;
- (void)resizeToWidth:(short)arg1 height:(short)arg2;
- (struct CGRect)frame;
- (void)dealloc;

@end

