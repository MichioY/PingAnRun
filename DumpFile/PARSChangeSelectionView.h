//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIButton, UITextField;

@interface PARSChangeSelectionView : UIView
{
    UITextField *_locationField;
    UITextField *_sexField;
    UITextField *_ageField;
    UIButton *_confirmButton;
    UIView *_locationView;
    UIView *_sexView;
    UIView *_ageView;
    UIView *_confirmView;
}

@property(retain, nonatomic) UIView *confirmView; // @synthesize confirmView=_confirmView;
@property(retain, nonatomic) UIView *ageView; // @synthesize ageView=_ageView;
@property(retain, nonatomic) UIView *sexView; // @synthesize sexView=_sexView;
@property(retain, nonatomic) UIView *locationView; // @synthesize locationView=_locationView;
@property(retain, nonatomic) UIButton *confirmButton; // @synthesize confirmButton=_confirmButton;
@property(retain, nonatomic) UITextField *ageField; // @synthesize ageField=_ageField;
@property(retain, nonatomic) UITextField *sexField; // @synthesize sexField=_sexField;
@property(retain, nonatomic) UITextField *locationField; // @synthesize locationField=_locationField;
- (void).cxx_destruct;
- (void)initUI;
- (id)initWithFrame:(struct CGRect)arg1;

@end
