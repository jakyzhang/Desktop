//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface WCLayoutPresenter : NSObject
{
    NSMutableDictionary *m_jsonDict;
}

- (void).cxx_destruct;
- (id)genView;
- (void)setAttributeByObject:(id)arg1 toDict:(id)arg2;
- (void)setAttributeByObject:(id)arg1;
- (void)setAttributeDictionary:(id)arg1 toDict:(id)arg2;
- (void)setAttributeDictionary:(id)arg1;
- (id)initWithTemplateJSONDict:(id)arg1;
- (id)initWithTemplateJSON:(id)arg1;

@end
