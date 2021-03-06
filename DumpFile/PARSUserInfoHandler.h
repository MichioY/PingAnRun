//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PARSBaseUserHandler.h"

@class PARSUserFlagProvider, PARSUserInfoProvider;

@interface PARSUserInfoHandler : PARSBaseUserHandler
{
    PARSUserInfoProvider *_userInfoProvider;
    PARSUserFlagProvider *_userFlagProvider;
}

+ (void)saveLatestLogedInYZTAccount:(id)arg1;
+ (id)latestLogedInYZTAccount;
+ (void)saveLatestLogedInAccount:(id)arg1;
+ (id)latestLogedInAccount;
+ (_Bool)saveLatestLogedInUserId:(id)arg1;
+ (id)latestLogedInUserId;
@property(retain, nonatomic) PARSUserFlagProvider *userFlagProvider; // @synthesize userFlagProvider=_userFlagProvider;
@property(retain, nonatomic) PARSUserInfoProvider *userInfoProvider; // @synthesize userInfoProvider=_userInfoProvider;
- (void).cxx_destruct;
- (void)updateGestureLockInfo:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (_Bool)checkIfNeedToGuideUserToSetGestureLock;
- (void)addPromptedResignAgentNumbers:(id)arg1;
- (void)requestRealInfoWithCompletion:(CDUnknownBlockType)arg1;
- (void)verifyAgentInfoWithNumber:(id)arg1 activityId:(id)arg2 oldSystem:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)verifyOTPCustomerAgentWithNumber:(id)arg1 verifyCode:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)addAgentInfoWithNumber:(id)arg1 resultBlock:(CDUnknownBlockType)arg2;
- (void)updateFullAgentInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)updateAgentInfo:(id)arg1 recommendAgentInfo:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)requestUpdateRecommendAgentWithAgentCode:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)requestAgentInfoWithId:(id)arg1 agentTypeFlag:(id)arg2 recommendAgentCode:(id)arg3 encryptedUserPhone:(id)arg4 result:(CDUnknownBlockType)arg5;
- (void)requestGetRecommendCustomerAgentInfoWithResult:(CDUnknownBlockType)arg1;
- (void)requestConfirmRedClickResultWithClickRedDot:(id)arg1 result:(CDUnknownBlockType)arg2;
- (void)requestGetLittleRedDotWithredDotListArr:(id)arg1 result:(CDUnknownBlockType)arg2;
- (void)requestQutuoAgentInfoWithResult:(CDUnknownBlockType)arg1;
- (void)requestRecommendAgentInfoWithResult:(CDUnknownBlockType)arg1;
- (void)updateBedgeInfo:(id)arg1;
- (void)requestConfigWithResult:(CDUnknownBlockType)arg1;
- (void)fetchConfigWithresult:(CDUnknownBlockType)arg1;
- (void)fetchCachedAgentInfoWithResult:(CDUnknownBlockType)arg1;
- (unsigned long long)verifyGestureFailureTimesCount;
- (void)verifyGesturePassword:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)tryToSwitchGestureLockOnOrOff:(_Bool)arg1 loginUuid:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)tryToSwitchGestureLockOnOrOff:(_Bool)arg1 Completion:(CDUnknownBlockType)arg2;
- (void)switchGestureLockOnOff:(_Bool)arg1 withPassord:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)asynFetchNetGestureLockInfo:(CDUnknownBlockType)arg1;
- (void)asynFetchNetGestureLockInfo:(CDUnknownBlockType)arg1 withParameter:(id)arg2;
- (id)syncFetchCacheGestureLockInfo;
- (_Bool)isGestureLockOn;
- (void)clearOnLogOut;
- (void)updateSignInfo:(id)arg1;
- (id)syncFetchCacheSignInfo;
- (void)queryYZTUserInfoWithResult:(CDUnknownBlockType)arg1;
- (void)updateYZTUserInfo:(id)arg1;
- (id)queryYZTUserName;
- (void)requestUpdateAvatarWithImage:(id)arg1 orPresetName:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)changeUserAvatarWithHash:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)changeUserAvatarWithImage:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)changeUserAvatarWithPresetAvatarName:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)changeUserNickName:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)updateSignInfoUId:(id)arg1;
- (void)updateUserInfo:(id)arg1;
- (id)syncFetchCacheUserInfo;
- (void)fetchCacheUserInfoWithResult:(CDUnknownBlockType)arg1;
- (void)requestUserInfoWithResult:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) _Bool isLogedIn;
- (id)initWithUserId:(id)arg1 queue:(id)arg2;

@end

