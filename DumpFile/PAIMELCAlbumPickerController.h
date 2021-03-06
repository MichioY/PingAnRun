//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewController.h"

#import "PAIMELCAssetSelectionDelegate.h"

@class ALAssetsLibrary, NSMutableArray, NSString;

@interface PAIMELCAlbumPickerController : UITableViewController <PAIMELCAssetSelectionDelegate>
{
    int _filterType;
    id <PAIMELCAssetSelectionDelegate> _parent;
    NSMutableArray *_assetGroups;
    ALAssetsLibrary *_library;
    id <PAIMELCAssetPickerFilterDelegate> _assetPickerFilterDelegate;
}

@property(nonatomic) __weak id <PAIMELCAssetPickerFilterDelegate> assetPickerFilterDelegate; // @synthesize assetPickerFilterDelegate=_assetPickerFilterDelegate;
@property(nonatomic) int filterType; // @synthesize filterType=_filterType;
@property(retain, nonatomic) ALAssetsLibrary *library; // @synthesize library=_library;
@property(retain, nonatomic) NSMutableArray *assetGroups; // @synthesize assetGroups=_assetGroups;
@property(nonatomic) __weak id <PAIMELCAssetSelectionDelegate> parent; // @synthesize parent=_parent;
- (void).cxx_destruct;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)selectedAssets:(id)arg1;
- (void)cancelSelectionAsset:(id)arg1;
- (_Bool)shouldSelectAsset:(id)arg1 previousCount:(unsigned long long)arg2;
- (void)reloadTableView;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

