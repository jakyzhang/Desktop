//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@class MRTProperty, NSArray, NSDate, NSDateComponents, NSDictionary, NSNumber, NSString;

@interface MRTRoomInformation : NSObject <NSCoding>
{
    MRTProperty *_property;
    NSArray *_nonRoomAccessibleInformation;
    NSString *_confirmationNumber;
    NSString *_reservationIdentifier;
    NSString *_tripIdentifier;
    NSDateComponents *_arrivalTimeComponents;
    NSDateComponents *_checkoutTimeComponents;
    NSNumber *_keysPrinted;
    NSNumber *_keyDownloaded;
    NSDate *_lastAccessed;
    NSDictionary *_descriptionsDictionary;
    NSDictionary *_roomInfoDictionary;
}

+ (void)addMethodsForProperties;
+ (id)propertiesToIgnore;
+ (id)roomInformationWithConfirmationCode:(id)arg1;
+ (id)mostRecentlyUsedRoomInformation;
+ (void)removeCachedRoomsWithConfirmationCodes:(id)arg1;
+ (_Bool)hasMultipleCachedRooms;
+ (id)availableCachedRooms;
+ (void)syncRoomInformation:(id)arg1;
+ (id)roomsInfoPath;
+ (id)keyAliasDictionary;
+ (void)initialize;
@property(retain, nonatomic) NSDictionary *roomInfoDictionary; // @synthesize roomInfoDictionary=_roomInfoDictionary;
@property(retain, nonatomic) NSDictionary *descriptionsDictionary; // @synthesize descriptionsDictionary=_descriptionsDictionary;
@property(retain, nonatomic) NSDate *lastAccessed; // @synthesize lastAccessed=_lastAccessed;
@property(retain, nonatomic) NSNumber *keyDownloaded; // @synthesize keyDownloaded=_keyDownloaded;
@property(retain, nonatomic) NSNumber *keysPrinted; // @synthesize keysPrinted=_keysPrinted;
@property(copy, nonatomic) NSDateComponents *checkoutTimeComponents; // @synthesize checkoutTimeComponents=_checkoutTimeComponents;
@property(copy, nonatomic) NSDateComponents *arrivalTimeComponents; // @synthesize arrivalTimeComponents=_arrivalTimeComponents;
@property(copy, nonatomic) NSString *tripIdentifier; // @synthesize tripIdentifier=_tripIdentifier;
@property(copy, nonatomic) NSString *reservationIdentifier; // @synthesize reservationIdentifier=_reservationIdentifier;
@property(copy, nonatomic) NSString *confirmationNumber; // @synthesize confirmationNumber=_confirmationNumber;
@property(copy, nonatomic) NSArray *nonRoomAccessibleInformation; // @synthesize nonRoomAccessibleInformation=_nonRoomAccessibleInformation;
@property(retain, nonatomic) MRTProperty *property; // @synthesize property=_property;
- (void).cxx_destruct;
- (id)dateRangeWithFormatter:(id)arg1;
- (long long)lockVendorType;
- (id)nonRoomAccessibilityString;
- (id)locationString;
- (id)objectForPropertyName:(id)arg1;
- (id)keyForPropertyName:(id)arg1;
- (id)initWithInfoArray:(id)arg1;
- (_Bool)verifyKeyInfo:(id)arg1;
- (void)populatePropertyForIdentifier:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

// Remaining properties
@property(readonly, nonatomic) NSString *AESKey; // @dynamic AESKey;
@property(readonly, nonatomic) NSString *bedType; // @dynamic bedType;
@property(readonly, nonatomic) NSNumber *ble; // @dynamic ble;
@property(readonly, nonatomic) NSString *direction; // @dynamic direction;
@property(readonly, nonatomic) NSString *floor; // @dynamic floor;
@property(readonly, nonatomic) NSString *floorDescription; // @dynamic floorDescription;
@property(readonly, nonatomic) NSDate *keyIssuedTimestamp; // @dynamic keyIssuedTimestamp;
@property(readonly, nonatomic) NSNumber *keyPrinterLimitReached; // @dynamic keyPrinterLimitReached;
@property(readonly, nonatomic) NSString *lockVendor; // @dynamic lockVendor;
@property(readonly, nonatomic) NSString *printerPayload; // @dynamic printerPayload;
@property(readonly, nonatomic) NSString *roomNumber; // @dynamic roomNumber;
@property(readonly, nonatomic) NSString *roomNumberDescription; // @dynamic roomNumberDescription;
@property(readonly, nonatomic) NSString *tower; // @dynamic tower;
@property(readonly, nonatomic) NSString *towerDescription; // @dynamic towerDescription;
@property(readonly, nonatomic) NSString *view; // @dynamic view;
@property(readonly, nonatomic) NSString *viewDescription; // @dynamic viewDescription;

@end

