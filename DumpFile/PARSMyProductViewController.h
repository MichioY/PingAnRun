//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PARSBaseRefreshViewController.h"

#import "PARSMyLifeAidProductCellDelegate.h"
#import "UIScrollViewDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSArray, NSString, PARSNoProductView, UITableView;

@interface PARSMyProductViewController : PARSBaseRefreshViewController <UITableViewDataSource, UITableViewDelegate, PARSMyLifeAidProductCellDelegate, UIScrollViewDelegate>
{
    _Bool _isLoading;
    long long _productType;
    PARSNoProductView *_noProductView;
    UITableView *_myProductTableView;
    NSArray *_myProducts;
}

@property(nonatomic) _Bool isLoading; // @synthesize isLoading=_isLoading;
@property(retain, nonatomic) NSArray *myProducts; // @synthesize myProducts=_myProducts;
@property(retain, nonatomic) UITableView *myProductTableView; // @synthesize myProductTableView=_myProductTableView;
@property(retain, nonatomic) PARSNoProductView *noProductView; // @synthesize noProductView=_noProductView;
@property(nonatomic) long long productType; // @synthesize productType=_productType;
- (void).cxx_destruct;
- (void)commentProduct:(id)arg1 withProductInfo:(id)arg2;
- (void)back;
- (void)jumpToProductDetailOldWay:(id)arg1;
- (void)jumpToProductDetail:(id)arg1;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (double)heightForRowAtIndexPath:(id)arg1;
- (void)analyzeData:(id)arg1;
- (void)refreshData;
- (void)loadCacheData;
- (void)onRefresh;
- (void)checkToShowEmptyView;
- (void)handleError:(id)arg1;
- (id)cellForRowAtIndexPath:(id)arg1 tableView:(id)arg2;
- (void)buildMyProductTableView;
- (void)dealloc;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

