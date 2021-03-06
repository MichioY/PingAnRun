//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PARSTableViewController.h"

#import "GesturePasswordSwitchDelegate.h"
#import "MZNavigationChildViewController.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSArray, NSString;

@interface PwdManageViewController : PARSTableViewController <UITableViewDelegate, UITableViewDataSource, GesturePasswordSwitchDelegate, MZNavigationChildViewController>
{
    NSArray *_titles;
    unsigned long long _passwordType;
}

@property(nonatomic) unsigned long long passwordType; // @synthesize passwordType=_passwordType;
- (void).cxx_destruct;
- (_Bool)shouldHideNavigationBar;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)switchStateChange:(_Bool)arg1;
- (_Bool)isLoginFromYZT;
- (_Bool)isLoginFromApp;
- (void)back;
- (void)forgetGesturePassword;
- (void)modifyGesturePassword;
- (void)handleTapOnLogoutWangCaiAccount;
- (void)handleTapGestureOnGetBackPassView;
- (void)handleTapGestureOnModifyPassView;
- (void)showChgLoginPwdView;
- (void)reload;
- (void)configuration;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)viewDidLoad;
- (void)dealloc;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

