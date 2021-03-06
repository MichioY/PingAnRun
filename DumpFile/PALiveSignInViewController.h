//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

@class PALiveRoomInfo, PALiveSignInListView, PALiveSignInListViewModel;

@interface PALiveSignInViewController : UIViewController
{
    PALiveSignInListViewModel *_viewModel;
    PALiveRoomInfo *_roomInfo;
    PALiveSignInListView *_listView;
}

@property(retain, nonatomic) PALiveSignInListView *listView; // @synthesize listView=_listView;
@property(retain, nonatomic) PALiveRoomInfo *roomInfo; // @synthesize roomInfo=_roomInfo;
@property(retain, nonatomic) PALiveSignInListViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (void)onTapNavigationBarBackButton:(id)arg1;
- (void)customNavigationBarBackButton;
- (void)didReceiveMemoryWarning;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithRoomInfo:(id)arg1;

@end

