//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PARSBaseRefreshViewController.h"

#import "PALifeHealthLineLXActionSheetDelegate.h"
#import "PARSHWPedometerUploadViewDelegate.h"
#import "PARSHWPedometerWalkingBottomViewDelegate.h"
#import "PARSHealthCircleAlertViewDelegate.h"
#import "PARSShareActionHandlerDelegate.h"
#import "PARSShareActionViewDelegate.h"

@class AVSpeechSynthesizer, MarqueeLabel, NSString, PARSActivityDetailModel, PARSHWPedometerDashBoardViewController, PARSHWPedometerUploadView, PARSHWPedometerWalkingBottomView, PARSHealthBodyInfo, PARSHealthPedometerPageMainViewController, PARSPedmoterWalkingButtonView, PARSPedmoterWalkingDonateView, PARSPedmoterWalkingMaronAndDonateView, PARSPedmoterWalkingMaronView, PARSPedmoterWalkingOperateClass, PARSShareActionHandler, UIButton, UIImageView;

@interface PARSHealthPedmoterHomeViewController : PARSBaseRefreshViewController <PALifeHealthLineLXActionSheetDelegate, PARSHWPedometerUploadViewDelegate, PARSHWPedometerWalkingBottomViewDelegate, PARSHealthCircleAlertViewDelegate, PARSShareActionHandlerDelegate, PARSShareActionViewDelegate>
{
    _Bool _isShowGoSignupBtnAlert;
    _Bool _isShowSure;
    PARSHealthPedometerPageMainViewController *_mainViewController;
    SEL _backToCircle;
    PARSHWPedometerDashBoardViewController *_pedometerDashBoardVC;
    UIButton *_settingButton;
    PARSHealthBodyInfo *_bodyInfo;
    PARSPedmoterWalkingButtonView *_btnView;
    PARSPedmoterWalkingDonateView *_donateBtnView;
    PARSPedmoterWalkingMaronView *_maronBtnView;
    PARSPedmoterWalkingMaronAndDonateView *_bothBtnView;
    UIButton *_walkingMotionBtn;
    UIButton *_walkingCourse;
    UIImageView *_walkingTrack;
    PARSHWPedometerUploadView *_uploadView;
    PARSHWPedometerWalkingBottomView *_bottomView;
    PARSActivityDetailModel *_activity;
    PARSPedmoterWalkingOperateClass *_operate;
    MarqueeLabel *_prizeListLabel;
    AVSpeechSynthesizer *_speechSynthesizer;
    PARSShareActionHandler *_shareHandler;
}

@property(retain, nonatomic) PARSShareActionHandler *shareHandler; // @synthesize shareHandler=_shareHandler;
@property(retain, nonatomic) AVSpeechSynthesizer *speechSynthesizer; // @synthesize speechSynthesizer=_speechSynthesizer;
@property(retain, nonatomic) MarqueeLabel *prizeListLabel; // @synthesize prizeListLabel=_prizeListLabel;
@property(retain, nonatomic) PARSPedmoterWalkingOperateClass *operate; // @synthesize operate=_operate;
@property(retain, nonatomic) PARSActivityDetailModel *activity; // @synthesize activity=_activity;
@property(nonatomic) _Bool isShowSure; // @synthesize isShowSure=_isShowSure;
@property(nonatomic) _Bool isShowGoSignupBtnAlert; // @synthesize isShowGoSignupBtnAlert=_isShowGoSignupBtnAlert;
@property(retain, nonatomic) PARSHWPedometerWalkingBottomView *bottomView; // @synthesize bottomView=_bottomView;
@property(retain, nonatomic) PARSHWPedometerUploadView *uploadView; // @synthesize uploadView=_uploadView;
@property(retain, nonatomic) UIImageView *walkingTrack; // @synthesize walkingTrack=_walkingTrack;
@property(retain, nonatomic) UIButton *walkingCourse; // @synthesize walkingCourse=_walkingCourse;
@property(retain, nonatomic) UIButton *walkingMotionBtn; // @synthesize walkingMotionBtn=_walkingMotionBtn;
@property(retain, nonatomic) PARSPedmoterWalkingMaronAndDonateView *bothBtnView; // @synthesize bothBtnView=_bothBtnView;
@property(retain, nonatomic) PARSPedmoterWalkingMaronView *maronBtnView; // @synthesize maronBtnView=_maronBtnView;
@property(retain, nonatomic) PARSPedmoterWalkingDonateView *donateBtnView; // @synthesize donateBtnView=_donateBtnView;
@property(retain, nonatomic) PARSPedmoterWalkingButtonView *btnView; // @synthesize btnView=_btnView;
@property(retain, nonatomic) PARSHealthBodyInfo *bodyInfo; // @synthesize bodyInfo=_bodyInfo;
@property(retain, nonatomic) UIButton *settingButton; // @synthesize settingButton=_settingButton;
@property(retain, nonatomic) PARSHWPedometerDashBoardViewController *pedometerDashBoardVC; // @synthesize pedometerDashBoardVC=_pedometerDashBoardVC;
@property(nonatomic) SEL backToCircle; // @synthesize backToCircle=_backToCircle;
@property(nonatomic) __weak PARSHealthPedometerPageMainViewController *mainViewController; // @synthesize mainViewController=_mainViewController;
- (void).cxx_destruct;
- (void)shareToWeiBoWithResult:(unsigned long long)arg1;
- (void)shareToWeChatTimeLineWithResult:(unsigned long long)arg1;
- (void)shareToWeChatSessionWithResult:(unsigned long long)arg1;
- (void)shareView:(id)arg1 didSelectToShareWithType:(unsigned long long)arg2;
- (void)shareAction;
- (void)redPacketShareView;
- (void)reviceKitInfos:(id)arg1;
- (void)signupBtnActionIndex:(long long)arg1;
- (void)donateAlertSureValue:(id)arg1;
- (void)medalViewTapAction;
- (void)donateBookViewTapAction;
- (void)kitViewTapAction;
- (void)redPacketViewTapAction;
- (void)walkCourceBtnClick:(id)arg1;
- (void)walkUploadBtnClick:(id)arg1;
- (void)walkTrackBtnClick:(id)arg1;
- (void)requestUploadWithSure:(_Bool)arg1;
- (void)speechWithUploadedSteps:(unsigned long long)arg1;
- (long long)startGetTodaySteps;
- (void)showDonatabookAndMaronAlertWithResultData:(id)arg1;
- (void)showMaronAlert;
- (void)showDonatabookAlertWithResultData:(id)arg1;
- (void)showFirstDonatabookAlert;
- (void)showAlertViewsWithDict:(id)arg1;
- (void)fetchKitsWithDict:(id)arg1;
- (_Bool)checkStepsPermissions;
- (void)requestPrizeList;
- (void)updateHWPedometerWalkingUI;
- (void)showRedPacketAlertWith:(id)arg1;
- (void)requestHealthWalkingTodayData;
- (void)requestDailyChallenges;
- (void)showAlertTips;
- (void)refreshLotteryTimes;
- (void)walkingCourseAction;
- (void)walkingMotionBtnAction;
- (void)useTheKit;
- (void)showKitAlertAuto:(_Bool)arg1;
- (void)checkAvailabilityKitWithTip:(id)arg1;
- (void)loadHistoryRecordDataWith:(id)arg1;
- (void)didClickOnButtonIndex:(long long)arg1;
- (void)backAction;
- (void)refreshData;
- (void)fetchBodyInfo;
- (void)setupSubviews;
- (void)reloadUI;
- (void)reloadKitSData;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;
- (id)initWithActivity:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

