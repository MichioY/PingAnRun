//
//  PARSPersonalSetViewController.h
//  WeChatEnvTestViewController
//
//  Created by SuperDry on 02/08/2017.
//  Copyright © 2017 Test. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol MZNavigationChildViewController <NSObject>
- (_Bool)shouldHideNavigationBar;
@end

@interface PARSBaseViewController : UIViewController <MZNavigationChildViewController>
//@interface PARSBaseViewController : NSObject

@property(retain, nonatomic) UIImageView *fakeNavBarBGView; // @synthesize fakeNavBarBGView=_fakeNavBarBGView;
@property(retain, nonatomic) NSString *originalTitle; // @synthesize originalTitle=_originalTitle;
@property(retain, nonatomic) UIColor *navBarBGColor; // @synthesize navBarBGColor=_navBarBGColor;
@property(nonatomic) _Bool shouldFakeNavBar; // @synthesize shouldFakeNavBar=_shouldFakeNavBar;
//@property(copy, nonatomic) CDUnknownBlockType viewDidCompletedLoadBlock; // @synthesize viewDidCompletedLoadBlock=_viewDidCompletedLoadBlock;

//- (void).cxx_destruct;
- (_Bool)shouldHideNavigationBar;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (void)setFakeNavBarBGViewHidden:(_Bool)arg1;
//- (void)presentViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
//- (void)dismissAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)didMoveToParentViewController:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
//@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end


@class NSArray, PARSPersonalSetPickerView, PARSPersonalSetViewLogic, UITableView;

@interface PARSPersonalSetViewController : PARSBaseViewController
//@interface PARSPersonalSetViewController : NSObject

@property(retain, nonatomic) NSArray *models; // @synthesize models=_models;
@property(retain, nonatomic) PARSPersonalSetViewLogic *viewLogic; // @synthesize viewLogic=_viewLogic;
@property(retain, nonatomic) PARSPersonalSetPickerView *pickerView; // @synthesize pickerView=_pickerView;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;

//- (void).cxx_destruct;
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
