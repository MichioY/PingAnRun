//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PAHTTPRequestDelegate.h"

@class NSMutableArray, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString, PAIMGroupHTTPManager;

@interface PAIMOfflineMessageManager : NSObject <PAHTTPRequestDelegate>
{
    NSMutableArray *requestArray;
    NSObject<OS_dispatch_queue> *offlineQueue;
    void *offlineQueueTag;
    PAIMGroupHTTPManager *paGroupHttpManager;
    NSMutableDictionary *_markOfflineMessageDic;
    NSString *msgTimeStampe;
    _Bool isEnd;
    NSMutableArray *_waitDownloadMessages;
    NSMutableArray *_offlineGroupmsgArray;
    NSMutableArray *offelineMsgArray;
    NSMutableArray *offelineApiMsgArray;
    NSMutableArray *offelineLicaiMsgArray;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSMutableDictionary *markOfflineMessageDic; // @synthesize markOfflineMessageDic=_markOfflineMessageDic;
@property(retain, nonatomic) NSMutableArray *offelineLicaiMsgArray; // @synthesize offelineLicaiMsgArray;
@property(readonly) void *offlineQueueTag; // @synthesize offlineQueueTag;
@property(readonly) NSObject<OS_dispatch_queue> *offlineQueue; // @synthesize offlineQueue;
@property(retain, nonatomic) NSMutableArray *offelineApiMsgArray; // @synthesize offelineApiMsgArray;
@property(retain, nonatomic) NSMutableArray *offelineMsgArray; // @synthesize offelineMsgArray;
- (void).cxx_destruct;
- (void)handleChatMessage:(id)arg1;
- (void)handleGroupChatMessage:(id)arg1;
- (_Bool)isOfflineMsgEnd:(id)arg1;
- (id)getMsgTimeStampe:(id)arg1;
- (void)sendXmlParseFailDataToServer:(id)arg1 type:(int)arg2;
- (void)requestFailed:(id)arg1 error:(id)arg2;
- (void)requestFinished:(id)arg1 withResult:(id)arg2;
- (void)completeMessageParserHandlerWithElement:(id)arg1;
- (void)parserMessageListWithElement:(id)arg1;
- (void)parserPublicListWithElement:(id)arg1;
- (void)parserUserListWithElement:(id)arg1;
- (void)setFriendInfoToCacheWithType:(unsigned long long)arg1 andElement:(id)arg2;
- (_Bool)xmlParserFailHandlerWithContent:(id)arg1;
- (id)htmlEntityDecode:(id)arg1;
- (void)handleOfflineMessageOver;
- (void)handleOfflineMessage:(id)arg1;
- (void)handleGroupInviteMessageWithMessage:(id)arg1;
- (void)handleNormalMessagesWithMessage:(id)arg1;
- (void)sendRemoveOfflineMsg:(id)arg1;
- (void)sendRequestOfflineMsg:(id)arg1;
- (void)fetchOfflineMessage;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
