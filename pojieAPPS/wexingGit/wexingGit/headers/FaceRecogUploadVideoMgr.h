//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMService.h"

#import "FaceRecogUploadLogicDelegate-Protocol.h"
#import "MMService-Protocol.h"

@class NSMutableDictionary, NSString;

@interface FaceRecogUploadVideoMgr : MMService <FaceRecogUploadLogicDelegate, MMService>
{
    NSMutableDictionary *m_dicLogic;
}

- (void).cxx_destruct;
- (void)onUploadFaceVideoFinish:(id)arg1;
- (void)addUploadLogic:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

