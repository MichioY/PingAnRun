//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PARSBaseRefreshViewController.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSMutableArray, NSString, PARSNoProductView, PARSResultView, UITableView;

@interface PARSXuQiBaoViewController : PARSBaseRefreshViewController <UITableViewDelegate, UITableViewDataSource>
{
    _Bool _hasMoreData;
    _Bool _canLoadMoreData;
    _Bool _isloading;
    UITableView *_xuQiBaoTableView;
    long long _pageNo;
    long long _pageSize;
    PARSResultView *_retryView;
    NSMutableArray *_listInfos;
    PARSNoProductView *_emptyView;
}

@property(nonatomic) _Bool isloading; // @synthesize isloading=_isloading;
@property(retain, nonatomic) PARSNoProductView *emptyView; // @synthesize emptyView=_emptyView;
@property(retain, nonatomic) NSMutableArray *listInfos; // @synthesize listInfos=_listInfos;
@property(nonatomic) _Bool canLoadMoreData; // @synthesize canLoadMoreData=_canLoadMoreData;
@property(nonatomic) _Bool hasMoreData; // @synthesize hasMoreData=_hasMoreData;
@property(retain, nonatomic) PARSResultView *retryView; // @synthesize retryView=_retryView;
@property(nonatomic) long long pageSize; // @synthesize pageSize=_pageSize;
@property(nonatomic) long long pageNo; // @synthesize pageNo=_pageNo;
@property(retain, nonatomic) UITableView *xuQiBaoTableView; // @synthesize xuQiBaoTableView=_xuQiBaoTableView;
- (void).cxx_destruct;
- (void)viewWillAppear:(_Bool)arg1;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (void)didSelectResultView;
- (void)onLoadMore;
- (void)setupSubView;
- (void)onRefresh;
- (void)loadCache;
- (void)loadData;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
