//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PAIMBaseModel.h"

#import "IEntity.h"

@class NSDate, NSString;

@interface PAIMMessageModel : PAIMBaseModel <IEntity>
{
    _Bool voiceIsPlay;
    _Bool isFocusByOtherPeople;
    _Bool _isExistGroup;
    float playedTime;
    float height;
    NSString *ID;
    NSString *msgId;
    NSString *msgTo;
    NSString *msgFrom;
    unsigned long long contentType;
    unsigned long long msgProto;
    NSString *content;
    NSDate *createCST;
    NSString *totalTime;
    NSString *totalSize;
    unsigned long long state;
    NSString *conversationID;
    NSString *displayTime;
    NSString *groupID;
    unsigned long long read;
    NSString *thumbnailPic;
    NSString *downloadKey;
    long long retryCount;
    NSString *origin;
    long long retransmit;
    NSString *originJid;
    NSString *remindFriendJid;
    unsigned long long _msgType;
    NSDate *_msgServerCST;
}

+ (id)convertFromApiMessageModel:(id)arg1;
+ (id)convertFromMessageModel:(id)arg1;
+ (void)convertFromMessageModel:(id)arg1 toApiMessageModel:(id)arg2;
+ (id)getAllFields;
+ (id)SendWithMsgType:(unsigned long long)arg1 msgTo:(id)arg2 contentType:(unsigned long long)arg3 content:(id)arg4 conversationID:(id)arg5 totalTime:(id)arg6;
@property(nonatomic) _Bool isExistGroup; // @synthesize isExistGroup=_isExistGroup;
@property(retain, nonatomic) NSDate *msgServerCST; // @synthesize msgServerCST=_msgServerCST;
@property(nonatomic) unsigned long long msgType; // @synthesize msgType=_msgType;
@property(nonatomic) _Bool isFocusByOtherPeople; // @synthesize isFocusByOtherPeople;
@property(retain, nonatomic) NSString *remindFriendJid; // @synthesize remindFriendJid;
@property(retain, nonatomic) NSString *originJid; // @synthesize originJid;
@property(nonatomic) long long retransmit; // @synthesize retransmit;
@property(retain, nonatomic) NSString *origin; // @synthesize origin;
@property(nonatomic) long long retryCount; // @synthesize retryCount;
@property(nonatomic) float height; // @synthesize height;
@property(nonatomic) float playedTime; // @synthesize playedTime;
@property(nonatomic) _Bool voiceIsPlay; // @synthesize voiceIsPlay;
@property(retain, nonatomic) NSString *downloadKey; // @synthesize downloadKey;
@property(retain, nonatomic) NSString *thumbnailPic; // @synthesize thumbnailPic;
@property(nonatomic) unsigned long long read; // @synthesize read;
@property(retain, nonatomic) NSString *groupID; // @synthesize groupID;
@property(retain, nonatomic) NSString *displayTime; // @synthesize displayTime;
@property(retain, nonatomic) NSString *conversationID; // @synthesize conversationID;
@property(nonatomic) unsigned long long state; // @synthesize state;
@property(retain, nonatomic) NSString *totalSize; // @synthesize totalSize;
@property(retain, nonatomic) NSString *totalTime; // @synthesize totalTime;
@property(retain, nonatomic) NSDate *createCST; // @synthesize createCST;
@property(retain, nonatomic) NSString *content; // @synthesize content;
@property(nonatomic) unsigned long long msgProto; // @synthesize msgProto;
@property(nonatomic) unsigned long long contentType; // @synthesize contentType;
@property(retain, nonatomic) NSString *msgFrom; // @synthesize msgFrom;
@property(retain, nonatomic) NSString *msgTo; // @synthesize msgTo;
@property(retain, nonatomic) NSString *msgId; // @synthesize msgId;
@property(retain, nonatomic) NSString *ID; // @synthesize ID;
- (void).cxx_destruct;
- (id)getFromFieldValue:(id)arg1;
- (void)setFieldValue:(id)arg1 value:(id)arg2;
- (void)sendMessageToServer;
- (id)initWithMsgType:(unsigned long long)arg1 msgTo:(id)arg2 msgFrom:(id)arg3 msgProto:(unsigned long long)arg4 state:(unsigned long long)arg5 contentType:(unsigned long long)arg6 content:(id)arg7 conversationID:(id)arg8 totalTime:(id)arg9 totalSize:(id)arg10 origin:(id)arg11 retransmit:(int)arg12 originJid:(id)arg13;
- (id)initWithMsgType:(unsigned long long)arg1 msgTo:(id)arg2 msgFrom:(id)arg3 msgProto:(unsigned long long)arg4 state:(unsigned long long)arg5 contentType:(unsigned long long)arg6 content:(id)arg7 conversationID:(id)arg8 totalTime:(id)arg9;
- (void)dealloc;
- (id)init;

@end

