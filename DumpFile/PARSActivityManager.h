//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PARSLaunchProtocol.h"

@class NSString, PARSActivityCheckInStatusHandler, PARSActivityCommentHandler, PARSActivityDetailModelHanlder, PARSActivityInvitationHanlder, PARSActivityPrizeDetailModelHandler, PARSActivitySignUpDirectlyHandler, PARSBaBaYueTuanHandler, PARSGetWonderfulMomentHandler, PARSHealthWalkingSignUpHandler, PARSListActivityHandler;

@interface PARSActivityManager : NSObject <PARSLaunchProtocol>
{
    PARSListActivityHandler *_recommendActivityListHandler;
    PARSListActivityHandler *_allActivityListHandler;
    PARSListActivityHandler *_myActivityListHandler;
    PARSListActivityHandler *_pastActivityListHandler;
    PARSListActivityHandler *_bannerActivityListHandler;
    PARSListActivityHandler *_healthActivityListHandler;
    PARSGetWonderfulMomentHandler *_wonderfulMomentHandler;
    PARSActivityInvitationHanlder *_invitationHandler;
    PARSActivityCheckInStatusHandler *_checkInStatusHandler;
    PARSActivityCommentHandler *_commentHandler;
    PARSListActivityHandler *_activityHandler;
    PARSActivityDetailModelHanlder *_detailModelHandler;
    PARSBaBaYueTuanHandler *_baBaYueTuanHandler;
    PARSActivitySignUpDirectlyHandler *_activitySignUpDirectlyHandler;
    PARSHealthWalkingSignUpHandler *_healthWalkingHandler;
    PARSActivityPrizeDetailModelHandler *_prizeDetailHandler;
}

+ (id)sharedManager;
@property(retain, nonatomic) PARSActivityPrizeDetailModelHandler *prizeDetailHandler; // @synthesize prizeDetailHandler=_prizeDetailHandler;
@property(retain, nonatomic) PARSHealthWalkingSignUpHandler *healthWalkingHandler; // @synthesize healthWalkingHandler=_healthWalkingHandler;
@property(retain, nonatomic) PARSActivitySignUpDirectlyHandler *activitySignUpDirectlyHandler; // @synthesize activitySignUpDirectlyHandler=_activitySignUpDirectlyHandler;
@property(retain, nonatomic) PARSBaBaYueTuanHandler *baBaYueTuanHandler; // @synthesize baBaYueTuanHandler=_baBaYueTuanHandler;
@property(retain, nonatomic) PARSActivityDetailModelHanlder *detailModelHandler; // @synthesize detailModelHandler=_detailModelHandler;
@property(retain, nonatomic) PARSListActivityHandler *activityHandler; // @synthesize activityHandler=_activityHandler;
@property(retain, nonatomic) PARSActivityCommentHandler *commentHandler; // @synthesize commentHandler=_commentHandler;
@property(retain, nonatomic) PARSActivityCheckInStatusHandler *checkInStatusHandler; // @synthesize checkInStatusHandler=_checkInStatusHandler;
@property(retain, nonatomic) PARSActivityInvitationHanlder *invitationHandler; // @synthesize invitationHandler=_invitationHandler;
@property(retain, nonatomic) PARSGetWonderfulMomentHandler *wonderfulMomentHandler; // @synthesize wonderfulMomentHandler=_wonderfulMomentHandler;
@property(retain, nonatomic) PARSListActivityHandler *healthActivityListHandler; // @synthesize healthActivityListHandler=_healthActivityListHandler;
@property(retain, nonatomic) PARSListActivityHandler *bannerActivityListHandler; // @synthesize bannerActivityListHandler=_bannerActivityListHandler;
@property(retain, nonatomic) PARSListActivityHandler *pastActivityListHandler; // @synthesize pastActivityListHandler=_pastActivityListHandler;
@property(retain, nonatomic) PARSListActivityHandler *myActivityListHandler; // @synthesize myActivityListHandler=_myActivityListHandler;
@property(retain, nonatomic) PARSListActivityHandler *allActivityListHandler; // @synthesize allActivityListHandler=_allActivityListHandler;
@property(retain, nonatomic) PARSListActivityHandler *recommendActivityListHandler; // @synthesize recommendActivityListHandler=_recommendActivityListHandler;
- (void).cxx_destruct;
- (void)reportCommentWithParmInfo:(id)arg1 result:(CDUnknownBlockType)arg2;
- (void)loadReportReasonNeedRefresh:(_Bool)arg1 result:(CDUnknownBlockType)arg2;
- (void)fetchActivityLotteryTimesWithActivityId:(id)arg1 result:(CDUnknownBlockType)arg2;
- (void)requestShortUrlWithActivityId:(id)arg1 action:(id)arg2 content:(id)arg3 resultBlock:(CDUnknownBlockType)arg4;
- (void)requestActivityDetailSharedResponseWithActivityId:(id)arg1 shareType:(id)arg2 shareChannel:(id)arg3 result:(CDUnknownBlockType)arg4;
- (void)loadPedometerWithBlock:(CDUnknownBlockType)arg1;
- (void)fetchStepWithResultBlock:(CDUnknownBlockType)arg1;
- (void)didEnterBackground:(id)arg1;
- (id)getTagWithActivityType:(long long)arg1;
- (void)clickPraiseWithParmInfo:(id)arg1 result:(CDUnknownBlockType)arg2;
- (void)queryCommentWithParmInfo:(id)arg1 result:(CDUnknownBlockType)arg2;
- (void)deleteCommentWithParmInfo:(id)arg1 result:(CDUnknownBlockType)arg2;
- (void)addOrReplyCommentWithCommentInfo:(id)arg1 result:(CDUnknownBlockType)arg2;
- (void)requestQiNiuUploadInfo:(CDUnknownBlockType)arg1;
- (void)requestCheckInInfoWithActivityId:(id)arg1 result:(CDUnknownBlockType)arg2;
- (void)getInvitationInfoWithActivityId:(id)arg1 result:(CDUnknownBlockType)arg2;
- (void)loadWonderfulMomentWithActivityId:(id)arg1 result:(CDUnknownBlockType)arg2;
- (void)requestWonderfulMomentWithActivityId:(id)arg1 result:(CDUnknownBlockType)arg2;
- (void)signUpForHealthWalkingSeasonSix:(id)arg1 nickname:(id)arg2 agentNo:(id)arg3 authCode:(id)arg4 result:(CDUnknownBlockType)arg5;
- (void)signUpDirectlyForActivity:(id)arg1 result:(CDUnknownBlockType)arg2;
- (void)loadActivitiesToSpotlight;
- (void)selectAgentJoinActivity:(id)arg1 agentNo:(id)arg2 result:(CDUnknownBlockType)arg3;
- (void)signInWithActivityId:(id)arg1 andLongitude:(id)arg2 andLatitude:(id)arg3 andCompletion:(CDUnknownBlockType)arg4;
- (void)noticeAgentWithActivityId:(id)arg1 andCompletion:(CDUnknownBlockType)arg2;
- (id)getHandlerOfType:(long long)arg1;
- (void)fetchActivityDetailModelWithActivityId:(id)arg1 result:(CDUnknownBlockType)arg2;
- (void)fetchActivityDetailModelWithActivityId:(id)arg1 needRefresh:(_Bool)arg2 result:(CDUnknownBlockType)arg3;
- (void)fetchActivityprizeDetailWithPrizeId:(id)arg1 type:(unsigned long long)arg2 result:(CDUnknownBlockType)arg3;
- (void)fetchActivityListsOfType:(long long)arg1 page:(long long)arg2 needRefresh:(_Bool)arg3 result:(CDUnknownBlockType)arg4;
- (void)fetchActivityListOfType:(long long)arg1 page:(long long)arg2 needRefresh:(_Bool)arg3 result:(CDUnknownBlockType)arg4;
- (void)fetchActivitiesWithTag:(id)arg1 atPage:(long long)arg2 result:(CDUnknownBlockType)arg3;
- (void)fetchActivitiesWithTag:(id)arg1 atPage:(long long)arg2 refresh:(_Bool)arg3 result:(CDUnknownBlockType)arg4;
- (void)fetchActivitiesTagsWithRefresh:(_Bool)arg1 result:(CDUnknownBlockType)arg2;
- (void)fetchActivityIdWithRefresh:(_Bool)arg1 result:(CDUnknownBlockType)arg2;
- (void)setUp;
- (id)buildActivityHandlerWithType:(long long)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
