//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UINavigationController.h>

@class NIMRecentSession;

@interface NTESSessionPeekNavigationViewController : UINavigationController
{
    NIMRecentSession *_recent;
}

+ (id)instance:(id)arg1;
@property(retain, nonatomic) NIMRecentSession *recent; // @synthesize recent=_recent;
- (void).cxx_destruct;
- (id)findRecentSession;
- (id)previewActionItems;
- (void)viewDidLoad;
- (id)initWithRootViewController:(id)arg1;

@end

