//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IMYTLViewController.h"

@class UINavigationBar, UIView, UIViewController;

@interface IMYTLOwnNavigationBarVC : IMYTLViewController
{
    UIViewController *_rootViewController;
    UINavigationBar *_innerNavigationBar;
    UIView *_containerView;
}

@property(nonatomic) __weak UIView *containerView; // @synthesize containerView=_containerView;
@property(nonatomic) __weak UINavigationBar *innerNavigationBar; // @synthesize innerNavigationBar=_innerNavigationBar;
@property(retain, nonatomic) UIViewController *rootViewController; // @synthesize rootViewController=_rootViewController;
- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (void)dealloc;

@end
