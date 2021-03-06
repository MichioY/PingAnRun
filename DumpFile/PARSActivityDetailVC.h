//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PARSBaseViewController.h"

#import "PARSShareActionHandlerDelegate.h"

@class NSString, PARSActivityDetailModel, PARSActivityDetailNavigatorVC, PARSActivityDetailViewLogic, PARSActivityDetailWebVC, PARSImageView, PARSShareActionHandler, UIButton, UILabel, UIScrollView, UIView;

@interface PARSActivityDetailVC : PARSBaseViewController <PARSShareActionHandlerDelegate>
{
    _Bool _addressHidden;
    _Bool _timeHidden;
    UIView *_uvLine;
    PARSImageView *_headerImageView;
    UIButton *_btnLocation;
    UILabel *_lbTime;
    UILabel *_lbLocation;
    PARSImageView *_imgLocationTip;
    PARSImageView *_imgTime;
    PARSImageView *_imgMember;
    UIView *_headerView;
    UILabel *_attemptCountLabel;
    UIButton *_toCommentButton;
    UIButton *_toPrizeListButton;
    UIScrollView *_mainScrollView;
    UIButton *_shareButton;
    UILabel *_lbAttemptDesc;
    PARSActivityDetailNavigatorVC *_navigatorVC;
    PARSActivityDetailWebVC *_webVC;
    PARSActivityDetailViewLogic *_detailViewLogic;
    PARSShareActionHandler *_shareHandler;
    NSString *_shareTitle;
    NSString *_shareContent;
    NSString *_shareThumbURL;
    PARSActivityDetailModel *_detailModel;
    double _deviceWeight;
}

+ (void)showDetailWithActivityInfo:(id)arg1;
+ (void)showDetailWithActivityId:(id)arg1 agentNo:(id)arg2 agentName:(id)arg3;
+ (void)showDetailWithActivityId:(id)arg1;
@property(nonatomic) double deviceWeight; // @synthesize deviceWeight=_deviceWeight;
@property(retain, nonatomic) PARSActivityDetailModel *detailModel; // @synthesize detailModel=_detailModel;
@property(nonatomic) _Bool timeHidden; // @synthesize timeHidden=_timeHidden;
@property(copy, nonatomic) NSString *shareThumbURL; // @synthesize shareThumbURL=_shareThumbURL;
@property(copy, nonatomic) NSString *shareContent; // @synthesize shareContent=_shareContent;
@property(copy, nonatomic) NSString *shareTitle; // @synthesize shareTitle=_shareTitle;
@property(retain, nonatomic) PARSShareActionHandler *shareHandler; // @synthesize shareHandler=_shareHandler;
@property(retain, nonatomic) PARSActivityDetailViewLogic *detailViewLogic; // @synthesize detailViewLogic=_detailViewLogic;
@property(readonly, nonatomic) PARSActivityDetailWebVC *webVC; // @synthesize webVC=_webVC;
@property(readonly, nonatomic) PARSActivityDetailNavigatorVC *navigatorVC; // @synthesize navigatorVC=_navigatorVC;
@property(nonatomic) _Bool addressHidden; // @synthesize addressHidden=_addressHidden;
- (void).cxx_destruct;
@property(readonly, nonatomic) UIButton *shareButton; // @synthesize shareButton=_shareButton;
@property(readonly, nonatomic) UIScrollView *mainScrollView; // @synthesize mainScrollView=_mainScrollView;
@property(readonly, nonatomic) UIButton *toPrizeListButton; // @synthesize toPrizeListButton=_toPrizeListButton;
@property(readonly, nonatomic) UIButton *toCommentButton; // @synthesize toCommentButton=_toCommentButton;
@property(readonly, nonatomic) UILabel *attemptCountLabel; // @synthesize attemptCountLabel=_attemptCountLabel;
@property(readonly, nonatomic) PARSImageView *headerImageView; // @synthesize headerImageView=_headerImageView;
@property(readonly, nonatomic) UIView *headerView; // @synthesize headerView=_headerView;
@property(readonly, nonatomic) UILabel *lbAttemptDesc; // @synthesize lbAttemptDesc=_lbAttemptDesc;
@property(readonly, nonatomic) UIView *uvLine; // @synthesize uvLine=_uvLine;
@property(readonly, nonatomic) UIButton *btnLocation; // @synthesize btnLocation=_btnLocation;
@property(readonly, nonatomic) UILabel *lbLocation; // @synthesize lbLocation=_lbLocation;
@property(readonly, nonatomic) UILabel *lbTime; // @synthesize lbTime=_lbTime;
@property(readonly, nonatomic) PARSImageView *imgLocationTip; // @synthesize imgLocationTip=_imgLocationTip;
@property(readonly, nonatomic) PARSImageView *imgTime; // @synthesize imgTime=_imgTime;
@property(readonly, nonatomic) PARSImageView *imgMember; // @synthesize imgMember=_imgMember;
- (void)refreshLotteryTimes;
- (void)reloadAction;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithDetailModel:(id)arg1;
- (void)dealloc;
- (id)getAgentNoToShare;
- (void)shareView:(id)arg1 didSelectToShareWithType:(unsigned long long)arg2;
- (void)shareToWeiBoWithResult:(unsigned long long)arg1;
- (void)shareToWeChatTimeLineWithResult:(unsigned long long)arg1;
- (void)shareToWeChatSessionWithResult:(unsigned long long)arg1;
- (void)shareClick;
- (void)navigationClick;
- (void)dispatchWithItem:(id)arg1;
- (void)normalButtomLayout;
- (void)unBindLogic;
- (void)prizeClick;
- (void)commentClick;
- (void)bindLogic;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

