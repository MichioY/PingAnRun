//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSAttributedString, NSMutableArray, NSString, PARSAlertActionButton, UIControl, UIImage, UIImageView, UILabel, UIProgressView, UITextField, UIWindow;

@interface PARSAlertView : UIView
{
    _Bool _isActive;
    _Bool _canClose;
    _Bool _isModal;
    long long _messageAlignment;
    long long _buttonStyle;
    double _progress;
    NSString *_title;
    UIImage *_image;
    NSString *_message;
    NSAttributedString *_messageAttibuteString;
    UIWindow *_origianlKeyWindow;
    id _parentVC;
    UIControl *_bgView;
    UIView *_mainView;
    UIImageView *_imageView;
    UILabel *_titleLabel;
    UILabel *_messageLabel;
    UITextField *_textField;
    UIProgressView *_progressView;
    PARSAlertActionButton *_closeButton;
    UIWindow *_alertWindow;
    NSMutableArray *_btnArray;
    id _msgText;
}

@property(retain, nonatomic) id msgText; // @synthesize msgText=_msgText;
@property(retain, nonatomic) NSMutableArray *btnArray; // @synthesize btnArray=_btnArray;
@property(retain, nonatomic) UIWindow *alertWindow; // @synthesize alertWindow=_alertWindow;
@property(retain, nonatomic) PARSAlertActionButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) UIProgressView *progressView; // @synthesize progressView=_progressView;
@property(retain, nonatomic) UITextField *textField; // @synthesize textField=_textField;
@property(retain, nonatomic) UILabel *messageLabel; // @synthesize messageLabel=_messageLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UIView *mainView; // @synthesize mainView=_mainView;
@property(retain, nonatomic) UIControl *bgView; // @synthesize bgView=_bgView;
@property(nonatomic) __weak id parentVC; // @synthesize parentVC=_parentVC;
@property(nonatomic) __weak UIWindow *origianlKeyWindow; // @synthesize origianlKeyWindow=_origianlKeyWindow;
@property(retain, nonatomic) NSAttributedString *messageAttibuteString; // @synthesize messageAttibuteString=_messageAttibuteString;
@property(copy, nonatomic) NSString *message; // @synthesize message=_message;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) double progress; // @synthesize progress=_progress;
@property(nonatomic) long long buttonStyle; // @synthesize buttonStyle=_buttonStyle;
@property(nonatomic) long long messageAlignment; // @synthesize messageAlignment=_messageAlignment;
@property(nonatomic) _Bool isModal; // @synthesize isModal=_isModal;
@property(nonatomic) _Bool canClose; // @synthesize canClose=_canClose;
@property(nonatomic) _Bool isActive; // @synthesize isActive=_isActive;
- (void).cxx_destruct;
- (void)dismiss;
- (void)animationDidStart;
- (void)showWindow;
- (void)active;
- (void)keyboardShow:(id)arg1;
- (void)keyboardHide:(id)arg1;
- (void)addDestructiveButton:(id)arg1 alignment:(long long)arg2 action:(CDUnknownBlockType)arg3;
- (void)addDeleteButton:(id)arg1 alignment:(long long)arg2 action:(CDUnknownBlockType)arg3;
- (void)addButton:(id)arg1 alignment:(long long)arg2 action:(CDUnknownBlockType)arg3;
- (void)bindToViewController:(id)arg1;
- (id)layoutRectHorizontalButtonWithHorizontalBtnArray:(id)arg1 originalView:(id)arg2;
- (id)layoutRectVerticalButtonWithVerticalButton:(id)arg1 originalView:(id)arg2;
- (void)drawLeftSeperator:(id)arg1;
- (void)drawTopSeperator:(id)arg1;
- (void)drawButtonSeperator:(id)arg1;
- (id)layoutPlainHorizontalButtonWithHorizontalBtnArray:(id)arg1 originalView:(id)arg2;
- (id)layoutPlainVerticalButtonWithVerticalButton:(id)arg1 originalView:(id)arg2;
- (double)gapWithOriginalView:(id)arg1;
- (void)reloadConstraints;
- (struct CGSize)boundRectWithText:(id)arg1 fontSize:(double)arg2;
- (void)layoutMessageLabel;
- (void)layoutTitleLabel;
- (void)pressBtn:(id)arg1;
- (void)pressBgView;
- (id)buildButton:(id)arg1 color:(id)arg2 alignment:(long long)arg3 action:(CDUnknownBlockType)arg4;
- (void)addCloseBtn:(CDUnknownBlockType)arg1;
@property(copy, nonatomic) NSString *inputText;
- (id)init;
- (void)dealloc;

@end

