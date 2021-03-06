//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CommonDataMapping.h"

#import "SessionDataMapping.h"

@class NSString;

@interface ISRSessionDataMapping : CommonDataMapping <SessionDataMapping>
{
}

+ (id)sessionParam;
+ (void)setGrammarID:(id)arg1;
+ (id)grammarID;
+ (int)sampleRate;
+ (int)parseCategory;
+ (void)setAudioSource:(id)arg1;
+ (id)audioSource;
+ (id)audioFilePath;
+ (_Bool)isSaveAudioFile;
+ (id)getValue:(id)arg1;
+ (_Bool)setValue:(id)arg1 value:(id)arg2;
+ (id)getKeyMapping:(id)arg1;
+ (void)clearAll;
+ (void)isrMappingDictionaryInit;
+ (void)isrDictionaryInit;
+ (void)printDictionary;
+ (void)destroy;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

