//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "PBMessageObserverDelegate-Protocol.h"

@class NSMutableArray;
@protocol StoreEmotionUploadMyPanelListCgiDelegate;

@interface StoreEmotionUploadMyPanelListCgi : MMObject <PBMessageObserverDelegate>
{
    _Bool m_hasStartRequestOnce;
    _Bool m_ignoreLimit;
    unsigned int m_eventId;
    int _code;
    NSMutableArray *m_productIDList;
    id <StoreEmotionUploadMyPanelListCgiDelegate> m_delegate;
}

@property(nonatomic) int code; // @synthesize code=_code;
@property(nonatomic) _Bool m_ignoreLimit; // @synthesize m_ignoreLimit;
@property(nonatomic) _Bool m_hasStartRequestOnce; // @synthesize m_hasStartRequestOnce;
@property(nonatomic) unsigned int m_eventId; // @synthesize m_eventId;
@property(nonatomic) __weak id <StoreEmotionUploadMyPanelListCgiDelegate> m_delegate; // @synthesize m_delegate;
@property(retain, nonatomic) NSMutableArray *m_productIDList; // @synthesize m_productIDList;
- (void).cxx_destruct;
- (void)callOKDelegate;
- (void)callFailedDelegate;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)startSortedLogic;
- (void)startInternalRequest;
- (_Bool)isActive;
- (void)startRequest;
- (void)setNeedPids:(id)arg1;
- (id)initWithProductIDList:(id)arg1 delegate:(id)arg2;

@end

