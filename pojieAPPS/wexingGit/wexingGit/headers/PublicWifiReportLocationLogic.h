//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "LocationRetrieveDelegate-Protocol.h"
#import "PBMessageObserverDelegate-Protocol.h"

@class APBase, CContact, LocationRetriever, NSDate, NSString;
@protocol PublicWifiReportLocationLogicDelegate;

@interface PublicWifiReportLocationLogic : NSObject <PBMessageObserverDelegate, LocationRetrieveDelegate>
{
    unsigned int m_eventID;
    LocationRetriever *m_locationRetriever;
    CContact *m_contact;
    NSDate *m_lastReportTime;
    int m_channel;
    unsigned long long m_state;
    APBase *m_currAPBase;
    id <PublicWifiReportLocationLogicDelegate> _delegate;
}

@property(nonatomic) __weak id <PublicWifiReportLocationLogicDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)onRetrieveLocationTimeOut:(id)arg1;
- (void)onRetrieveLocationOK:(id)arg1;
- (void)onRetrieveLocationError:(int)arg1;
- (void)reportAPLocationWithLocation:(id)arg1;
- (void)reportLocationWithLocation:(id)arg1;
- (void)stopReportLocation;
- (void)didFail;
- (void)startReportApLocationForApbase:(id)arg1;
- (void)startReportLocationForContact:(id)arg1 channel:(int)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

