//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "UIViewControllerTransitioningDelegate-Protocol.h"

@class NSString, UINavigationController;
@protocol WAAppTansitionControllerDelegate;

@interface WAAppTansitionController : NSObject <UIViewControllerTransitioningDelegate>
{
    _Bool _isSimulatedNativeAnimation;
    _Bool _isInForceDismissAndPresentAnimationOnce;
    UINavigationController *_owerNav;
    id <WAAppTansitionControllerDelegate> _delegate;
    long long _simulatedNativeAnimationType;
    struct CGRect _simulatedNativeAnimationScreenRect;
}

@property(nonatomic) _Bool isInForceDismissAndPresentAnimationOnce; // @synthesize isInForceDismissAndPresentAnimationOnce=_isInForceDismissAndPresentAnimationOnce;
@property(nonatomic) struct CGRect simulatedNativeAnimationScreenRect; // @synthesize simulatedNativeAnimationScreenRect=_simulatedNativeAnimationScreenRect;
@property(nonatomic) long long simulatedNativeAnimationType; // @synthesize simulatedNativeAnimationType=_simulatedNativeAnimationType;
@property(nonatomic) _Bool isSimulatedNativeAnimation; // @synthesize isSimulatedNativeAnimation=_isSimulatedNativeAnimation;
@property(nonatomic) __weak id <WAAppTansitionControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak UINavigationController *owerNav; // @synthesize owerNav=_owerNav;
- (void).cxx_destruct;
- (void)markForceDissmissAndPresentAnimationOnce;
- (id)presentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3;
- (id)interactionControllerForDismissal:(id)arg1;
- (id)interactionControllerForPresentation:(id)arg1;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

