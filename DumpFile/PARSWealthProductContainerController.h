//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PARSBaseViewController.h"

#import "UIGestureRecognizerDelegate.h"

@class NSString, PARSWealthProductContainerView, PARSWealthProductContainerViewModel, UINavigationController;

@interface PARSWealthProductContainerController : PARSBaseViewController <UIGestureRecognizerDelegate>
{
    PARSWealthProductContainerViewModel *_viewModel;
    PARSWealthProductContainerView *_containerView;
    UINavigationController *_tempNavigationController;
}

@property(nonatomic) __weak UINavigationController *tempNavigationController; // @synthesize tempNavigationController=_tempNavigationController;
@property(retain, nonatomic) PARSWealthProductContainerView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) PARSWealthProductContainerViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithIdentifer:(id)arg1 title:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

