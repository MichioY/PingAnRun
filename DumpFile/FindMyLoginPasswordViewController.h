//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "UITextFieldDelegate.h"

@class NSString, UIButton, UITextField;

@interface FindMyLoginPasswordViewController : UIViewController <UITextFieldDelegate>
{
    UITextField *tfView1;
    UIButton *nextBtn;
    NSString *_account;
}

@property(copy, nonatomic) NSString *account; // @synthesize account=_account;
- (void).cxx_destruct;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)didReceiveMemoryWarning;
- (void)nextVC:(id)arg1;
- (void)sendRequest;
- (void)setBaseData;
- (void)popSelfView;
- (void)setBaseView;
- (void)viewDidLoad;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

