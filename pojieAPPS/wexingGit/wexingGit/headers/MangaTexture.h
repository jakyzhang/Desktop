//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MultiFilterConnect.h"

@interface MangaTexture : MultiFilterConnect
{
    int flag;
    _Bool _bigImageFlag;
}

- (void)setTextureForEdge:(char *)arg1 withWidth:(int)arg2 andHeight:(int)arg3;
- (void)setParameter:(float)arg1;
- (void)setTextureForEdge:(id)arg1;
- (void)NewFilter;
- (id)initWithFlag:(int)arg1 andQuality:(int)arg2 andBigImageFlag:(_Bool)arg3;

@end

