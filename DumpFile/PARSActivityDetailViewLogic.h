//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PARSBaseViewLogic.h"

@class NSString, PARSActivityDetailModel, PARSActivityDetailNavigatorViewLogic, PARSActivityDetailWebViewViewLogic, PARSViewLogicNotifyObserver;

@interface PARSActivityDetailViewLogic : PARSBaseViewLogic
{
    _Bool _isBusy;
    _Bool _isCommentHidden;
    _Bool _isPrizeHidden;
    _Bool _isShareHidden;
    PARSActivityDetailModel *_detailModel;
    PARSViewLogicNotifyObserver *_actionDoneObserver;
    PARSViewLogicNotifyObserver *_navigateObserver;
    PARSViewLogicNotifyObserver *_errorsObserver;
    NSString *_title;
    NSString *_personCount;
    NSString *_activityCover;
    NSString *_activityDateText;
    NSString *_addressText;
    NSString *_lonAndLat;
    PARSActivityDetailWebViewViewLogic *_webViewLogic;
    PARSActivityDetailNavigatorViewLogic *_navigatorViewLogic;
    NSString *_shareURL;
    NSString *_agentNo;
}

@property(copy, nonatomic) NSString *agentNo; // @synthesize agentNo=_agentNo;
@property(copy, nonatomic) NSString *shareURL; // @synthesize shareURL=_shareURL;
@property(retain, nonatomic) PARSActivityDetailNavigatorViewLogic *navigatorViewLogic; // @synthesize navigatorViewLogic=_navigatorViewLogic;
@property(retain, nonatomic) PARSActivityDetailWebViewViewLogic *webViewLogic; // @synthesize webViewLogic=_webViewLogic;
@property(retain, nonatomic) NSString *lonAndLat; // @synthesize lonAndLat=_lonAndLat;
@property(retain, nonatomic) NSString *addressText; // @synthesize addressText=_addressText;
@property(retain, nonatomic) NSString *activityDateText; // @synthesize activityDateText=_activityDateText;
@property(nonatomic) _Bool isShareHidden; // @synthesize isShareHidden=_isShareHidden;
@property(nonatomic) _Bool isPrizeHidden; // @synthesize isPrizeHidden=_isPrizeHidden;
@property(nonatomic) _Bool isCommentHidden; // @synthesize isCommentHidden=_isCommentHidden;
@property(retain, nonatomic) NSString *activityCover; // @synthesize activityCover=_activityCover;
@property(retain, nonatomic) NSString *personCount; // @synthesize personCount=_personCount;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) _Bool isBusy; // @synthesize isBusy=_isBusy;
@property(retain, nonatomic) PARSViewLogicNotifyObserver *errorsObserver; // @synthesize errorsObserver=_errorsObserver;
@property(retain, nonatomic) PARSViewLogicNotifyObserver *navigateObserver; // @synthesize navigateObserver=_navigateObserver;
@property(retain, nonatomic) PARSViewLogicNotifyObserver *actionDoneObserver; // @synthesize actionDoneObserver=_actionDoneObserver;
@property(retain, nonatomic) PARSActivityDetailModel *detailModel; // @synthesize detailModel=_detailModel;
- (void).cxx_destruct;
- (id)itemWithCurrentDetailInfo;
- (void)navigationAction;
- (id)shareAction;
- (void)refreshData;
- (void)initData;
- (void)loadDataWithOutCache;
- (void)loadDataAction;
- (id)toPrizeAction;
- (id)toCommentAction;
- (id)initWithDetailModel:(id)arg1;
- (void)dealloc;

@end

