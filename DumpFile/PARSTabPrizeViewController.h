//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PARSBaseRefreshViewController.h"

#import "PARSAcceptPrizeViewControllerDelegate.h"
#import "PARSPrizeTableViewCellDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSArray, NSMutableArray, NSString, PARSPrizeTabModel, PARSResultView, UILabel, UITableView;

@interface PARSTabPrizeViewController : PARSBaseRefreshViewController <UITableViewDelegate, UITableViewDataSource, PARSPrizeTableViewCellDelegate, PARSAcceptPrizeViewControllerDelegate>
{
    _Bool _autoLoaded;
    _Bool _reloadFlag;
    _Bool _usingCache;
    _Bool _didSelectedRow;
    PARSPrizeTabModel *_tabModel;
    UITableView *_tableView;
    UILabel *_noMoreLabel;
    PARSResultView *_blankView;
    NSArray *_prizeInfos;
    unsigned long long _pageNo;
    NSString *_tab;
    NSMutableArray *_dataSource;
}

@property(nonatomic) _Bool didSelectedRow; // @synthesize didSelectedRow=_didSelectedRow;
@property(retain, nonatomic) NSMutableArray *dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) _Bool usingCache; // @synthesize usingCache=_usingCache;
@property(copy, nonatomic) NSString *tab; // @synthesize tab=_tab;
@property(nonatomic) unsigned long long pageNo; // @synthesize pageNo=_pageNo;
@property(retain, nonatomic) NSArray *prizeInfos; // @synthesize prizeInfos=_prizeInfos;
@property(retain, nonatomic) PARSResultView *blankView; // @synthesize blankView=_blankView;
@property(retain, nonatomic) UILabel *noMoreLabel; // @synthesize noMoreLabel=_noMoreLabel;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) _Bool reloadFlag; // @synthesize reloadFlag=_reloadFlag;
@property(nonatomic) _Bool autoLoaded; // @synthesize autoLoaded=_autoLoaded;
@property(retain, nonatomic) PARSPrizeTabModel *tabModel; // @synthesize tabModel=_tabModel;
- (void).cxx_destruct;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)receivingPrize:(id)arg1;
- (void)newReceivePrizeWithModel:(id)arg1;
- (void)acceptViewControllerDidReceivedPrizeSuccessful:(id)arg1;
- (void)onLoadMore;
- (void)onRefresh;
- (id)convertTypeWithInfo:(id)arg1;
- (void)reloadRowForReceivedSuccess:(id)arg1;
- (void)deleteGetSuccessfulModel:(id)arg1;
- (id)buildTableView;
- (void)configureSelf;
- (void)showUnexpectedResult:(unsigned long long)arg1;
- (void)removeUnexpectedViewIfNeed;
- (void)fetchPrizeInfosAtPage:(unsigned long long)arg1;
- (void)fetchCachedPrizes;
- (void)fetchPrizeDetailData:(unsigned long long)arg1 prizeId:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithTab:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

