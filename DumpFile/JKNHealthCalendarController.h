//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JKNInsuranceHomeViewController.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class JKNEmedTableView, NSLayoutConstraint, NSMutableArray, NSString, PAApi_MEPHISTOPAGE_PageUrlInfo, UIButton, UIImageView, UILabel, UIView;

@interface JKNHealthCalendarController : JKNInsuranceHomeViewController <UITableViewDataSource, UITableViewDelegate>
{
    _Bool _isAll;
    _Bool _isNew;
    UIView *_tableHeaderView;
    UILabel *_tableHeaderaccustomedLabel;
    UIView *_leftLineView;
    UIButton *_addPlaneBtn;
    UIView *_isNewView;
    UIView *_footView;
    UIImageView *_footExpandOrRetractImageView;
    JKNEmedTableView *_tableView;
    NSMutableArray *_healthPlaneArray;
    NSLayoutConstraint *_footImageLayoutConstraintRight;
    PAApi_MEPHISTOPAGE_PageUrlInfo *_pageInfo;
}

@property(retain, nonatomic) PAApi_MEPHISTOPAGE_PageUrlInfo *pageInfo; // @synthesize pageInfo=_pageInfo;
@property(nonatomic) _Bool isNew; // @synthesize isNew=_isNew;
@property(retain, nonatomic) NSLayoutConstraint *footImageLayoutConstraintRight; // @synthesize footImageLayoutConstraintRight=_footImageLayoutConstraintRight;
@property(retain, nonatomic) NSMutableArray *healthPlaneArray; // @synthesize healthPlaneArray=_healthPlaneArray;
@property(retain, nonatomic) JKNEmedTableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) _Bool isAll; // @synthesize isAll=_isAll;
@property(retain, nonatomic) UIImageView *footExpandOrRetractImageView; // @synthesize footExpandOrRetractImageView=_footExpandOrRetractImageView;
@property(retain, nonatomic) UIView *footView; // @synthesize footView=_footView;
@property(retain, nonatomic) UIView *isNewView; // @synthesize isNewView=_isNewView;
@property(retain, nonatomic) UIButton *addPlaneBtn; // @synthesize addPlaneBtn=_addPlaneBtn;
@property(retain, nonatomic) UIView *leftLineView; // @synthesize leftLineView=_leftLineView;
@property(retain, nonatomic) UILabel *tableHeaderaccustomedLabel; // @synthesize tableHeaderaccustomedLabel=_tableHeaderaccustomedLabel;
@property(retain, nonatomic) UIView *tableHeaderView; // @synthesize tableHeaderView=_tableHeaderView;
- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (void)setPageUrlInfo:(id)arg1;
- (_Bool)needTableViewBottomLine;
- (double)calHeight;
- (_Bool)needTitleBar;
- (void)reloadHealthCalendar:(id)arg1;
- (void)updateTableHeaderView;
- (void)upDateFootWriting;
- (id)stringDateWithDate:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)stretchingOrRetractAction:(id)arg1;
- (void)addPlaneAction:(id)arg1;
- (void)dealloc;
- (void)viewDidLoad;
- (id)init;
- (void)requestHealthCalendar;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

