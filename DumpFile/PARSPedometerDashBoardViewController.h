//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PARSBaseViewController.h"

@class PARSHealthBodyInfo, PARSWalkingPedometerView;

@interface PARSPedometerDashBoardViewController : PARSBaseViewController
{
    PARSWalkingPedometerView *_pedometerDashBoardView;
    PARSHealthBodyInfo *_bodyInfo;
}

@property(retain, nonatomic) PARSHealthBodyInfo *bodyInfo; // @synthesize bodyInfo=_bodyInfo;
@property(retain, nonatomic) PARSWalkingPedometerView *pedometerDashBoardView; // @synthesize pedometerDashBoardView=_pedometerDashBoardView;
- (void).cxx_destruct;
- (void)settingAction;
- (void)refreshData;
- (void)updateUIWithBodyInfo:(id)arg1;
- (void)updateWalkViewWithSteps:(long long)arg1;
- (void)fetchBodyInfo;
- (void)startStepCounter;
- (void)requestHasUploadPedometer;
- (id)buildPedometerDashBoardView;
- (void)buildSubViews;
- (void)viewDidLoad;

@end
