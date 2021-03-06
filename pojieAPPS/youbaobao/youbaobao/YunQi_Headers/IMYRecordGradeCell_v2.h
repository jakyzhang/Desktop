//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IMYRecordCell_v2.h"

#import "IMY_ThemeChangeProtocol-Protocol.h"
#import "LKStarViewDelegate-Protocol.h"

@class IMYStarView, NSString;

@interface IMYRecordGradeCell_v2 : IMYRecordCell_v2 <LKStarViewDelegate, IMY_ThemeChangeProtocol>
{
    IMYStarView *_starView;
    NSString *_gradeImageName;
    NSString *_selectedGradeImageName;
}

@property(copy, nonatomic) NSString *selectedGradeImageName; // @synthesize selectedGradeImageName=_selectedGradeImageName;
@property(copy, nonatomic) NSString *gradeImageName; // @synthesize gradeImageName=_gradeImageName;
@property(retain, nonatomic) IMYStarView *starView; // @synthesize starView=_starView;
- (void).cxx_destruct;
- (void)reloadDisplay;
- (void)starView:(id)arg1 selectedDidChanged:(long long)arg2;
@property(nonatomic) long long selectedIndex;
- (void)setGradeImage:(id)arg1;
- (void)imy_themeChanged;
- (void)_initMyself;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

