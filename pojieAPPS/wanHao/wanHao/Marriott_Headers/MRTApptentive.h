//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface MRTApptentive : NSObject
{
}

+ (id)parametersForRoomInformation:(id)arg1;
+ (id)parametersForReservation:(id)arg1;
+ (id)parametersForUser;
+ (void)displayedMyAccount;
+ (void)presentMobileKeyFeedbackSurveyWithRoomInformation:(id)arg1 fromViewController:(id)arg2;
+ (void)downloadedMobileKeyForReservation:(id)arg1;
+ (void)checkinWithMobileKeyOptInForReservation:(id)arg1;
+ (void)digitalKeyDownloaded;
+ (void)digitalKeyReadyToDownload;
+ (void)storeUserParameters:(id)arg1;
+ (void)applicationDidLaunchToViewController:(id)arg1;
+ (void)mobileDiningClicked;
+ (void)continueCancellingReservation:(id)arg1;
+ (void)returnedFromCallCustomerService:(id)arg1;
+ (void)callCustomerServiceClicked;
+ (void)returnedFromAccountDetail:(id)arg1;
+ (void)accountDetailClicked;
+ (void)returnedFromWalletButton:(id)arg1;
+ (void)walletButtonClicked;
+ (void)confirmedCheckOut:(id)arg1;
+ (void)confirmedReservation:(id)arg1;
+ (void)engage:(id)arg1 withParameters:(id)arg2 fromViewController:(id)arg3;
+ (void)engage:(id)arg1 fromViewController:(id)arg2;
+ (void)resetPersonDataWithParams:(id)arg1;
+ (_Bool)isApptentiveEnabled;
+ (void)checkApptentiveRegistered:(id)arg1;
+ (void)registerIfNeeded;
+ (id)returnedToHomeScreenString;
+ (void)load;

@end
