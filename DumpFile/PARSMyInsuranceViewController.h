//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PARSBaseRefreshViewController.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSArray, NSError, NSString, PARSMyInsuranceViewLogic, UITableView, UIView;

@interface PARSMyInsuranceViewController : PARSBaseRefreshViewController <UITableViewDelegate, UITableViewDataSource>
{
    UITableView *_tableView;
    NSArray *_datasources;
    NSError *_error;
    PARSMyInsuranceViewLogic *_viewLogic;
    UIView *_headerView;
}

@property(retain, nonatomic) UIView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) PARSMyInsuranceViewLogic *viewLogic; // @synthesize viewLogic=_viewLogic;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) NSArray *datasources; // @synthesize datasources=_datasources;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (void)dealloc;
- (void)gotoRenewalWithUrl:(id)arg1;
- (void)didSelect;
- (void)refresh;
- (void)onLoadMore;
- (void)onRefresh;
- (void)handleTap;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)addObservers;
- (void)bindLogic;
- (void)unBindLogic;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

