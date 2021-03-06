//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

@class NSObject<OS_dispatch_source>, NSString, UIButton, UILabel, UITextField;

@interface UserOtpValidateViewController : UIViewController
{
    NSString *_mobile;
    CDUnknownBlockType _successBlock;
    CDUnknownBlockType _failBlock;
    NSObject<OS_dispatch_source> *_timer;
    UITextField *_codeTxt;
    UIButton *_sendBtn;
    UIButton *_confirmBtn;
    UILabel *_tipLabel;
    long long _timeStep;
}

@property(nonatomic) long long timeStep; // @synthesize timeStep=_timeStep;
@property(retain, nonatomic) UILabel *tipLabel; // @synthesize tipLabel=_tipLabel;
@property(retain, nonatomic) UIButton *confirmBtn; // @synthesize confirmBtn=_confirmBtn;
@property(retain, nonatomic) UIButton *sendBtn; // @synthesize sendBtn=_sendBtn;
@property(retain, nonatomic) UITextField *codeTxt; // @synthesize codeTxt=_codeTxt;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *timer; // @synthesize timer=_timer;
@property(copy, nonatomic) CDUnknownBlockType failBlock; // @synthesize failBlock=_failBlock;
@property(copy, nonatomic) CDUnknownBlockType successBlock; // @synthesize successBlock=_successBlock;
@property(copy, nonatomic) NSString *mobile; // @synthesize mobile=_mobile;
- (void).cxx_destruct;
- (void)dealloc;
- (void)changeButton:(id)arg1 isEnable:(_Bool)arg2;
- (void)beginTheTime;
- (void)onConfirm:(id)arg1;
- (void)onGetSMSOtp:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)init;

@end

