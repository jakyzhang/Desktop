//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "MRTStyledTextFieldDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"

@class MRTReservationSearchParams, MRTStyledTextField, NSString, UIButton, UIDatePicker, UILabel, UIScrollView, UIStackView, UIView;

@interface MRTFindReservationViewController : UIViewController <MRTStyledTextFieldDelegate, UIScrollViewDelegate>
{
    _Bool _attachMode;
    _Bool _isScrollViewTopAnchored;
    MRTReservationSearchParams *_params;
    UIScrollView *_scrollView;
    UIView *_contentView;
    UIStackView *_nameStackView;
    UIView *_firstNameGroup;
    UILabel *_firstNameLabel;
    MRTStyledTextField *_firstNameField;
    UIView *_lastNameGroup;
    UILabel *_lastNameLabel;
    MRTStyledTextField *_lastNameField;
    UILabel *_confirmationLabel;
    MRTStyledTextField *_confirmationField;
    UILabel *_dateLabel;
    UIDatePicker *_datePickerView;
    MRTStyledTextField *_dateField;
    UIView *_errorView;
    UILabel *_errorMessageLabel;
    UIButton *_errorTryAgainButton;
    unsigned long long _errorAttempts;
}

@property(nonatomic) unsigned long long errorAttempts; // @synthesize errorAttempts=_errorAttempts;
@property(retain, nonatomic) UIButton *errorTryAgainButton; // @synthesize errorTryAgainButton=_errorTryAgainButton;
@property(retain, nonatomic) UILabel *errorMessageLabel; // @synthesize errorMessageLabel=_errorMessageLabel;
@property(retain, nonatomic) UIView *errorView; // @synthesize errorView=_errorView;
@property(retain, nonatomic) MRTStyledTextField *dateField; // @synthesize dateField=_dateField;
@property(retain, nonatomic) UIDatePicker *datePickerView; // @synthesize datePickerView=_datePickerView;
@property(retain, nonatomic) UILabel *dateLabel; // @synthesize dateLabel=_dateLabel;
@property(retain, nonatomic) MRTStyledTextField *confirmationField; // @synthesize confirmationField=_confirmationField;
@property(retain, nonatomic) UILabel *confirmationLabel; // @synthesize confirmationLabel=_confirmationLabel;
@property(retain, nonatomic) MRTStyledTextField *lastNameField; // @synthesize lastNameField=_lastNameField;
@property(retain, nonatomic) UILabel *lastNameLabel; // @synthesize lastNameLabel=_lastNameLabel;
@property(retain, nonatomic) UIView *lastNameGroup; // @synthesize lastNameGroup=_lastNameGroup;
@property(retain, nonatomic) MRTStyledTextField *firstNameField; // @synthesize firstNameField=_firstNameField;
@property(retain, nonatomic) UILabel *firstNameLabel; // @synthesize firstNameLabel=_firstNameLabel;
@property(retain, nonatomic) UIView *firstNameGroup; // @synthesize firstNameGroup=_firstNameGroup;
@property(retain, nonatomic) UIStackView *nameStackView; // @synthesize nameStackView=_nameStackView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(nonatomic) _Bool isScrollViewTopAnchored; // @synthesize isScrollViewTopAnchored=_isScrollViewTopAnchored;
@property(nonatomic) _Bool attachMode; // @synthesize attachMode=_attachMode;
@property(retain, nonatomic) MRTReservationSearchParams *params; // @synthesize params=_params;
- (void).cxx_destruct;
- (id)reservationNotFoundMultipleAttemptsTitle;
- (id)reservationNotFoundRecentlyCancelledText;
- (id)reservationNotFoundFirstAttemptTitle;
- (id)consumer;
- (void)updateModel;
- (void)initializeModel;
- (void)dismissController:(id)arg1;
- (void)findReservation:(id)arg1;
- (void)endEditing:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)textField:(id)arg1 didSetObjectValue:(id)arg2;
- (void)updateButton;
- (void)updateUIElements;
- (_Bool)findEnabled;
- (void)oneButtonOverlayLayoutMarginsWillChange:(struct UIEdgeInsets)arg1;
- (void)setupUI;
- (void)setupScrollViewAnchor;
- (void)setupLocalization;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

