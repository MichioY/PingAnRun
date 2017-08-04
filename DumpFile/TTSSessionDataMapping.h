//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CommonDataMapping.h"

#import "SessionDataMapping.h"

@class NSString;

@interface TTSSessionDataMapping : CommonDataMapping <SessionDataMapping>
{
}

+ (id)paramVolume:(id)arg1;
+ (id)paramSpeed:(id)arg1;
+ (id)audioFilePath;
+ (_Bool)isSaveAudioFile;
+ (int)sampleRate;
+ (id)sessionParam;
+ (id)getValue:(id)arg1;
+ (_Bool)setValue:(id)arg1 value:(id)arg2;
+ (id)getKeyMapping:(id)arg1;
+ (void)clearAll;
+ (void)ttsMappingDictionaryInit;
+ (void)ttsDictionaryInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
