//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface IMYWebTemplateMap : NSObject
{
    NSString *_fileName;
    NSString *_reg;
    NSString *_src;
    NSString *_version;
    NSMutableArray *_completedBlocks;
}

@property(retain, nonatomic) NSMutableArray *completedBlocks; // @synthesize completedBlocks=_completedBlocks;
@property(copy, nonatomic) NSString *version; // @synthesize version=_version;
@property(copy, nonatomic) NSString *src; // @synthesize src=_src;
@property(copy, nonatomic) NSString *reg; // @synthesize reg=_reg;
@property(readonly, nonatomic) NSString *fileName; // @synthesize fileName=_fileName;
- (void).cxx_destruct;
- (void)fullCompleted;

@end
