//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PARSBaseViewController.h"

@class NSArray, PARSPersonalSetPickerView, PARSPersonalSetViewLogic, UITableView;

@interface PARSPersonalSetViewController : PARSBaseViewController
{
    UITableView *_tableView;
    PARSPersonalSetPickerView *_pickerView;
    PARSPersonalSetViewLogic *_viewLogic;
    NSArray *_models;
}

@property(retain, nonatomic) NSArray *models; // @synthesize models=_models;
@property(retain, nonatomic) PARSPersonalSetViewLogic *viewLogic; // @synthesize viewLogic=_viewLogic;
@property(retain, nonatomic) PARSPersonalSetPickerView *pickerView; // @synthesize pickerView=_pickerView;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
- (void).cxx_destruct;
- (_Bool)shouldHideNavigationBar;
- (void)dealloc;
- (void)unBindLogic;
- (void)bindLogic;
- (void)errorObserverAction:(id)arg1;
- (void)loadObserverAction:(id)arg1;
- (void)selectActionWithTuple:(id)arg1;
- (void)updateDelegateWithTuple:(id)arg1;
- (void)logoutAction;
- (void)didSelectDefaultImageWithName:(id)arg1;
- (void)didTakedHeadImage:(id)arg1;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)setupFooterView;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)runSettingAction;
@end
