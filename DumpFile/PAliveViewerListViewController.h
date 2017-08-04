//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PALiveBaseTableViewVC.h"

@class PALiveRoomInfo;

@interface PAliveViewerListViewController : PALiveBaseTableViewVC
{
    id <PAliveViewerListVCDelegate> _delegate;
    PALiveRoomInfo *_roomInfo;
    long long _totalCount;
    long long _pageIndex;
}

@property(nonatomic) long long pageIndex; // @synthesize pageIndex=_pageIndex;
@property(nonatomic) long long totalCount; // @synthesize totalCount=_totalCount;
@property(retain, nonatomic) PALiveRoomInfo *roomInfo; // @synthesize roomInfo=_roomInfo;
@property(nonatomic) __weak id <PAliveViewerListVCDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)requestPageData;
- (void)pullToLoadMoreDidTrigger;
- (void)pullToRefreshDidTrigger;
- (void)onTapNavigationBarBackButton:(id)arg1;
- (void)customNavigationBarBackButton;
- (void)didReceiveMemoryWarning;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

@end
