//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSIndexPath, NSString, UIView, UIViewController;

@interface IMYUTBindingData : NSObject
{
    UIViewController *_viewController;
    NSString *_pageName;
    UIViewController *_insideVC;
    NSString *_index;
    NSIndexPath *_cellIndexPath;
    long long _isBinding;
    NSString *_guessMaxText;
    UIView *_superView;
    UIView *_view;
}

@property(readonly, nonatomic) __weak UIView *view; // @synthesize view=_view;
@property(nonatomic) __weak UIView *superView; // @synthesize superView=_superView;
@property(copy, nonatomic) NSString *guessMaxText; // @synthesize guessMaxText=_guessMaxText;
@property(nonatomic) long long isBinding; // @synthesize isBinding=_isBinding;
@property(copy, nonatomic) NSIndexPath *cellIndexPath; // @synthesize cellIndexPath=_cellIndexPath;
@property(copy, nonatomic) NSString *index; // @synthesize index=_index;
- (void).cxx_destruct;
- (id)description;
@property(readonly, copy, nonatomic) NSString *pageName; // @synthesize pageName=_pageName;
@property(readonly, nonatomic) __weak UIViewController *insideVC; // @synthesize insideVC=_insideVC;
@property(readonly, nonatomic) __weak UIViewController *viewController; // @synthesize viewController=_viewController;
- (id)initWithView:(id)arg1;

@end

