//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PARSBaseViewController.h"

#import "LoginMemberDelegate.h"
#import "MFMessageComposeViewControllerDelegate.h"
#import "PARSRegiserViewDelegate.h"

@class NSString, PARSRegisterView;

@interface PARSRegisterViewController : PARSBaseViewController <PARSRegiserViewDelegate, LoginMemberDelegate, MFMessageComposeViewControllerDelegate>
{
    long long _latestNavOperation;
    PARSRegisterView *_registerView;
}

@property(retain, nonatomic) PARSRegisterView *registerView; // @synthesize registerView=_registerView;
@property(nonatomic) long long latestNavOperation; // @synthesize latestNavOperation=_latestNavOperation;
- (void).cxx_destruct;
- (void)messageComposeViewController:(id)arg1 didFinishWithResult:(long long)arg2;
- (void)dismissAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)dismiss;
- (void)presentLoginMemberVCWithSource:(long long)arg1;
- (void)openMessage:(id)arg1;
- (void)showAgreement;
- (_Bool)shouldHideNavigationBar;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
