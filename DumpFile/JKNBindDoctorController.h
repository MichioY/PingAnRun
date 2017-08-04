//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JKNInsuranceHomeViewController.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class JKNEmedTableView, JKNInsuranceBinderDoctorModel, NSString, PAApi_MEPHISTOPAGE_PageUrlInfo;

@interface JKNBindDoctorController : JKNInsuranceHomeViewController <UITableViewDelegate, UITableViewDataSource>
{
    NSString *_serverPromptText;
    JKNEmedTableView *_tableView;
    JKNInsuranceBinderDoctorModel *_bindDoctorModel;
    PAApi_MEPHISTOPAGE_PageUrlInfo *_pageInfo;
}

@property(retain, nonatomic) PAApi_MEPHISTOPAGE_PageUrlInfo *pageInfo; // @synthesize pageInfo=_pageInfo;
@property(retain, nonatomic) JKNInsuranceBinderDoctorModel *bindDoctorModel; // @synthesize bindDoctorModel=_bindDoctorModel;
@property(retain, nonatomic) JKNEmedTableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) NSString *serverPromptText; // @synthesize serverPromptText=_serverPromptText;
- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (void)dealloc;
- (void)loadBindDoctor:(id)arg1;
- (void)setPageUrlInfo:(id)arg1;
- (double)calHeight;
- (_Bool)needTitleBar;
- (void)setDoctorItem:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
