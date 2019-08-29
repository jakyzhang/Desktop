//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "PBMessageObserverDelegate-Protocol.h"

@class NSData, NSMutableArray;
@protocol StoreEmotionRecoverMyPanelListCgiDelegate;

@interface StoreEmotionRecoverMyPanelListCgi : MMObject <PBMessageObserverDelegate>
{
    int _scene;
    unsigned int _m_eventId;
    id <StoreEmotionRecoverMyPanelListCgiDelegate> _delegate;
    NSData *_currReqBuf;
    NSMutableArray *_emotionsArray;
}

@property(retain, nonatomic) NSMutableArray *emotionsArray; // @synthesize emotionsArray=_emotionsArray;
@property(retain, nonatomic) NSData *currReqBuf; // @synthesize currReqBuf=_currReqBuf;
@property(nonatomic) unsigned int m_eventId; // @synthesize m_eventId=_m_eventId;
@property(nonatomic) __weak id <StoreEmotionRecoverMyPanelListCgiDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) int scene; // @synthesize scene=_scene;
- (void).cxx_destruct;
- (void)callFailedDelegate;
- (void)callOKDelegateWithPids:(id)arg1;
- (void)OnGetEmoticonPanelList:(id)arg1;
- (void)startInternalRequest;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (_Bool)isActive;
- (void)startRequest;
- (id)initWithDelegate:(id)arg1;

@end

