//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IMYVKWebViewController.h"

@class YBBChangeModeShareItem;

@interface YBBHomeChangeModeShareVC : IMYVKWebViewController
{
    long long _mode;
    YBBChangeModeShareItem *_shareItem;
}

+ (id)doCipher:(id)arg1 key:(id)arg2 context:(unsigned int)arg3;
+ (id)urlEncode:(id)arg1;
+ (id)encode:(id)arg1 key:(id)arg2;
@property(retain, nonatomic) YBBChangeModeShareItem *shareItem; // @synthesize shareItem=_shareItem;
@property(nonatomic) long long mode; // @synthesize mode=_mode;
- (void).cxx_destruct;
- (void)getUserUseDaysWithKey:(id)arg1;
- (void)topRightShareCustomAction:(id)arg1;
- (void)viewDidLoad;

@end
