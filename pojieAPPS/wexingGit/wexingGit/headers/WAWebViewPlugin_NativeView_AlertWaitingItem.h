//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

@class NSDictionary;
@protocol IWAWebViewPluginDelegate;

@interface WAWebViewPlugin_NativeView_AlertWaitingItem : MMObject
{
    NSDictionary *_param;
    id <IWAWebViewPluginDelegate> _delegate;
}

@property(nonatomic) __weak id <IWAWebViewPluginDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSDictionary *param; // @synthesize param=_param;
- (void).cxx_destruct;

@end

