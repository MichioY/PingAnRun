//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSString;

@interface PAIMApiMessageModel : NSObject
{
    _Bool _isFocusByOtherPeople;
    _Bool _voiceIsPlay;
    float _height;
    float _playedTime;
    NSString *_msgId;
    NSString *_msgFrom;
    NSString *_msgTo;
    unsigned long long _msgProto;
    unsigned long long _contentType;
    NSString *_content;
    unsigned long long _msgType;
    NSString *_conversationID;
    NSDate *_createCST;
    unsigned long long _state;
    NSString *_remindFriendJid;
    unsigned long long _read;
    NSString *_displayTime;
    long long _retransmit;
    NSString *_orignAuthorName;
    NSString *_orignAuthorID;
    NSString *_thumbnailPic;
    NSString *_downloadKey;
    NSString *_totalTime;
    NSString *_totalSize;
    NSString *_groupID;
}

@property(retain, nonatomic) NSString *groupID; // @synthesize groupID=_groupID;
@property(nonatomic) float playedTime; // @synthesize playedTime=_playedTime;
@property(retain, nonatomic) NSString *totalSize; // @synthesize totalSize=_totalSize;
@property(retain, nonatomic) NSString *totalTime; // @synthesize totalTime=_totalTime;
@property(retain, nonatomic) NSString *downloadKey; // @synthesize downloadKey=_downloadKey;
@property(retain, nonatomic) NSString *thumbnailPic; // @synthesize thumbnailPic=_thumbnailPic;
@property(nonatomic) _Bool voiceIsPlay; // @synthesize voiceIsPlay=_voiceIsPlay;
@property(retain, nonatomic) NSString *orignAuthorID; // @synthesize orignAuthorID=_orignAuthorID;
@property(retain, nonatomic) NSString *orignAuthorName; // @synthesize orignAuthorName=_orignAuthorName;
@property(nonatomic) long long retransmit; // @synthesize retransmit=_retransmit;
@property(retain, nonatomic) NSString *displayTime; // @synthesize displayTime=_displayTime;
@property(nonatomic) float height; // @synthesize height=_height;
@property(nonatomic) unsigned long long read; // @synthesize read=_read;
@property(nonatomic) _Bool isFocusByOtherPeople; // @synthesize isFocusByOtherPeople=_isFocusByOtherPeople;
@property(retain, nonatomic) NSString *remindFriendJid; // @synthesize remindFriendJid=_remindFriendJid;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(retain, nonatomic) NSDate *createCST; // @synthesize createCST=_createCST;
@property(retain, nonatomic) NSString *conversationID; // @synthesize conversationID=_conversationID;
@property(nonatomic) unsigned long long msgType; // @synthesize msgType=_msgType;
@property(retain, nonatomic) NSString *content; // @synthesize content=_content;
@property(nonatomic) unsigned long long contentType; // @synthesize contentType=_contentType;
@property(nonatomic) unsigned long long msgProto; // @synthesize msgProto=_msgProto;
@property(retain, nonatomic) NSString *msgTo; // @synthesize msgTo=_msgTo;
@property(retain, nonatomic) NSString *msgFrom; // @synthesize msgFrom=_msgFrom;
@property(retain, nonatomic) NSString *msgId; // @synthesize msgId=_msgId;
- (void).cxx_destruct;
- (id)initApiVideoMessageModelWithMsgTo:(id)arg1 contentType:(unsigned long long)arg2 content:(id)arg3 chatType:(unsigned long long)arg4 conversationID:(id)arg5 totalTime:(id)arg6 thumbnailPic:(id)arg7 totalSize:(id)arg8;
- (id)initApiVoiceMessageModelWithMsgTo:(id)arg1 contentType:(unsigned long long)arg2 content:(id)arg3 chatType:(unsigned long long)arg4 conversationID:(id)arg5 totalTime:(id)arg6 restransmit:(long long)arg7 orignAuthorName:(id)arg8 orignAuthorID:(id)arg9 voiceIsPlay:(_Bool)arg10;
- (id)initApiImageMessageModelWithMsgTo:(id)arg1 contentType:(unsigned long long)arg2 content:(id)arg3 chatType:(unsigned long long)arg4 conversationID:(id)arg5;
- (id)initApiMessageModelWithMsgTo:(id)arg1 contentType:(unsigned long long)arg2 content:(id)arg3 chatType:(unsigned long long)arg4 conversationID:(id)arg5;
- (id)init;

@end

