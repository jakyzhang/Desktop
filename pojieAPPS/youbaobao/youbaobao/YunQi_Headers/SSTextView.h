//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITextView.h>

@class NSString, UIColor;

@interface SSTextView : UITextView
{
    NSString *_placeholder;
    UIColor *_placeholderTextColor;
}

@property(retain, nonatomic) UIColor *placeholderTextColor; // @synthesize placeholderTextColor=_placeholderTextColor;
@property(retain, nonatomic) NSString *placeholder; // @synthesize placeholder=_placeholder;
- (void).cxx_destruct;
- (void)_textChanged:(id)arg1;
- (void)_initialize;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (void)setTextAlignment:(long long)arg1;
- (void)setFont:(id)arg1;
- (void)setContentInset:(struct UIEdgeInsets)arg1;
- (void)setAttributedText:(id)arg1;
- (void)insertText:(id)arg1;
- (void)setText:(id)arg1;

@end
