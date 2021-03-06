//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IMYEmoticonConverter;

@interface IMYREmoticonManager : NSObject
{
    IMYEmoticonConverter *_emoticonConverter;
}

+ (id)emojiDeleteMoreWithString:(id)arg1 count:(int)arg2;
+ (_Bool)hasContainEmojiWithString:(id)arg1;
+ (long long)emojiCount:(id)arg1;
+ (_Bool)emojiWithTextView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
+ (void)emojiInsertWithTextView:(id)arg1 emojiKey:(id)arg2;
+ (void)emojiDeleteWithTextView:(id)arg1;
+ (id)sharedManager;
@property(retain, nonatomic) IMYEmoticonConverter *emoticonConverter; // @synthesize emoticonConverter=_emoticonConverter;
- (void).cxx_destruct;
- (unsigned long long)emoticonDownloaded:(long long)arg1;
- (unsigned long long)emoticonExists:(long long)arg1;
- (id)getMyDynamicEmoticonsList;
- (_Bool)isDynamicEmotion:(id)arg1;
- (id)emotionImagePath:(id)arg1;
- (long long)emoticonNameTransToID:(id)arg1;
- (id)emotionValueArrayWithEmotionID:(long long)arg1;
- (id)emotionKeyArrayWithEmotionID:(long long)arg1;
- (id)init;

@end

