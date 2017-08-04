//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSAttributedString, NSString, UIButton, UILabel;

@interface PARSWealthOpenedView : UIView
{
    _Bool _hasLogin;
    _Bool _isUserhideValues;
    UILabel *_yieldTitleLabel;
    UILabel *_yieldValueLabel;
    UILabel *_remainTitleLabel;
    UILabel *_remainValueLabel;
    UIButton *_hideBtn;
    NSAttributedString *_yieldAttrStr;
    NSString *_remainStr;
    NSAttributedString *_hideYieldAttrStr;
    NSAttributedString *_hideRemainAttrStr;
}

@property(nonatomic) _Bool isUserhideValues; // @synthesize isUserhideValues=_isUserhideValues;
@property(retain, nonatomic) NSAttributedString *hideRemainAttrStr; // @synthesize hideRemainAttrStr=_hideRemainAttrStr;
@property(retain, nonatomic) NSAttributedString *hideYieldAttrStr; // @synthesize hideYieldAttrStr=_hideYieldAttrStr;
@property(retain, nonatomic) NSString *remainStr; // @synthesize remainStr=_remainStr;
@property(retain, nonatomic) NSAttributedString *yieldAttrStr; // @synthesize yieldAttrStr=_yieldAttrStr;
@property(retain, nonatomic) UIButton *hideBtn; // @synthesize hideBtn=_hideBtn;
@property(retain, nonatomic) UILabel *remainValueLabel; // @synthesize remainValueLabel=_remainValueLabel;
@property(retain, nonatomic) UILabel *remainTitleLabel; // @synthesize remainTitleLabel=_remainTitleLabel;
@property(retain, nonatomic) UILabel *yieldValueLabel; // @synthesize yieldValueLabel=_yieldValueLabel;
@property(retain, nonatomic) UILabel *yieldTitleLabel; // @synthesize yieldTitleLabel=_yieldTitleLabel;
@property(nonatomic) _Bool hasLogin; // @synthesize hasLogin=_hasLogin;
- (void).cxx_destruct;
- (void)tapHideBtn:(id)arg1;
- (void)hideValues:(_Bool)arg1;
- (void)updateHideStatus;
- (void)updateWithYield:(double)arg1 remain:(double)arg2;
- (void)updateWithWangCaiBrefInfo:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
