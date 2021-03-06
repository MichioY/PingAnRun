//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PARSBaseViewController.h"

#import "UIAlertViewDelegate.h"
#import "UITextFieldDelegate.h"

@class NSString, NSTimer, PARSSignAccountStatusInfo, UIButton, UILabel, UITextField, UIView;

@interface YZTFirstLoginViewController : PARSBaseViewController <UITextFieldDelegate, UIAlertViewDelegate>
{
    UILabel *tipLabel;
    UITextField *_phoneNum;
    UITextField *_valifyCode;
    UIButton *_loginBtn;
    UILabel *_noticeLabel;
    UIView *_containView;
    long long _countDownNum;
    _Bool _valifing;
    _Bool _registed;
    _Bool _isValid;
    _Bool _disappearing;
    _Bool _firstLogin;
    NSString *_partyNO;
    NSString *_toaName;
    NSString *_mobilePhone;
    long long _type;
    long long _from;
    NSTimer *_timer;
    NSString *_checkedAccount;
    PARSSignAccountStatusInfo *_accountInfo;
}

@property(retain, nonatomic) PARSSignAccountStatusInfo *accountInfo; // @synthesize accountInfo=_accountInfo;
@property(copy, nonatomic) NSString *checkedAccount; // @synthesize checkedAccount=_checkedAccount;
@property(nonatomic, getter=isRegisted) _Bool registed; // @synthesize registed=_registed;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(getter=isFirstLogin) _Bool firstLogin; // @synthesize firstLogin=_firstLogin;
@property(nonatomic) long long from; // @synthesize from=_from;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *mobilePhone; // @synthesize mobilePhone=_mobilePhone;
@property(retain, nonatomic) NSString *toaName; // @synthesize toaName=_toaName;
@property(retain, nonatomic) NSString *partyNO; // @synthesize partyNO=_partyNO;
- (void).cxx_destruct;
- (_Bool)textFieldShouldClear:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)back:(id)arg1;
- (void)dismissSelf;
- (void)valifyPhoneNumber:(CDUnknownBlockType)arg1;
- (void)showBindAlert:(CDUnknownBlockType)arg1;
- (void)pullMsgView:(id)arg1 autoReturn:(_Bool)arg2;
- (id)msgView;
- (void)hideKeyboard;
- (void)requestYZTBindDefaultMobileNum;
- (void)showPrivatePolicy:(id)arg1;
- (void)singleTap:(id)arg1;
- (void)goToVerifyLoginPsd;
- (void)goToVerifyPayPsd;
- (void)goToYZTMessageCodeView;
- (void)clickLoginBtn:(id)arg1;
- (void)resetView;
- (void)configuration;
- (void)dealloc;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

