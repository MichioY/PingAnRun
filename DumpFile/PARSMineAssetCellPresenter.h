//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PARSMinePresenter.h"

@class NSString, PARSMineAssetCell, PARSZoneConfigInfo, UITableView;

@interface PARSMineAssetCellPresenter : NSObject <PARSMinePresenter>
{
    id <PARSMinePresenterDelegate> _delegate;
    double _cellHeight;
    UITableView *_tableView;
    PARSMineAssetCell *_assetCell;
    PARSZoneConfigInfo *_configInfo;
}

@property(retain, nonatomic) PARSZoneConfigInfo *configInfo; // @synthesize configInfo=_configInfo;
@property(retain, nonatomic) PARSMineAssetCell *assetCell; // @synthesize assetCell=_assetCell;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) double cellHeight; // @synthesize cellHeight=_cellHeight;
@property(nonatomic) __weak id <PARSMinePresenterDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)defaultConfigInfo;
- (double)cellHeightWithItemConut:(unsigned long long)arg1;
- (id)assetCellForIndexPath:(id)arg1;
- (void)checkMyFundNeedRefresh:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)loadData:(_Bool)arg1;
- (id)initWithTableView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
