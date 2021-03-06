//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "MRTDigitalKeyAcceptance-Protocol.h"
#import "MRTTextContentViewControllerDelegate-Protocol.h"

@class MRTBluetoothManager, MRTDigitalKeyFlowController, MRTRoomInformation, MRTStyledButton, MRTStyledLabel, NSString, NSTimer, UIButton, UIImageView, UIView;
@protocol MRTDigitalKeyInterface;

@interface MRTDigitalKeyViewController : UIViewController <MRTTextContentViewControllerDelegate, MRTDigitalKeyAcceptance>
{
    int _digitalKeyMode;
    MRTDigitalKeyFlowController *_digitalKeyFlowController;
    MRTRoomInformation *_roomInformation;
    MRTStyledLabel *_roomNumber;
    MRTStyledButton *_roomDirections;
    MRTStyledLabel *_mainInfoLabel;
    MRTStyledLabel *_secondaryInfoLabel;
    MRTStyledLabel *_remainingKeysLabel;
    MRTStyledButton *_surveyButton;
    UIView *_mainActionContainer;
    UIView *_mobileKeyView;
    UIView *_ellipsisView;
    UIImageView *_burstImageView;
    UIImageView *_mainButtonIcon;
    UIImageView *_mainButtonIconWave1;
    UIImageView *_mainButtonIconWave2;
    UIImageView *_mainButtonIconWave3;
    MRTStyledLabel *_keyUsageLabel;
    UIButton *_mainButton;
    UIView *_addToSiriButton;
    NSTimer *_ellipsisTimer;
    NSTimer *_mobileKeyWaveTimer;
    MRTBluetoothManager *_bleManager;
    id <MRTDigitalKeyInterface> _digitalKeyController;
    long long _currentState;
    MRTStyledLabel *_ellipsis1Label;
    MRTStyledLabel *_ellipsis2Label;
    MRTStyledLabel *_ellipsis3Label;
}

@property(nonatomic) __weak MRTStyledLabel *ellipsis3Label; // @synthesize ellipsis3Label=_ellipsis3Label;
@property(nonatomic) __weak MRTStyledLabel *ellipsis2Label; // @synthesize ellipsis2Label=_ellipsis2Label;
@property(nonatomic) __weak MRTStyledLabel *ellipsis1Label; // @synthesize ellipsis1Label=_ellipsis1Label;
@property(nonatomic) long long currentState; // @synthesize currentState=_currentState;
@property(retain, nonatomic) id <MRTDigitalKeyInterface> digitalKeyController; // @synthesize digitalKeyController=_digitalKeyController;
@property(retain, nonatomic) MRTBluetoothManager *bleManager; // @synthesize bleManager=_bleManager;
@property(nonatomic) __weak NSTimer *mobileKeyWaveTimer; // @synthesize mobileKeyWaveTimer=_mobileKeyWaveTimer;
@property(nonatomic) __weak NSTimer *ellipsisTimer; // @synthesize ellipsisTimer=_ellipsisTimer;
@property(nonatomic) __weak UIView *addToSiriButton; // @synthesize addToSiriButton=_addToSiriButton;
@property(nonatomic) __weak UIButton *mainButton; // @synthesize mainButton=_mainButton;
@property(nonatomic) __weak MRTStyledLabel *keyUsageLabel; // @synthesize keyUsageLabel=_keyUsageLabel;
@property(nonatomic) __weak UIImageView *mainButtonIconWave3; // @synthesize mainButtonIconWave3=_mainButtonIconWave3;
@property(nonatomic) __weak UIImageView *mainButtonIconWave2; // @synthesize mainButtonIconWave2=_mainButtonIconWave2;
@property(nonatomic) __weak UIImageView *mainButtonIconWave1; // @synthesize mainButtonIconWave1=_mainButtonIconWave1;
@property(nonatomic) __weak UIImageView *mainButtonIcon; // @synthesize mainButtonIcon=_mainButtonIcon;
@property(nonatomic) __weak UIImageView *burstImageView; // @synthesize burstImageView=_burstImageView;
@property(nonatomic) __weak UIView *ellipsisView; // @synthesize ellipsisView=_ellipsisView;
@property(nonatomic) __weak UIView *mobileKeyView; // @synthesize mobileKeyView=_mobileKeyView;
@property(nonatomic) __weak UIView *mainActionContainer; // @synthesize mainActionContainer=_mainActionContainer;
@property(nonatomic) __weak MRTStyledButton *surveyButton; // @synthesize surveyButton=_surveyButton;
@property(nonatomic) __weak MRTStyledLabel *remainingKeysLabel; // @synthesize remainingKeysLabel=_remainingKeysLabel;
@property(nonatomic) __weak MRTStyledLabel *secondaryInfoLabel; // @synthesize secondaryInfoLabel=_secondaryInfoLabel;
@property(nonatomic) __weak MRTStyledLabel *mainInfoLabel; // @synthesize mainInfoLabel=_mainInfoLabel;
@property(nonatomic) __weak MRTStyledButton *roomDirections; // @synthesize roomDirections=_roomDirections;
@property(nonatomic) __weak MRTStyledLabel *roomNumber; // @synthesize roomNumber=_roomNumber;
@property(nonatomic) int digitalKeyMode; // @synthesize digitalKeyMode=_digitalKeyMode;
@property(retain, nonatomic) MRTRoomInformation *roomInformation; // @synthesize roomInformation=_roomInformation;
@property(retain, nonatomic) MRTDigitalKeyFlowController *digitalKeyFlowController; // @synthesize digitalKeyFlowController=_digitalKeyFlowController;
- (void).cxx_destruct;
- (id)generalDismissButtonTitle;
- (id)keyVerificationFailedMessage;
- (id)keyVerificationFailedTitle;
- (id)bluetoothErrorDismissButtonTitle;
- (id)bluetoothErrorMessage;
- (id)bluetoothErrorTitle;
- (void)trackAddToSiri;
- (void)presentKeyVerificationFailedMessage;
- (void)presentBluetoothErrorMessage;
- (void)sizeMainButton:(id)arg1;
- (void)setShouldShowProperties:(_Bool)arg1;
- (void)performMobileKeyWaveAnimation;
- (void)performEllipsisAnimation;
- (void)mobileKeyRippleAnimation;
- (void)removeAnimations:(id)arg1;
- (void)clearAnimation;
- (void)setUpAnimation:(id)arg1;
- (void)animateSunbursts;
- (void)applySuccessAnimation;
- (void)applyFailAnimation;
- (void)applyUnlockingAnimation:(id)arg1;
- (void)textContentViewControllerDidDismiss:(id)arg1;
- (void)donateSiriShortcut;
- (void)addSiriShortcutButton;
- (_Bool)isScreenLargeEnoughForSiriShortcutButton;
- (void)navigateToPath:(id)arg1;
- (void)initiateUnlock;
- (void)changeAnimationState:(id)arg1;
- (_Bool)shouldShowSurveyButtonForState:(id)arg1;
- (id)surveyButtonTitle;
- (id)keyUsageText;
- (void)setupMainScreen;
- (void)setStateProps:(id)arg1 animated:(_Bool)arg2;
- (void)renderMainButton;
- (void)moveToState:(id)arg1 animated:(_Bool)arg2;
- (void)roomDirectionsTapped:(id)arg1;
- (void)surveyButtonTapped:(id)arg1;
- (void)mainActionTapped:(id)arg1;
- (void)scanTimedOut;
- (void)loadDigitalKeyController:(int)arg1;
- (void)learnMoreButtonTapped:(id)arg1;
- (id)contextButtonItems;
- (void)updateRemainingKeysCount;
- (long long)remainingKeys;
- (void)callProperty;
- (id)appNavigationIdentifier;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(copy, nonatomic) CDUnknownBlockType didFinishBlock;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) CDUnknownBlockType shouldFinishBlock;
@property(readonly) Class superclass;

@end

