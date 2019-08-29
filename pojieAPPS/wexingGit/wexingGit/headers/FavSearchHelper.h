//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "IFavLocationMgrExt-Protocol.h"

@class NSMutableArray, NSString;
@protocol FavSearchHelperDelegate;

@interface FavSearchHelper : MMObject <IFavLocationMgrExt>
{
    unsigned int _currentEventID;
    id <FavSearchHelperDelegate> _delegate;
    NSMutableArray *_arrLocItem;
}

+ (id)convertFavDataToSimpleInfo:(id)arg1 inItem:(id)arg2;
+ (void)aggregatePicSearchResultInRecordData:(id)arg1 toArray:(id)arg2 fromFavItem:(id)arg3 totalSize:(int *)arg4;
+ (id)aggregatePicSearchResult:(id)arg1;
+ (void)aggregateRecordData:(id)arg1 fromFavItem:(id)arg2 toArray:(id)arg3 withSearchType:(unsigned int)arg4 withLocalId:(int *)arg5;
+ (id)aggregateSearchResult:(id)arg1 withSearchText:(id)arg2 withSearchType:(unsigned int)arg3 withTagList:(id)arg4;
+ (void)filterSearchResult:(id)arg1 withSearchText:(id)arg2 withSearchType:(unsigned int)arg3 withTagList:(id)arg4;
+ (void)preFilterFileSearchResult:(id)arg1 withSearchType:(unsigned int)arg2;
@property(retain, nonatomic) NSMutableArray *arrLocItem; // @synthesize arrLocItem=_arrLocItem;
@property(nonatomic) unsigned int currentEventID; // @synthesize currentEventID=_currentEventID;
@property(nonatomic) __weak id <FavSearchHelperDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)onFindFavAddress:(id)arg1 eventID:(unsigned int)arg2;
- (void)requestAddressFromLocation:(id)arg1;
- (void)getAddressInQueue;
- (void)getFavItemsAddress:(id)arg1;
- (void)getAddressWithLocation:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

