//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PARSBaseRefreshViewController.h"

#import "PARSHWFakeTabbarDelegate.h"
#import "PARSNicknameViewControllerDelegate.h"
#import "PARSScrollTabControllerDelegate.h"

@class NSString, PARSActivityDetailModel, PARSHWFakeNaviBar, PARSHWFakeTabbar, PARSHealthMineHistoryEightViewController, PARSHealthMineHistoryViewController, PARSHealthPedmoterHomeEightViewController, PARSHealthPedmoterHomeViewController, PARSScrollTabController, UIBarButtonItem;

@interface PARSHealthPedometerPageMainViewController : PARSBaseRefreshViewController <PARSScrollTabControllerDelegate, PARSHWFakeTabbarDelegate, PARSNicknameViewControllerDelegate>
{
    PARSActivityDetailModel *_activity;
    long long _viewType;
    PARSScrollTabController *_tabController;
    PARSHealthPedmoterHomeViewController *_pedometerViewController;
    PARSHealthMineHistoryViewController *_historyWalkingViewController;
    PARSHealthPedmoterHomeEightViewController *_eightPedometerViewController;
    PARSHealthMineHistoryEightViewController *_eightHistoryWalkingViewController;
    UIBarButtonItem *_rightBtnItem;
    PARSHWFakeNaviBar *_navbar;
    PARSHWFakeTabbar *_tabbar;
}

@property(retain, nonatomic) PARSHWFakeTabbar *tabbar; // @synthesize tabbar=_tabbar;
@property(retain, nonatomic) PARSHWFakeNaviBar *navbar; // @synthesize navbar=_navbar;
@property(retain, nonatomic) UIBarButtonItem *rightBtnItem; // @synthesize rightBtnItem=_rightBtnItem;
@property(retain, nonatomic) PARSHealthMineHistoryEightViewController *eightHistoryWalkingViewController; // @synthesize eightHistoryWalkingViewController=_eightHistoryWalkingViewController;
@property(retain, nonatomic) PARSHealthPedmoterHomeEightViewController *eightPedometerViewController; // @synthesize eightPedometerViewController=_eightPedometerViewController;
@property(retain, nonatomic) PARSHealthMineHistoryViewController *historyWalkingViewController; // @synthesize historyWalkingViewController=_historyWalkingViewController;
@property(retain, nonatomic) PARSHealthPedmoterHomeViewController *pedometerViewController; // @synthesize pedometerViewController=_pedometerViewController;
@property(retain, nonatomic) PARSScrollTabController *tabController; // @synthesize tabController=_tabController;
@property(nonatomic) long long viewType; // @synthesize viewType=_viewType;
@property(retain, nonatomic) PARSActivityDetailModel *activity; // @synthesize activity=_activity;
- (void).cxx_destruct;
- (void)updateJoinedGroup:(id)arg1;
- (void)joinGroupWithActivity:(id)arg1;
- (void)gotoShop;
- (void)gotoCircle;
- (void)gotoMarathon;
- (void)didSelectTabbarItem:(unsigned long long)arg1;
- (void)tabController:(id)arg1 didEndScrollingAnimationInViewController:(id)arg2;
- (void)tabController:(id)arg1 didEndScrollViewController:(id)arg2;
- (void)tabController:(id)arg1 willBeginScrollViewController:(id)arg2;
- (void)tabController:(id)arg1 didSelectViewController:(id)arg2;
- (void)showSilentAlertForItem:(unsigned long long)arg1;
- (void)setBadgeNumber:(unsigned long long)arg1 forItem:(unsigned long long)arg2;
- (void)popBack;
- (void)buildSubviews;
- (void)moreAction:(id)arg1;
- (void)checkIsInChina;
- (_Bool)shouldHideNavigationBar;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (id)initWithActivity:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

