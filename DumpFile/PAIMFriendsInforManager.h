//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PAHTTPRequestDelegate.h"

@class NSString, PAIMFriendModel, PAIMHTTPRequest;

@interface PAIMFriendsInforManager : NSObject <PAHTTPRequestDelegate>
{
    _Bool isSearchMyInfo;
    NSString *addOrRemoveBlacklistUserJid;
    PAIMHTTPRequest *mixQueryUserRequest;
    PAIMHTTPRequest *queryUserRequest;
    PAIMHTTPRequest *getUserInfoRequest;
    PAIMHTTPRequest *editUserInfoRequest;
    PAIMHTTPRequest *editUserNameRequest;
    PAIMHTTPRequest *queryCustomUserRequest;
    PAIMHTTPRequest *addFriendRequest;
    PAIMHTTPRequest *addFriendWithCustomID;
    PAIMHTTPRequest *deleteFriendRequest;
    PAIMHTTPRequest *setNickNameRequest;
    PAIMHTTPRequest *addBlacklistRequest;
    PAIMHTTPRequest *removeBlacklistRequest;
    _Bool isSearchOwnInfo;
    _Bool isSaveLoginUserInfo;
    NSString *addUserJid;
    NSString *deleteFriendJid;
    NSString *_setNickNameFriendJid;
    NSString *_nickName;
    PAIMFriendModel *_friendModel;
    id <PAIMFriendsInforManagerDelegate> _delegate;
}

+ (id)sharedInstance;
@property(nonatomic) id <PAIMFriendsInforManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) PAIMFriendModel *friendModel; // @synthesize friendModel=_friendModel;
- (void).cxx_destruct;
- (void)dealloc;
- (void)requestSuccessWithFriendModel:(id)arg1;
- (void)handleUserInfo:(id)arg1;
- (id)intFriendInfoModel:(id)arg1;
- (void)requestFinished:(id)arg1 withResult:(id)arg2;
- (id)hanldAddFriendWithResult:(id)arg1;
- (void)requestFailed:(id)arg1 error:(id)arg2;
- (void)removeFriendFromBlacklistWithJid:(id)arg1 callBack:(id)arg2;
- (void)addFriendToBlacklistWithJid:(id)arg1 callBack:(id)arg2;
- (void)setFriendNickname:(id)arg1 userJid:(id)arg2 callBack:(id)arg3;
- (void)addFriendsWithCustomID:(id)arg1 sourcesys:(id)arg2;
- (void)setUserInfoName:(id)arg1 realName:(id)arg2 mobillephone:(id)arg3 sex:(id)arg4 region:(id)arg5 albumurl:(id)arg6 signature:(id)arg7 callBack:(id)arg8;
- (void)SearchUserWithPhoneNum:(id)arg1 callBack:(id)arg2;
- (void)searchUserInfo:(id)arg1 callBack:(id)arg2;
- (void)queryOwnInfo;
- (void)searchOwnInfoWithSeverVs:(id)arg1 logcalVersion:(id)arg2;
- (void)QuerycustomUserInfo:(id)arg1 sourcesys:(id)arg2 callBack:(id)arg3;
- (id)fetchBlackList;
- (void)addFriendWithJid:(id)arg1 withNickName:(id)arg2 source:(unsigned long long)arg3 callBack:(id)arg4;
- (void)deleteFriendWithJid:(id)arg1 callBack:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
