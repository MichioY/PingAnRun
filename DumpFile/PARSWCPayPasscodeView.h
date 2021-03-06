//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PARSWangCaiViewProcotol.h"
#import "UITextFieldDelegate.h"

@class NSArray, NSString, UITextField, UIView, UIViewController;

@interface PARSWCPayPasscodeView : NSObject <UITextFieldDelegate, PARSWangCaiViewProcotol>
{
    double _passcodeViewOriginY;
    id <PARSWCPayPasscodeTextViewDelegate> _delegate;
    UIView *_passwordTextView;
    UITextField *_passwordTextField;
    NSArray *_digitTextFields;
    UIView *_view;
    UIViewController *_parentController;
}

@property(nonatomic) __weak UIViewController *parentController; // @synthesize parentController=_parentController;
@property(nonatomic) __weak UIView *view; // @synthesize view=_view;
@property(retain, nonatomic) NSArray *digitTextFields; // @synthesize digitTextFields=_digitTextFields;
@property(retain, nonatomic) UITextField *passwordTextField; // @synthesize passwordTextField=_passwordTextField;
@property(retain, nonatomic) UIView *passwordTextView; // @synthesize passwordTextView=_passwordTextView;
@property(nonatomic) __weak id <PARSWCPayPasscodeTextViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) double passcodeViewOriginY; // @synthesize passcodeViewOriginY=_passcodeViewOriginY;
- (void).cxx_destruct;
@property(readonly, nonatomic) struct CGRect passwordTextViewFrame;
- (void)enablePasswordTextField:(_Bool)arg1;
- (void)resetDigitFields;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (id)buildDigitField;
- (void)attach:(id)arg1 withViewController:(id)arg2;
- (void)attach:(id)arg1;
- (void)dettach;
- (id)viewWithRect:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

