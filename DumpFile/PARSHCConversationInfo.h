//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PARSBaseInfo.h"

#import "PARSHCConversationBeanProtocol.h"

@class NSString;

@interface PARSHCConversationInfo : PARSBaseInfo <PARSHCConversationBeanProtocol>
{
    _Bool _groupChat;
    _Bool _stick;
    _Bool _remind;
    _Bool _newMsgAlert;
    long long _msgCount;
    long long _memberCount;
    NSString *_message;
    unsigned long long _circleRole;
    unsigned long long _circleType;
    NSString *_imageURL;
    NSString *_nickName;
    NSString *_title;
    NSString *_conversationId;
    NSString *_receiverId;
    NSString *_activeTime;
    NSString *_stickiedTime;
}

@property(nonatomic) _Bool newMsgAlert; // @synthesize newMsgAlert=_newMsgAlert;
@property(nonatomic, getter=isReminded) _Bool remind; // @synthesize remind=_remind;
@property(copy, nonatomic) NSString *stickiedTime; // @synthesize stickiedTime=_stickiedTime;
@property(nonatomic, getter=isStickied) _Bool stick; // @synthesize stick=_stick;
@property(copy, nonatomic) NSString *activeTime; // @synthesize activeTime=_activeTime;
@property(copy, nonatomic) NSString *receiverId; // @synthesize receiverId=_receiverId;
@property(copy, nonatomic) NSString *conversationId; // @synthesize conversationId=_conversationId;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, copy, nonatomic) NSString *nickName; // @synthesize nickName=_nickName;
@property(readonly, copy, nonatomic) NSString *imageURL; // @synthesize imageURL=_imageURL;
@property(nonatomic) unsigned long long circleType; // @synthesize circleType=_circleType;
@property(nonatomic) unsigned long long circleRole; // @synthesize circleRole=_circleRole;
@property(nonatomic, getter=isGroupChat) _Bool groupChat; // @synthesize groupChat=_groupChat;
@property(copy, nonatomic) NSString *message; // @synthesize message=_message;
@property(nonatomic) long long memberCount; // @synthesize memberCount=_memberCount;
@property(nonatomic) long long msgCount; // @synthesize msgCount=_msgCount;
- (void).cxx_destruct;
- (id)getMessageContent:(id)arg1 type:(unsigned long long)arg2;
- (void)commonInit;
- (id)initWithMessage:(id)arg1;
- (id)initWithConversationInfo:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
