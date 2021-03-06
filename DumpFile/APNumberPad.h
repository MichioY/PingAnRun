//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UIInputViewAudioFeedback.h"

@class APNumberButton, NSArray, NSString, UIButton, UILabel, UIResponder<UITextInput>, UITouch;

@interface APNumberPad : UIView <UIInputViewAudioFeedback>
{
    _Bool _clearButtonLongPressGesture;
    struct {
        unsigned int textInputSupportsShouldChangeTextInRange:1;
        unsigned int delegateSupportsTextFieldShouldChangeCharactersInRange:1;
        unsigned int delegateSupportsTextViewShouldChangeTextInRange:1;
    } _delegateFlags;
    UIButton *_clearButton;
    Class _styleClass;
    UIView *_tipsView;
    NSArray *_numberButtons;
    APNumberButton *_leftButton;
    id <APNumberPadDelegate> _delegate;
    UIResponder<UITextInput> *_textInput;
    UITouch *_lastTouch;
    UILabel *_titleLabel;
}

+ (struct _NSRange)selectedRange:(id)arg1;
+ (id)numberPadWithDelegate:(id)arg1 numberPadStyleClass:(Class)arg2;
+ (id)numberPadWithDelegate:(id)arg1;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak UITouch *lastTouch; // @synthesize lastTouch=_lastTouch;
@property(nonatomic) __weak UIResponder<UITextInput> *textInput; // @synthesize textInput=_textInput;
@property(nonatomic) __weak id <APNumberPadDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) APNumberButton *leftButton; // @synthesize leftButton=_leftButton;
@property(copy, nonatomic) NSArray *numberButtons; // @synthesize numberButtons=_numberButtons;
@property(retain, nonatomic) UIView *tipsView; // @synthesize tipsView=_tipsView;
@property(retain, nonatomic) Class styleClass; // @synthesize styleClass=_styleClass;
@property(retain, nonatomic) UIButton *clearButton; // @synthesize clearButton=_clearButton;
- (void).cxx_destruct;
- (id)functionButton;
- (id)numberButton:(int)arg1;
@property(readonly, nonatomic) _Bool enableInputClicksWhenVisible;
- (void)clearButtonActionLongPress;
- (void)longPressGestureRecognizerAction:(id)arg1;
- (void)functionButtonAction:(id)arg1;
- (void)clearButtonAction;
- (void)numberButtonAction:(id)arg1;
@property(readonly, nonatomic) UIButton *leftFunctionButton;
- (void)performLastTouchAction;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)textDidEndEditing:(id)arg1;
- (void)textDidBeginEditing:(id)arg1;
- (void)addNotificationsObservers;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1 numberPadStyleClass:(Class)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

