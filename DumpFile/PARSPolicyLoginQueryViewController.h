//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PARSBaseViewController.h"

#import "LoginMemberDelegate.h"
#import "PARSPolicyLoginQueryCellDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSString, UIButton, UITableView;

@interface PARSPolicyLoginQueryViewController : PARSBaseViewController <UITableViewDelegate, UITableViewDataSource, PARSPolicyLoginQueryCellDelegate, LoginMemberDelegate>
{
    id <PARSPolicyLoginQueryViewControllerDelegate> _delegate;
    UITableView *_tableView;
    long long _state;
    UIButton *_loginButton;
}

@property(retain, nonatomic) UIButton *loginButton; // @synthesize loginButton=_loginButton;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) id <PARSPolicyLoginQueryViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)logInYZTSucessfully;
- (void)queryCell:(id)arg1 didTapLoginButton:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)gotoAppLogin;
- (void)handleAppLogin:(CDUnknownBlockType)arg1;
- (void)presentRealNameBaseViewController;
- (void)presentYZTLoginViewController;
- (void)returnAction:(id)arg1;
- (void)setupSubView;
- (void)viewDidLoad;
- (id)initWithIdentifyState:(long long)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
