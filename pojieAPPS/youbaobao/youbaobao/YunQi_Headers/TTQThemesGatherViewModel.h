//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface TTQThemesGatherViewModel : NSObject
{
    NSArray *_recommendBodyItems;
    double _heightOfSection;
}

@property(nonatomic) double heightOfSection; // @synthesize heightOfSection=_heightOfSection;
@property(copy, nonatomic) NSArray *recommendBodyItems; // @synthesize recommendBodyItems=_recommendBodyItems;
- (void).cxx_destruct;
- (id)tableCellModelAtIndexPath:(id)arg1;
- (id)tableSectionModel:(long long)arg1;
- (long long)numberOfRowsInSection:(long long)arg1;
- (long long)numberOfSections;
- (id)httpBuilderWithLastID:(id)arg1 size:(id)arg2;
- (id)requestRemoteDataWithLastID:(id)arg1 size:(id)arg2 type:(long long)arg3 withCompletion:(CDUnknownBlockType)arg4;

@end
