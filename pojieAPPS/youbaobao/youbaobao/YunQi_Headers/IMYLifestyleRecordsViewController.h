//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IMYPublicBaseViewController.h"

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class IMYActionTab, NSArray, NSString, UILabel, UITableView, UIView;

@interface IMYLifestyleRecordsViewController : IMYPublicBaseViewController <UITableViewDelegate, UITableViewDataSource>
{
    UIView *_navHeader;
    IMYActionTab *_segmentView;
    UITableView *_tableView;
    UIView *_viewForHeaderInSection;
    UILabel *_sectionViewLeftLabel;
    UILabel *_sectionViewCenterLabel;
    UILabel *_sectionViewRightLabel;
    NSArray *_allSleepData;
    NSArray *_allStepsData;
    NSArray *_allHabitsData;
    NSArray *_allHabitsModelData;
    NSArray *_currentData;
}

+ (id)allHabitsRecords;
+ (id)allStepsRecords;
+ (id)allSleepsRecords;
+ (id)showDateFormatter;
@property(retain, nonatomic) NSArray *currentData; // @synthesize currentData=_currentData;
@property(retain, nonatomic) NSArray *allHabitsModelData; // @synthesize allHabitsModelData=_allHabitsModelData;
@property(retain, nonatomic) NSArray *allHabitsData; // @synthesize allHabitsData=_allHabitsData;
@property(retain, nonatomic) NSArray *allStepsData; // @synthesize allStepsData=_allStepsData;
@property(retain, nonatomic) NSArray *allSleepData; // @synthesize allSleepData=_allSleepData;
@property(retain, nonatomic) UILabel *sectionViewRightLabel; // @synthesize sectionViewRightLabel=_sectionViewRightLabel;
@property(retain, nonatomic) UILabel *sectionViewCenterLabel; // @synthesize sectionViewCenterLabel=_sectionViewCenterLabel;
@property(retain, nonatomic) UILabel *sectionViewLeftLabel; // @synthesize sectionViewLeftLabel=_sectionViewLeftLabel;
@property(retain, nonatomic) UIView *viewForHeaderInSection; // @synthesize viewForHeaderInSection=_viewForHeaderInSection;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) IMYActionTab *segmentView; // @synthesize segmentView=_segmentView;
@property(retain, nonatomic) UIView *navHeader; // @synthesize navHeader=_navHeader;
- (void).cxx_destruct;
- (id)setupAllHabitsModelData:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)adjustHeaderInSection;
- (id)sectionlabel;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

