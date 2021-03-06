//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PARSBaseViewController.h"

#import "UITextFieldDelegate.h"

@class NSString, UIActivityIndicatorView, UIButton, UITextField;

@interface VerifyAccountViewController : PARSBaseViewController <UITextFieldDelegate>
{
    UITextField *_phoneNum;
    UITextField *_password;
    UIActivityIndicatorView *_indicator;
    UIButton *_confirmBtn;
    long long _loginSource;
}

@property(nonatomic) long long loginSource; // @synthesize loginSource=_loginSource;
- (void).cxx_destruct;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)stopNetworkAnimation;
- (void)startNetworkAnimating;
- (void)back;
- (void)login:(id)arg1;
- (void)configuration;
- (void)viewDidLoad;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

