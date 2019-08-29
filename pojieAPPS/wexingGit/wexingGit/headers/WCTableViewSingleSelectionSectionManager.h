//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCTableViewSectionManager.h"

@protocol WCTableViewSingleSelectionSectionManagerDelegate;

@interface WCTableViewSingleSelectionSectionManager : WCTableViewSectionManager
{
    id <WCTableViewSingleSelectionSectionManagerDelegate> _delegate;
    long long _selectedIndex;
}

@property(nonatomic) long long selectedIndex; // @synthesize selectedIndex=_selectedIndex;
@property(nonatomic) __weak id <WCTableViewSingleSelectionSectionManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)reloadCells:(id)arg1;
- (void)didBeClickedAt:(id)arg1;
- (id)init;
- (void)addSelectionCell:(id)arg1;

@end

