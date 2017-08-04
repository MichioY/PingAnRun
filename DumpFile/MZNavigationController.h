//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UINavigationController.h"

#import "UIGestureRecognizerDelegate.h"
#import "UINavigationControllerDelegate.h"

@class MZNavigationControllerDelegateProxy, NSMutableArray, NSString, UIViewController;

@interface MZNavigationController : UINavigationController <UINavigationControllerDelegate, UIGestureRecognizerDelegate>
{
    _Bool _supportPopGesture;
    _Bool _transitionInProgress;
    long long _latestNavOperation;
    MZNavigationControllerDelegateProxy *_delegateProxy;
    NSMutableArray *_peddingBlocks;
}

@property(nonatomic, getter=isTransitionInProgress) _Bool transitionInProgress; // @synthesize transitionInProgress=_transitionInProgress;
@property(retain, nonatomic) NSMutableArray *peddingBlocks; // @synthesize peddingBlocks=_peddingBlocks;
@property(retain, nonatomic) MZNavigationControllerDelegateProxy *delegateProxy; // @synthesize delegateProxy=_delegateProxy;
@property(nonatomic) long long latestNavOperation; // @synthesize latestNavOperation=_latestNavOperation;
- (void).cxx_destruct;
- (void)runNextTransition;
- (void)addTransitionBlock:(CDUnknownBlockType)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(_Bool)arg3;
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(_Bool)arg3;
- (void)checkNavigationBarHiddenAnimated:(_Bool)arg1;
- (void)checkChildViewControllerNavigationBarHidden:(id)arg1 animated:(_Bool)arg2;
- (_Bool)canPop;
- (_Bool)canPush;
- (void)commonInit;
- (void)pushViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)updatePopGestureSupport;
@property(nonatomic) _Bool supportPopGesture; // @synthesize supportPopGesture=_supportPopGesture;
- (long long)preferredInterfaceOrientation;
- (void)interfaceOrientation:(long long)arg1;
- (void)forceToOrientate;
- (id)popToRootViewControllerAnimated:(_Bool)arg1;
- (id)popToViewController:(id)arg1 animated:(_Bool)arg2;
- (id)popViewControllerAnimated:(_Bool)arg1;
- (void)pushViewController:(id)arg1 animated:(_Bool)arg2;
- (void)setViewControllers:(id)arg1 animated:(_Bool)arg2;
- (void)setDelegate:(id)arg1;
@property(readonly, nonatomic) UIViewController *rootViewController;
- (_Bool)shouldAutorotate;
- (unsigned long long)supportedInterfaceOrientations;
- (long long)preferredStatusBarStyle;
- (void)viewDidLoad;
- (void)awakeFromNib;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
