//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IMYCellModel.h"

@class IMYNewsSingleCommentModel;

@interface IMYNewsStackCommentCellModel : IMYCellModel
{
    _Bool _isFirstStackComment;
    _Bool _isLastStackComment;
    IMYNewsSingleCommentModel *_singleCommentModel;
    double _contentHeight;
    long long _moreReplyCount;
    long long _mainCommentId;
    CDUnknownBlockType _onCellDidLongPressed;
    CDUnknownBlockType _onCellUserDidPressed;
    CDUnknownBlockType _onCellDidShowCommentDetail;
}

+ (id)globalResizeLabel;
+ (double)heightOfLabelText:(id)arg1 numberOfLine:(long long)arg2;
+ (id)cellModel:(id)arg1;
@property(copy, nonatomic) CDUnknownBlockType onCellDidShowCommentDetail; // @synthesize onCellDidShowCommentDetail=_onCellDidShowCommentDetail;
@property(copy, nonatomic) CDUnknownBlockType onCellUserDidPressed; // @synthesize onCellUserDidPressed=_onCellUserDidPressed;
@property(copy, nonatomic) CDUnknownBlockType onCellDidLongPressed; // @synthesize onCellDidLongPressed=_onCellDidLongPressed;
@property(nonatomic) long long mainCommentId; // @synthesize mainCommentId=_mainCommentId;
@property(nonatomic) long long moreReplyCount; // @synthesize moreReplyCount=_moreReplyCount;
@property(nonatomic) double contentHeight; // @synthesize contentHeight=_contentHeight;
@property(nonatomic) _Bool isLastStackComment; // @synthesize isLastStackComment=_isLastStackComment;
@property(nonatomic) _Bool isFirstStackComment; // @synthesize isFirstStackComment=_isFirstStackComment;
@property(retain, nonatomic) IMYNewsSingleCommentModel *singleCommentModel; // @synthesize singleCommentModel=_singleCommentModel;
- (void).cxx_destruct;
- (void)calculateCellHeight;
- (id)init;

@end
