//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PARSBaseRefreshViewController.h"

#import "PALiveManagerListener.h"
#import "PARSBannerScrollViewDelegate.h"
#import "PARSBroadcastedCellDelegate.h"
#import "PARSCitySelectDelegate.h"
#import "PARSShareActionViewDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSArray, NSMutableArray, NSString, PARSBannerScrollCycleView, PARSBroadcastModel, PARSLiveSearchView, PARSSocialCloudMessageObserver, UIButton, UITableView, UIViewController;

@interface PARSBroadcastLiveViewController : PARSBaseRefreshViewController <PARSCitySelectDelegate, PARSBannerScrollViewDelegate, PARSBroadcastedCellDelegate, UITableViewDelegate, UITableViewDataSource, PARSShareActionViewDelegate, PALiveManagerListener>
{
    _Bool _isOpen;
    _Bool _hasMoreDate;
    _Bool _isNeedShowNetworkAlert;
    NSString *_liveId;
    UIButton *_locateButton;
    PARSBannerScrollCycleView *_bannerView;
    UITableView *_liveTableView;
    CDUnknownBlockType _reloadBlock;
    NSArray *_bannerInfos;
    UIButton *_backButton;
    NSMutableArray *_liveArr;
    NSMutableArray *_expertArr;
    NSMutableArray *_openArr;
    NSMutableArray *_bannerArr;
    long long _page;
    NSArray *_tempArr;
    NSString *_curLiveId;
    NSString *_curStatus;
    PARSBroadcastModel *_curLiveModel;
    PARSLiveSearchView *_searchView;
    UIViewController *_liveViewController;
    UIButton *_chatButton;
    PARSSocialCloudMessageObserver *_messageObserver;
    NSArray *_groupIds;
}

@property(nonatomic) _Bool isNeedShowNetworkAlert; // @synthesize isNeedShowNetworkAlert=_isNeedShowNetworkAlert;
@property(retain, nonatomic) NSArray *groupIds; // @synthesize groupIds=_groupIds;
@property(retain, nonatomic) PARSSocialCloudMessageObserver *messageObserver; // @synthesize messageObserver=_messageObserver;
@property(retain, nonatomic) UIButton *chatButton; // @synthesize chatButton=_chatButton;
@property(nonatomic) __weak UIViewController *liveViewController; // @synthesize liveViewController=_liveViewController;
@property(retain, nonatomic) PARSLiveSearchView *searchView; // @synthesize searchView=_searchView;
@property(retain, nonatomic) PARSBroadcastModel *curLiveModel; // @synthesize curLiveModel=_curLiveModel;
@property(copy, nonatomic) NSString *curStatus; // @synthesize curStatus=_curStatus;
@property(retain, nonatomic) NSString *curLiveId; // @synthesize curLiveId=_curLiveId;
@property(nonatomic) _Bool hasMoreDate; // @synthesize hasMoreDate=_hasMoreDate;
@property(retain, nonatomic) NSArray *tempArr; // @synthesize tempArr=_tempArr;
@property(nonatomic) long long page; // @synthesize page=_page;
@property(retain, nonatomic) NSMutableArray *bannerArr; // @synthesize bannerArr=_bannerArr;
@property(retain, nonatomic) NSMutableArray *openArr; // @synthesize openArr=_openArr;
@property(retain, nonatomic) NSMutableArray *expertArr; // @synthesize expertArr=_expertArr;
@property(retain, nonatomic) NSMutableArray *liveArr; // @synthesize liveArr=_liveArr;
@property(retain, nonatomic) UIButton *backButton; // @synthesize backButton=_backButton;
@property(retain, nonatomic) NSArray *bannerInfos; // @synthesize bannerInfos=_bannerInfos;
@property(nonatomic) _Bool isOpen; // @synthesize isOpen=_isOpen;
@property(copy, nonatomic) CDUnknownBlockType reloadBlock; // @synthesize reloadBlock=_reloadBlock;
@property(retain, nonatomic) UITableView *liveTableView; // @synthesize liveTableView=_liveTableView;
@property(retain, nonatomic) PARSBannerScrollCycleView *bannerView; // @synthesize bannerView=_bannerView;
@property(retain, nonatomic) UIButton *locateButton; // @synthesize locateButton=_locateButton;
@property(copy, nonatomic) NSString *liveId; // @synthesize liveId=_liveId;
- (void).cxx_destruct;
- (void)shareView:(id)arg1 didSelectToShareWithType:(unsigned long long)arg2;
- (void)checkIfCanWatchingLive:(id)arg1;
- (void)shareWithLiveId:(id)arg1;
- (void)showShareAlertWithModel:(id)arg1;
- (void)gotoLiveWithLiveModel:(id)arg1;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)bannerScrolloView:(id)arg1 didClickPageAtIndex:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)didSelectCity:(id)arg1;
- (void)tarckEvent:(id)arg1 attributes:(id)arg2;
- (void)checkBadgeStatus;
- (void)handleMessage:(id)arg1;
- (void)setGroupIdsWithGroups:(id)arg1;
- (void)getGroupsForLiveRoom:(id)arg1;
- (void)showGroupChatWindow;
- (void)didTapCustomItem:(id)arg1;
- (id)getMoreCustomItems;
- (id)getBottomCustomView;
- (void)onTapHomePage;
- (void)showNetworkTips;
- (void)localNetworkStatusDidChange:(id)arg1;
- (void)gotoSearchLive;
- (void)checkNetwork;
- (void)showLiveRecordWithRoomId:(id)arg1;
- (void)showLiveWithRoomId:(id)arg1;
- (void)showEmptyLive;
- (void)loadSubViews;
- (void)buildBannerView;
- (void)onLoadMore;
- (void)onRefresh;
- (void)setupSubView;
- (void)setupRefreshView;
- (void)selectCity;
- (void)setCityName:(id)arg1;
- (void)configContent;
- (id)buildRightBarButtonItem;
- (id)buildLeftBarButtonItem;
- (void)dismissLive;
- (void)configNavgationBar;
- (void)fetchLiveCahce;
- (void)requestLiveData;
- (void)viewWillAppear:(_Bool)arg1;
- (void)dealloc;
- (void)initSDK;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
