//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UILabel.h>

@class NSMutableAttributedString;

@interface GDIArcLabel : UILabel
{
    double _radius;
    double _kerning;
    double _sizeOfTextInRadians;
    NSMutableAttributedString *_attributedString;
}

+ (double)sizeInRadiansOfText:(id)arg1 font:(id)arg2 radius:(double)arg3 kerning:(double)arg4;
+ (struct CGPoint)cartesianCoordinateFromPolarWithRadius:(double)arg1 radians:(double)arg2;
+ (id)attributedStringWithText:(id)arg1 font:(id)arg2;
@property(retain, nonatomic) NSMutableAttributedString *attributedString; // @synthesize attributedString=_attributedString;
@property(nonatomic) double sizeOfTextInRadians; // @synthesize sizeOfTextInRadians=_sizeOfTextInRadians;
@property(nonatomic) double kerning; // @synthesize kerning=_kerning;
@property(nonatomic) double radius; // @synthesize radius=_radius;
- (void).cxx_destruct;
- (void)setFont:(id)arg1;
- (void)setText:(id)arg1;
- (void)drawTextInRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
