//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PARSBaseRefreshViewController.h"

#import "PARSFinanceHomeSearchViewDelegate.h"

@class NSString, PARSFinanceHomeCollectionViewHandler, PARSFinanceHomeSearchView, UICollectionView;

@interface PARSFinanceHomeViewController : PARSBaseRefreshViewController <PARSFinanceHomeSearchViewDelegate>
{
    UICollectionView *_collectionView;
    PARSFinanceHomeCollectionViewHandler *_collectionViewHandler;
    PARSFinanceHomeSearchView *_searchView;
}

@property(retain, nonatomic) PARSFinanceHomeSearchView *searchView; // @synthesize searchView=_searchView;
@property(retain, nonatomic) PARSFinanceHomeCollectionViewHandler *collectionViewHandler; // @synthesize collectionViewHandler=_collectionViewHandler;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
- (void).cxx_destruct;
- (void)gotoOnlineCustomerServicesCenter;
- (void)didTapVoiceSearchButton:(id)arg1;
- (void)didTapSearchButton:(id)arg1;
- (void)setupNavigationBar;
- (void)loadData;
- (void)refreshData;
- (void)checkMAccountStatus;
- (void)onRefresh;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
