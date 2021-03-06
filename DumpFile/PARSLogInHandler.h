//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PARSBaseSignHandler.h"

@class NSString;

@interface PARSLogInHandler : PARSBaseSignHandler
{
    NSString *_encryptedPw;
    NSString *_encryptedAccount;
    NSString *_otpCode;
}

@property(copy, nonatomic) NSString *otpCode; // @synthesize otpCode=_otpCode;
- (void).cxx_destruct;
- (void)fetchLatestLoginInfo:(CDUnknownBlockType)arg1;
- (void)requestLatestLoginInfo:(CDUnknownBlockType)arg1;
- (void)requestChangeLogInPassowrdOfUserId:(id)arg1 randomSign:(id)arg2 oldPassword:(id)arg3 newPassword:(id)arg4 result:(CDUnknownBlockType)arg5;
- (void)requestLoginWithAccount:(id)arg1 password:(id)arg2 randomSign:(id)arg3 result:(CDUnknownBlockType)arg4;
- (void)requestRandomSignWithResult:(CDUnknownBlockType)arg1;
- (void)changeLogInPasswordOfUser:(id)arg1 fromPassword:(id)arg2 toPassword:(id)arg3 result:(CDUnknownBlockType)arg4;
- (void)refreshLoginStatusWithUserInfo:(id)arg1 aceessTicket:(id)arg2 result:(CDUnknownBlockType)arg3;
- (void)logInWithAcccount:(id)arg1 password:(id)arg2 result:(CDUnknownBlockType)arg3;
- (void)loginWithVerifyCodeParam:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end

