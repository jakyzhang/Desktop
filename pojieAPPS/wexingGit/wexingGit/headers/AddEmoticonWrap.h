//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "PBCoding-Protocol.h"

@class EmojiInfoObj, EmoticonUploadInfoObj, NSNumber, NSString;

@interface AddEmoticonWrap : MMObject <PBCoding>
{
    long long source;
    NSNumber *fileType;
    long long fileSize;
    NSString *thumbTempFilePath;
    NSString *appid;
    NSString *fromUser;
    EmojiInfoObj *emojiInfoObj;
    EmoticonUploadInfoObj *uploadInfoObj;
}

+ (void)initialize;
@property(retain, nonatomic) EmoticonUploadInfoObj *uploadInfoObj; // @synthesize uploadInfoObj;
@property(retain, nonatomic) EmojiInfoObj *emojiInfoObj; // @synthesize emojiInfoObj;
@property(retain, nonatomic) NSString *fromUser; // @synthesize fromUser;
@property(retain, nonatomic) NSString *appid; // @synthesize appid;
@property(retain, nonatomic) NSString *thumbTempFilePath; // @synthesize thumbTempFilePath;
@property(nonatomic) long long fileSize; // @synthesize fileSize;
@property(retain, nonatomic) NSNumber *fileType; // @synthesize fileType;
@property(nonatomic) long long source; // @synthesize source;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool isSelfieEmoticon;
- (id)getEmoticonImage;
- (id)initWithMessageWrap:(id)arg1 AndSource:(long long)arg2;
- (id)init;
- (const map_f8690629 *)getValueTagIndexMap;
- (id)getValueTypeTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
