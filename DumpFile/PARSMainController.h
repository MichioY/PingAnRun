//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UIAlertViewDelegate.h"

@class MySideMenuRootViewController, NSString, PARSNavigationController, PARSSignMainViewController, PARSWelcomeViewController, UIWindow;

@interface PARSMainController : NSObject <UIAlertViewDelegate>
{
    _Bool _inLoginTimeOut;
    PARSNavigationController *_rootNavController;
    MySideMenuRootViewController *_mainViewController;
    PARSSignMainViewController *_signMainViewController;
    PARSWelcomeViewController *_welcomeViewController;
    UIWindow *_splashAdvertWindow;
    CDUnknownBlockType _completion;
}

+ (void)dismissAnydoorVC:(CDUnknownBlockType)arg1;
+ (_Bool)isAnydoorVCPresented;
+ (void)showOnTopViewController:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)showOnTopViewController:(id)arg1;
+ (id)topViewController;
+ (id)topNavController;
+ (id)tabNavController:(long long)arg1;
+ (id)currentTabNavController;
+ (void)gotoTab:(long long)arg1;
+ (id)rootTabbarVC;
+ (id)rootSideMenuVC;
+ (id)rootNavController;
+ (void)gotoSignView;
+ (void)gotoMainView;
+ (void)checkToShowView:(CDUnknownBlockType)arg1;
+ (id)sharedMainController;
@property(nonatomic) _Bool inLoginTimeOut; // @synthesize inLoginTimeOut=_inLoginTimeOut;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(retain, nonatomic) UIWindow *splashAdvertWindow; // @synthesize splashAdvertWindow=_splashAdvertWindow;
@property(retain, nonatomic) PARSWelcomeViewController *welcomeViewController; // @synthesize welcomeViewController=_welcomeViewController;
@property(retain, nonatomic) PARSSignMainViewController *signMainViewController; // @synthesize signMainViewController=_signMainViewController;
@property(retain, nonatomic) MySideMenuRootViewController *mainViewController; // @synthesize mainViewController=_mainViewController;
@property(retain, nonatomic) PARSNavigationController *rootNavController; // @synthesize rootNavController=_rootNavController;
- (void).cxx_destruct;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)didLoginTimeOut:(id)arg1;
- (void)didLogOut:(id)arg1;
- (void)didLogInSuccess:(id)arg1;
- (void)gotoUpdateFeaturesGuideViewController;
- (void)gotoWelcomeView;
- (void)gotoWelcomeOrMainView;
- (_Bool)checkToShowSplashAdvertPage;
- (void)gotoSplashAdvertPageWithCompletion:(CDUnknownBlockType)arg1;
- (void)gotoSignView;
- (void)gotoMainView;
- (void)dispatchPocketE;
- (void)checkToShowViewWithCompletion:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

