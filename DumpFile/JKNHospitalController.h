//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JKNInsuranceHomeViewController.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSArray, NSString, PAApi_MEPHISTOPAGE_PlateData, UITableView;

@interface JKNHospitalController : JKNInsuranceHomeViewController <UITableViewDelegate, UITableViewDataSource>
{
    _Bool _isHideConvenientRegisterCell;
    PAApi_MEPHISTOPAGE_PlateData *_convenientRegisterModel;
    PAApi_MEPHISTOPAGE_PlateData *_quickRegisterModel;
    UITableView *_tableView;
    NSArray *_hospitalArray;
}

@property(copy, nonatomic) NSArray *hospitalArray; // @synthesize hospitalArray=_hospitalArray;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) _Bool isHideConvenientRegisterCell; // @synthesize isHideConvenientRegisterCell=_isHideConvenientRegisterCell;
@property(retain, nonatomic) PAApi_MEPHISTOPAGE_PlateData *quickRegisterModel; // @synthesize quickRegisterModel=_quickRegisterModel;
@property(retain, nonatomic) PAApi_MEPHISTOPAGE_PlateData *convenientRegisterModel; // @synthesize convenientRegisterModel=_convenientRegisterModel;
- (void).cxx_destruct;
- (_Bool)needBottomLine;
- (_Bool)needHeaderBottomLine;
- (id)summaryString;
- (double)calHeight;
- (void)titleAction;
- (id)subTitleString;
- (id)titleString;
- (_Bool)needTitleBar;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)createTableView;
- (void)requestHospitalData;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

