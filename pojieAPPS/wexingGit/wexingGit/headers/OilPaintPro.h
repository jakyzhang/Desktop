//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CPUImageFilter.h"

@class NewOilPaint, UIImage;
@protocol oilPaintProDelegate;

@interface OilPaintPro : CPUImageFilter
{
    int _flag;
    _Bool _isPortrait;
    int step;
    int edge;
    NewOilPaint *oilPaint;
    _Bool _bigImageStopProcessFlag;
    _Bool _isBigImageProcess;
    UIImage *_oilPaintImage;
    id <oilPaintProDelegate> _BigImageDelegate;
}

@property(nonatomic) id <oilPaintProDelegate> BigImageDelegate; // @synthesize BigImageDelegate=_BigImageDelegate;
@property(nonatomic) _Bool isBigImageProcess; // @synthesize isBigImageProcess=_isBigImageProcess;
@property(retain, nonatomic) UIImage *oilPaintImage; // @synthesize oilPaintImage=_oilPaintImage;
- (void).cxx_destruct;
- (void)setProperty:(id)arg1 value:(id)arg2;
- (id)main;
- (id)HSVadjust;
- (id)OilPaintRePainting;
- (id)OilPaintPainting;
- (id)PreOilPaint:(id)arg1 radius:(int)arg2;
- (void)addWithTexture:(struct _Image *)arg1 andFlag:(_Bool)arg2;
- (void)setProcessStop;
- (void)dealloc;
- (id)initWithFlag:(int)arg1 andDelegate:(id)arg2 isPortrait:(_Bool)arg3;

@end

