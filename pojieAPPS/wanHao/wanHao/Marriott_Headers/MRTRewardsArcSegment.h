//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UIColor, UIView;

@interface MRTRewardsArcSegment : NSObject
{
    _Bool _isActive;
    double _startProgress;
    double _endProgress;
    double _endTickmarkProgress;
    double _currentProgress;
    double _tickmarkAngle;
    UIView *_parentView;
    double _radiusMultiplier;
    double _startAngle;
    double _endAngle;
    UIColor *_color;
    struct CGPoint _tickmarkPoint;
    struct CGPoint _outsideStartPoint;
    struct CGPoint _insideStartPoint;
    struct CGPoint _outsideStartControlPoint;
    struct CGPoint _insideStartControlPoint;
    struct CGPoint _outsideEndPoint;
    struct CGPoint _insideEndPoint;
    struct CGPoint _outsideEndControlPoint;
    struct CGPoint _insideEndControlPoint;
    struct CGRect _parentFrame;
}

@property(retain, nonatomic) UIColor *color; // @synthesize color=_color;
@property(nonatomic) double endAngle; // @synthesize endAngle=_endAngle;
@property(nonatomic) double startAngle; // @synthesize startAngle=_startAngle;
@property(nonatomic) double radiusMultiplier; // @synthesize radiusMultiplier=_radiusMultiplier;
@property(nonatomic) struct CGPoint insideEndControlPoint; // @synthesize insideEndControlPoint=_insideEndControlPoint;
@property(nonatomic) struct CGPoint outsideEndControlPoint; // @synthesize outsideEndControlPoint=_outsideEndControlPoint;
@property(nonatomic) struct CGPoint insideEndPoint; // @synthesize insideEndPoint=_insideEndPoint;
@property(nonatomic) struct CGPoint outsideEndPoint; // @synthesize outsideEndPoint=_outsideEndPoint;
@property(nonatomic) struct CGPoint insideStartControlPoint; // @synthesize insideStartControlPoint=_insideStartControlPoint;
@property(nonatomic) struct CGPoint outsideStartControlPoint; // @synthesize outsideStartControlPoint=_outsideStartControlPoint;
@property(nonatomic) struct CGPoint insideStartPoint; // @synthesize insideStartPoint=_insideStartPoint;
@property(nonatomic) struct CGPoint outsideStartPoint; // @synthesize outsideStartPoint=_outsideStartPoint;
@property(nonatomic) struct CGRect parentFrame; // @synthesize parentFrame=_parentFrame;
@property(nonatomic) __weak UIView *parentView; // @synthesize parentView=_parentView;
@property(nonatomic) _Bool isActive; // @synthesize isActive=_isActive;
@property(nonatomic) double tickmarkAngle; // @synthesize tickmarkAngle=_tickmarkAngle;
@property(nonatomic) struct CGPoint tickmarkPoint; // @synthesize tickmarkPoint=_tickmarkPoint;
@property(nonatomic) double currentProgress; // @synthesize currentProgress=_currentProgress;
@property(nonatomic) double endTickmarkProgress; // @synthesize endTickmarkProgress=_endTickmarkProgress;
@property(nonatomic) double endProgress; // @synthesize endProgress=_endProgress;
@property(nonatomic) double startProgress; // @synthesize startProgress=_startProgress;
- (void).cxx_destruct;
- (void)draw;
- (struct CGPoint)controlPointForPoint:(struct CGPoint)arg1 slope:(double)arg2 progress:(double)arg3 distance:(double)arg4 isStartEdge:(_Bool)arg5;
- (struct CGPoint)pointAroundCircumferenceOfCircleWithCenter:(struct CGPoint)arg1 radius:(double)arg2 angle:(double)arg3;
- (double)slopeOfLineBetweenPointA:(struct CGPoint)arg1 andPointB:(struct CGPoint)arg2;
- (void)calculateStartAndEndPoints;
- (void)calculateTickmarkPointAndAngle;
- (void)calculateEndPoints;
- (void)calculateStartPoints;
- (double)multipliedRadius;
- (double)radius;
- (struct CGPoint)center;
- (double)controlPointDistance;
- (double)lineWidth;
- (id)initWithParentView:(id)arg1 radiusMultiplier:(double)arg2 startProgress:(double)arg3 currentProgress:(double)arg4 endProgress:(double)arg5 endTickmarkProgress:(double)arg6 color:(id)arg7;

@end

