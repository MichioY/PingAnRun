//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PARSBaseViewController.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSMutableArray, NSString, PARSActivityDetailModel, UITableView;

@interface PARSHealthCircleWalkingMoreViewController : PARSBaseViewController <UITableViewDelegate, UITableViewDataSource>
{
    UITableView *_moreTab;
    NSMutableArray *_moreDataSource;
    PARSActivityDetailModel *_activity;
    long long _viewType;
}

@property(nonatomic) long long viewType; // @synthesize viewType=_viewType;
@property(retain, nonatomic) PARSActivityDetailModel *activity; // @synthesize activity=_activity;
@property(retain, nonatomic) NSMutableArray *moreDataSource; // @synthesize moreDataSource=_moreDataSource;
@property(retain, nonatomic) UITableView *moreTab; // @synthesize moreTab=_moreTab;
- (void).cxx_destruct;
- (void)disableSpeech:(id)arg1;
- (void)backgroundKeepOn:(id)arg1;
- (void)gotoTrueStepCount;
- (void)gotoActivityRuleVC;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)setupSubviews;
- (id)initWithActivity:(id)arg1;
- (void)viewDidLoad;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

