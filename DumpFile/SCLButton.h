//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIButton.h"

@class SCLTimerDisplay, UIColor;

@interface SCLButton : UIButton
{
    long long _actionType;
    CDUnknownBlockType _actionBlock;
    CDUnknownBlockType _validationBlock;
    CDUnknownBlockType _completeButtonFormatBlock;
    CDUnknownBlockType _buttonFormatBlock;
    UIColor *_defaultBackgroundColor;
    id _target;
    SEL _selector;
    SCLTimerDisplay *_timer;
}

@property(retain, nonatomic) SCLTimerDisplay *timer; // @synthesize timer=_timer;
@property SEL selector; // @synthesize selector=_selector;
@property(retain) id target; // @synthesize target=_target;
@property(retain, nonatomic) UIColor *defaultBackgroundColor; // @synthesize defaultBackgroundColor=_defaultBackgroundColor;
@property(copy, nonatomic) CDUnknownBlockType buttonFormatBlock; // @synthesize buttonFormatBlock=_buttonFormatBlock;
@property(copy, nonatomic) CDUnknownBlockType completeButtonFormatBlock; // @synthesize completeButtonFormatBlock=_completeButtonFormatBlock;
@property(copy, nonatomic) CDUnknownBlockType validationBlock; // @synthesize validationBlock=_validationBlock;
@property(copy, nonatomic) CDUnknownBlockType actionBlock; // @synthesize actionBlock=_actionBlock;
@property long long actionType; // @synthesize actionType=_actionType;
- (void).cxx_destruct;
- (id)lighterColorForColor:(id)arg1;
- (id)darkerColorForColor:(id)arg1;
- (void)parseConfig:(id)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (void)setTitle:(id)arg1 forState:(unsigned long long)arg2;
- (void)setup;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

