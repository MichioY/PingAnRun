//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PARSBaseViewController.h"

@class PARSHealthCourseListViewController, PARSNavigationSegmentedControl, PARSScrollTabController;

@interface PARSHealthCourseMainViewController : PARSBaseViewController
{
    PARSNavigationSegmentedControl *_segmentedControl;
    PARSHealthCourseListViewController *_allCourseListViewController;
    PARSHealthCourseListViewController *_browsedCourseListViewController;
    PARSScrollTabController *_tabController;
}

@property(retain, nonatomic) PARSScrollTabController *tabController; // @synthesize tabController=_tabController;
@property(retain, nonatomic) PARSHealthCourseListViewController *browsedCourseListViewController; // @synthesize browsedCourseListViewController=_browsedCourseListViewController;
@property(retain, nonatomic) PARSHealthCourseListViewController *allCourseListViewController; // @synthesize allCourseListViewController=_allCourseListViewController;
@property(retain, nonatomic) PARSNavigationSegmentedControl *segmentedControl; // @synthesize segmentedControl=_segmentedControl;
- (void).cxx_destruct;
- (void)setupSubviews;
- (void)viewDidLoad;

@end

