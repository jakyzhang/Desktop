//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface ManualFaceLongLegHandle : NSObject
{
    struct _Image *internImage;
    struct ManualHandleBase *handle;
}

- (id)resultImage;
- (void)redo;
- (void)undo;
- (_Bool)canRedo;
- (_Bool)canUndo;
- (void)setMagValue:(float)arg1;
- (struct _NSRange)getRange;
- (void)setRange:(struct _NSRange)arg1;
- (void)dealloc;
- (id)initWithUIImage:(id)arg1;

@end

