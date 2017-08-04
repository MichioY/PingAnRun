//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

@class CALayer, NSArray, UIButton, UILabel, UITapGestureRecognizer, UIView, UIWindow;

@interface PXAlertView : UIViewController
{
    _Bool _visible;
    _Bool _buttonsShouldStack;
    UIWindow *_mainWindow;
    UIWindow *_alertWindow;
    UIView *_backgroundView;
    UIView *_alertView;
    UILabel *_titleLabel;
    UIView *_contentView;
    UILabel *_messageLabel;
    UIButton *_cancelButton;
    UIButton *_otherButton;
    NSArray *_buttons;
    double _buttonsY;
    CALayer *_verticalLine;
    UITapGestureRecognizer *_tap;
    CDUnknownBlockType _completion;
}

+ (id)showAlertWithTitle:(id)arg1 message:(id)arg2 cancelTitle:(id)arg3 otherTitles:(id)arg4 contentView:(id)arg5 completion:(CDUnknownBlockType)arg6;
+ (id)showAlertWithTitle:(id)arg1 message:(id)arg2 cancelTitle:(id)arg3 otherTitle:(id)arg4 buttonsShouldStack:(_Bool)arg5 contentView:(id)arg6 completion:(CDUnknownBlockType)arg7;
+ (id)showAlertWithTitle:(id)arg1 message:(id)arg2 cancelTitle:(id)arg3 otherTitle:(id)arg4 contentView:(id)arg5 completion:(CDUnknownBlockType)arg6;
+ (id)showAlertWithTitle:(id)arg1 message:(id)arg2 cancelTitle:(id)arg3 otherTitles:(id)arg4 completion:(CDUnknownBlockType)arg5;
+ (id)showAlertWithTitle:(id)arg1 message:(id)arg2 cancelTitle:(id)arg3 otherTitle:(id)arg4 buttonsShouldStack:(_Bool)arg5 completion:(CDUnknownBlockType)arg6;
+ (id)showAlertWithTitle:(id)arg1 message:(id)arg2 cancelTitle:(id)arg3 otherTitle:(id)arg4 completion:(CDUnknownBlockType)arg5 parameterDic:(id)arg6;
+ (id)showAlertWithTitle:(id)arg1 message:(id)arg2 cancelTitle:(id)arg3 completion:(CDUnknownBlockType)arg4;
+ (id)showAlertWithTitle:(id)arg1 message:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (id)showAlertWithTitle:(id)arg1 message:(id)arg2;
+ (id)showAlertWithTitle:(id)arg1;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(retain, nonatomic) UITapGestureRecognizer *tap; // @synthesize tap=_tap;
@property(retain, nonatomic) CALayer *verticalLine; // @synthesize verticalLine=_verticalLine;
@property(nonatomic) double buttonsY; // @synthesize buttonsY=_buttonsY;
@property(retain, nonatomic) NSArray *buttons; // @synthesize buttons=_buttons;
@property(retain, nonatomic) UIButton *otherButton; // @synthesize otherButton=_otherButton;
@property(retain, nonatomic) UIButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(retain, nonatomic) UILabel *messageLabel; // @synthesize messageLabel=_messageLabel;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *alertView; // @synthesize alertView=_alertView;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) UIWindow *alertWindow; // @synthesize alertWindow=_alertWindow;
@property(retain, nonatomic) UIWindow *mainWindow; // @synthesize mainWindow=_mainWindow;
@property(nonatomic) _Bool buttonsShouldStack; // @synthesize buttonsShouldStack=_buttonsShouldStack;
@property(nonatomic, getter=isVisible) _Bool visible; // @synthesize visible=_visible;
- (void).cxx_destruct;
- (void)setTapToDismissEnabled:(_Bool)arg1;
- (void)dismissWithClickedButtonIndex:(long long)arg1 animated:(_Bool)arg2;
- (long long)addButtonWithTitle:(id)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (_Bool)prefersStatusBarHidden;
- (id)lineLayer;
- (void)dismissAlertAnimation;
- (void)showAlertAnimation;
- (void)dismiss:(id)arg1 animated:(_Bool)arg2;
- (void)dismiss:(id)arg1;
- (void)hide;
- (void)showBackgroundView;
- (void)showInternal;
- (void)show;
- (void)clearBackgroundColorForButton:(id)arg1;
- (void)setBackgroundColorForButton:(id)arg1;
- (void)resizeViews;
- (void)setupGestures;
- (double)statusBarOffset;
- (struct CGPoint)centerWithFrame:(struct CGRect)arg1;
- (id)genericButton;
- (struct CGRect)adjustLabelFrameHeight:(id)arg1;
- (struct CGRect)frameForOrientation:(long long)arg1;
- (id)initWithTitle:(id)arg1 message:(id)arg2 cancelTitle:(id)arg3 otherTitles:(id)arg4 buttonsShouldStack:(_Bool)arg5 contentView:(id)arg6 completion:(CDUnknownBlockType)arg7;
- (id)initWithTitle:(id)arg1 message:(id)arg2 cancelTitle:(id)arg3 otherTitle:(id)arg4 buttonsShouldStack:(_Bool)arg5 contentView:(id)arg6 completion:(CDUnknownBlockType)arg7;
- (id)windowWithLevel:(double)arg1;

@end
