//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PARSBaseViewController.h"

#import "PARSScrollTabControllerDelegate.h"

@class NSString, PARSCircleInfo, PARSHealthBehaviorIndexDetailViewController, PARSHealthCircleBehaviorRankViewController, PARSScrollTabController;

@interface PARSHealthCircleBehaviorMainViewController : PARSBaseViewController <PARSScrollTabControllerDelegate>
{
    PARSCircleInfo *_circleInfo;
    PARSScrollTabController *_tabController;
    PARSHealthBehaviorIndexDetailViewController *_behaviorDetailViewController;
    PARSHealthCircleBehaviorRankViewController *_behaviorIndexViewController;
}

@property(retain, nonatomic) PARSHealthCircleBehaviorRankViewController *behaviorIndexViewController; // @synthesize behaviorIndexViewController=_behaviorIndexViewController;
@property(retain, nonatomic) PARSHealthBehaviorIndexDetailViewController *behaviorDetailViewController; // @synthesize behaviorDetailViewController=_behaviorDetailViewController;
@property(retain, nonatomic) PARSScrollTabController *tabController; // @synthesize tabController=_tabController;
@property(retain, nonatomic) PARSCircleInfo *circleInfo; // @synthesize circleInfo=_circleInfo;
- (void).cxx_destruct;
- (void)tabController:(id)arg1 didSelectViewController:(id)arg2;
- (void)buildSubviews;
- (void)viewDidLoad;
- (id)initWithCircleInfo:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

