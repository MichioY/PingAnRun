//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "UIAlertViewDelegate.h"

@class NSString;

@interface OrderListViewController : UIViewController <UIAlertViewDelegate>
{
}

- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)onClicked_NavigationLeftItem:(id)arg1;
- (void)onClicked_NavigationRightItem:(id)arg1;
- (void)addRightRegionOfNavigationBar;
- (void)addLeftRegionOfNavigationBar;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
