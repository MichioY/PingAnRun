//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIButton;

@interface PARSHWFakeNaviBar : UIView
{
    UIView *_titleView;
    UIButton *_backBtn;
    UIButton *_moreBtn;
    UIView *_centerView;
}

@property(retain, nonatomic) UIView *centerView; // @synthesize centerView=_centerView;
@property(retain, nonatomic) UIButton *moreBtn; // @synthesize moreBtn=_moreBtn;
@property(retain, nonatomic) UIButton *backBtn; // @synthesize backBtn=_backBtn;
@property(retain, nonatomic) UIView *titleView; // @synthesize titleView=_titleView;
- (void).cxx_destruct;
- (void)switchToClearContentMode;
- (void)switchToWhiteContentMode;
- (void)addTarget:(id)arg1 tapMoreAction:(SEL)arg2;
- (void)addTarget:(id)arg1 popBcakAction:(SEL)arg2;
- (void)commonInit;
- (id)init;

@end

