//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIView.h"

@class MMCPLabel, MMHeadImageView, MainFrameCellData, UILabel;

@interface ChatRoomMemMsgListItemView : MMUIView
{
    MainFrameCellData *m_cellData;
    MMHeadImageView *m_frameHeadView;
    MMCPLabel *m_nameLabel;
    UILabel *m_timeLabel;
    UILabel *m_greenLabel;
    MMCPLabel *m_messageLabel;
}

- (void).cxx_destruct;
- (void)updateView:(id)arg1;
- (void)updateTimeLabel;
- (void)updateNameLabel;
- (void)updateMessageLabel;
- (void)initSubview;
- (id)init;

@end

