//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WCTTableCoding-Protocol.h"

@class NSString;

@interface FavLocationDBRecord : NSObject <WCTTableCoding>
{
    int _m_latitude;
    int _m_longitude;
    unsigned int _m_updatetime;
    NSString *_m_language;
    NSString *_m_address;
}

+ (void)__wcdb_table_constraint_7:(struct WCTBinding *)arg1;
+ (void)__wcdb_table_constraint_6:(struct WCTBinding *)arg1;
+ (void)__wcdb_table_constraint_5:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)__wcdb_synthesize_4:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)m_updatetime;
+ (const struct WCTProperty *)__wcdb_synthesize_3:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)m_address;
+ (const struct WCTProperty *)__wcdb_synthesize_2:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)m_language;
+ (const struct WCTProperty *)__wcdb_synthesize_1:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)m_longitude;
+ (const struct WCTProperty *)__wcdb_synthesize_0:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)m_latitude;
+ (id)__wcdbtyper;
+ (const SyntaxList_7f15fe8c *)allProperties;
+ (const struct WCTBinding *)objectRelationalMapping;
@property(nonatomic) unsigned int m_updatetime; // @synthesize m_updatetime=_m_updatetime;
@property(retain, nonatomic) NSString *m_address; // @synthesize m_address=_m_address;
@property(retain, nonatomic) NSString *m_language; // @synthesize m_language=_m_language;
@property(nonatomic) int m_longitude; // @synthesize m_longitude=_m_longitude;
@property(nonatomic) int m_latitude; // @synthesize m_latitude=_m_latitude;
- (void).cxx_destruct;

// Remaining properties
@property(nonatomic) _Bool isAutoIncrement;
@property(nonatomic) long long lastInsertedRowID;

@end

