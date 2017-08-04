//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PARSBaseViewController.h"

#import "PARSScrollTabControllerDelegate.h"

@class NSString, PARSAddressViewController, PARSScrollTabController;

@interface PARSCommonlyInforViewController : PARSBaseViewController <PARSScrollTabControllerDelegate>
{
    PARSScrollTabController *_tabController;
    PARSAddressViewController *_addressVC;
}

@property(retain, nonatomic) PARSAddressViewController *addressVC; // @synthesize addressVC=_addressVC;
@property(retain, nonatomic) PARSScrollTabController *tabController; // @synthesize tabController=_tabController;
- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (void)tabController:(id)arg1 didSelectViewController:(id)arg2;
- (void)addAddress;
- (void)buildRightBarButtonItem;
- (void)initUI;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
