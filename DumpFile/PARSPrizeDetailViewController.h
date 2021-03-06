//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PARSBaseViewController.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSArray, NSString, PARSPrizeDetailModel, PARSPrizeModel, UITableView;

@interface PARSPrizeDetailViewController : PARSBaseViewController <UITableViewDelegate, UITableViewDataSource>
{
    NSString *_activityNo;
    NSString *_type;
    PARSPrizeDetailModel *_detailModel;
    PARSPrizeModel *_prizeModel;
    NSArray *_showInfos;
    NSString *_trackingNo;
    long long _index;
    long long _companyCount;
    UITableView *_tableView;
}

@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) long long companyCount; // @synthesize companyCount=_companyCount;
@property(nonatomic) long long index; // @synthesize index=_index;
@property(copy, nonatomic) NSString *trackingNo; // @synthesize trackingNo=_trackingNo;
@property(retain, nonatomic) NSArray *showInfos; // @synthesize showInfos=_showInfos;
@property(retain, nonatomic) PARSPrizeModel *prizeModel; // @synthesize prizeModel=_prizeModel;
@property(retain, nonatomic) PARSPrizeDetailModel *detailModel; // @synthesize detailModel=_detailModel;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *activityNo; // @synthesize activityNo=_activityNo;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)loadExpressInfoWithExpressNum:(id)arg1 companyInfo:(id)arg2 index:(long long)arg3;
- (void)showTrackingDetail;
- (void)fetchRemoteData;
- (void)setupSubView;
- (void)viewDidLoad;
- (id)initWithPrizeType:(id)arg1 prizeModel:(id)arg2 prizeDetailModel:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

