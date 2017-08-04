//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IEntity.h"

@class NSDate, NSString;

@interface PAIMChatSettingModel : NSObject <IEntity>
{
    _Bool stickie;
    _Bool showBadge;
    _Bool showNickName;
    _Bool notifyNewMessage;
    NSString *conversationID;
    NSString *backGroundImg;
    unsigned long long chatType;
    long long defaultBackdImg;
    NSDate *stickieTime;
    unsigned long long keyBoardType;
}

+ (id)getAllFields;
@property(nonatomic) unsigned long long keyBoardType; // @synthesize keyBoardType;
@property(retain, nonatomic) NSDate *stickieTime; // @synthesize stickieTime;
@property(nonatomic) _Bool notifyNewMessage; // @synthesize notifyNewMessage;
@property(nonatomic) long long defaultBackdImg; // @synthesize defaultBackdImg;
@property(nonatomic) _Bool showNickName; // @synthesize showNickName;
@property(nonatomic) unsigned long long chatType; // @synthesize chatType;
@property(nonatomic) _Bool showBadge; // @synthesize showBadge;
@property(retain, nonatomic) NSString *backGroundImg; // @synthesize backGroundImg;
@property(nonatomic) _Bool stickie; // @synthesize stickie;
@property(retain, nonatomic) NSString *conversationID; // @synthesize conversationID;
- (void).cxx_destruct;
- (id)getFromFieldValue:(id)arg1;
- (void)setFieldValue:(id)arg1 value:(id)arg2;
- (id)init;
- (id)initWithConversationID:(id)arg1 backGroundImg:(id)arg2;
- (id)initWithConversationID:(id)arg1 stickie:(_Bool)arg2 backGroundImg:(id)arg3 showBadge:(_Bool)arg4 chatType:(unsigned long long)arg5 showNickName:(_Bool)arg6 defaultBackdImg:(long long)arg7 notifyNewMessage:(_Bool)arg8 stickieTime:(id)arg9;

@end
