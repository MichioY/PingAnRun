//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class PARSScrollTabController, UIViewController;

@protocol PARSScrollTabControllerDelegate <NSObject>
- (void)tabController:(PARSScrollTabController *)arg1 didEndScrollingAnimationInViewController:(UIViewController *)arg2;
- (void)tabController:(PARSScrollTabController *)arg1 didEndScrollViewController:(UIViewController *)arg2;
- (void)tabController:(PARSScrollTabController *)arg1 willBeginScrollViewController:(UIViewController *)arg2;
- (void)tabController:(PARSScrollTabController *)arg1 didSelectViewController:(UIViewController *)arg2;
@end

