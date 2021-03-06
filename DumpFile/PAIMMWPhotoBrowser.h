//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PARSBaseViewController.h"

#import "MFMailComposeViewControllerDelegate.h"
#import "UIActionSheetDelegate.h"
#import "UIGestureRecognizerDelegate.h"
#import "UIScrollViewDelegate.h"

@class NSArray, NSMutableArray, NSMutableSet, NSString, NSTimer, PAIMMBProgressHUD, PAIMTXTActionSheet, UIActivityViewController, UIBarButtonItem, UIButton, UIColor, UIImage, UIPageControl, UIScrollView, UIToolbar;

@interface PAIMMWPhotoBrowser : PARSBaseViewController <UIScrollViewDelegate, UIActionSheetDelegate, MFMailComposeViewControllerDelegate, UIGestureRecognizerDelegate>
{
    unsigned long long _photoCount;
    NSMutableArray *_photos;
    NSArray *_depreciatedPhotoData;
    UIScrollView *_pagingScrollView;
    UIPageControl *_pageControl;
    NSMutableSet *_visiblePages;
    NSMutableSet *_recycledPages;
    unsigned long long _currentPageIndex;
    unsigned long long _pageIndexBeforeRotation;
    UIToolbar *_toolbar;
    NSTimer *_controlVisibilityTimer;
    UIBarButtonItem *_previousButton;
    UIBarButtonItem *_nextButton;
    UIBarButtonItem *_actionButton;
    PAIMMBProgressHUD *_progressHUD;
    PAIMTXTActionSheet *_actionsSheet;
    _Bool _previousNavBarHidden;
    _Bool _previousNavToolbarHidden;
    long long _previousNavBarStyle;
    long long _previousStatusBarStyle;
    UIColor *_previousNavBarTintColor;
    UIColor *_previousNavBarBarTintColor;
    UIBarButtonItem *_previousViewControllerBackButton;
    UIImage *_previousNavigationBarBackgroundImageDefault;
    UIImage *_previousNavigationBarBackgroundImageLandscapePhone;
    _Bool _isVCBasedStatusBarAppearance;
    _Bool _statusBarShouldBeHidden;
    _Bool _displayActionButton;
    _Bool _leaveStatusBarAlone;
    _Bool _performingLayout;
    _Bool _rotating;
    _Bool _viewIsActive;
    _Bool _didSavePreviousStateOfNavBar;
    UIButton *bottomButton;
    UIButton *sureImageButton;
    _Bool isFile;
    _Bool _zoomPhotosToFill;
    _Bool _displayNavArrows;
    _Bool _dismissWithTap;
    _Bool _isSelectPhoto;
    _Bool _showPageControl;
    _Bool _isTimedMessage;
    id <PAIMMWPhotoBrowserDelegate> _delegate;
    unsigned long long _currentIndex;
    UIActivityViewController *_activityViewController;
}

@property(retain, nonatomic) UIActivityViewController *activityViewController; // @synthesize activityViewController=_activityViewController;
@property(nonatomic) _Bool isTimedMessage; // @synthesize isTimedMessage=_isTimedMessage;
@property(nonatomic) _Bool showPageControl; // @synthesize showPageControl=_showPageControl;
@property(nonatomic) _Bool isSelectPhoto; // @synthesize isSelectPhoto=_isSelectPhoto;
@property(nonatomic) _Bool dismissWithTap; // @synthesize dismissWithTap=_dismissWithTap;
@property(readonly, nonatomic) unsigned long long currentIndex; // @synthesize currentIndex=_currentIndex;
@property(nonatomic) _Bool displayActionButton; // @synthesize displayActionButton=_displayActionButton;
@property(nonatomic) _Bool displayNavArrows; // @synthesize displayNavArrows=_displayNavArrows;
@property(nonatomic) _Bool zoomPhotosToFill; // @synthesize zoomPhotosToFill=_zoomPhotosToFill;
@property(nonatomic) __weak id <PAIMMWPhotoBrowserDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool isFile; // @synthesize isFile;
- (void).cxx_destruct;
- (_Bool)shouldHideNavigationBar;
- (void)mailComposeController:(id)arg1 didFinishWithResult:(long long)arg2 error:(id)arg3;
- (void)actuallyEmailPhoto:(id)arg1;
- (void)emailPhoto;
- (void)actuallyCopyPhoto:(id)arg1;
- (void)copyPhoto;
- (void)image:(id)arg1 didFinishSavingWithError:(id)arg2 contextInfo:(void *)arg3;
- (void)actuallySavePhoto:(id)arg1;
- (void)savePhoto;
- (void)showProgressHUDCompleteMessage:(id)arg1;
- (void)hideProgressHUD:(_Bool)arg1;
- (void)showProgressHUDWithMessage:(id)arg1;
- (id)progressHUD;
- (void)actionSheet:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (void)dismissWithSingleTap;
- (void)actionButtonPressed:(id)arg1;
- (void)showActions:(id)arg1;
- (void)sendSelectedImage:(id)arg1;
- (void)doneButtonPressed:(id)arg1;
- (void)setCurrentPhotoIndex:(unsigned long long)arg1;
- (void)setInitialPageIndex:(unsigned long long)arg1;
- (void)toggleControls;
- (void)hideControls;
- (_Bool)areControlsHidden;
- (void)hideControlsAfterDelay;
- (void)cancelControlHiding;
- (long long)preferredStatusBarUpdateAnimation;
- (_Bool)prefersStatusBarHidden;
- (void)setControlsHidden:(_Bool)arg1 animated:(_Bool)arg2 permanent:(_Bool)arg3;
- (void)showNextPhotoAnimated:(_Bool)arg1;
- (void)showPreviousPhotoAnimated:(_Bool)arg1;
- (void)gotoNextPage;
- (void)gotoPreviousPage;
- (void)jumpToPageAtIndex:(unsigned long long)arg1 animated:(_Bool)arg2;
- (void)updateNavigation;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (struct CGRect)frameForCaptionView:(id)arg1 atIndex:(unsigned long long)arg2;
- (struct CGRect)frameForToolbarAtOrientation:(long long)arg1;
- (struct CGPoint)contentOffsetForPageAtIndex:(unsigned long long)arg1;
- (struct CGSize)contentSizeForPagingScrollView;
- (struct CGRect)frameForPageAtIndex:(unsigned long long)arg1;
- (struct CGRect)frameForPagingScrollView;
- (void)didStartViewingPageAtIndex:(unsigned long long)arg1;
- (id)dequeueRecycledPage;
- (void)configurePage:(id)arg1 forIndex:(unsigned long long)arg2;
- (id)pageDisplayingPhoto:(id)arg1;
- (id)pageDisplayedAtIndex:(unsigned long long)arg1;
- (_Bool)isDisplayingPageForIndex:(unsigned long long)arg1;
- (void)tilePages;
- (void)handleMWPhotoLoadingDidEndNotification:(id)arg1;
- (void)loadAdjacentPhotosIfNecessary:(id)arg1;
- (id)imageForPhoto:(id)arg1;
- (id)captionViewForPhotoAtIndex:(unsigned long long)arg1;
- (id)photoAtIndex:(unsigned long long)arg1;
- (unsigned long long)numberOfPhotos;
- (void)reloadData;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (_Bool)shouldAutorotate;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (void)viewWillLayoutSubviews;
- (void)restorePreviousNavBarAppearance:(_Bool)arg1;
- (void)storePreviousNavBarAppearance;
- (void)setNavBarAppearance:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (_Bool)presentingViewControllerPrefersStatusBarHidden;
- (void)viewDidUnload;
- (void)onBackBarButtonItem:(id)arg1;
- (void)backtohomeMehtod;
- (void)back;
- (void)selectCurrentPhoto:(id)arg1;
- (void)performLayout;
- (void)viewDidLoad;
- (void)didReceiveMemoryWarning;
- (void)releaseAllUnderlyingPhotos:(_Bool)arg1;
- (void)dealloc;
- (void)_initialisation;
- (id)initWithCoder:(id)arg1;
- (id)initWithPhotos:(id)arg1;
- (id)initWithDelegate:(id)arg1 isSelect:(_Bool)arg2;
- (id)initWithDelegate:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

