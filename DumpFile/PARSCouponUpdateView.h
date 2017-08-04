//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIButton, UILabel;

@interface PARSCouponUpdateView : UIView
{
    id <PARSCouponUpdateViewDelegate> _delegate;
    UIView *_bgView;
    UIButton *_closeBtn;
    UILabel *_tipsLabel;
    UIButton *_updateBtn;
}

@property(retain, nonatomic) UIButton *updateBtn; // @synthesize updateBtn=_updateBtn;
@property(retain, nonatomic) UILabel *tipsLabel; // @synthesize tipsLabel=_tipsLabel;
@property(retain, nonatomic) UIButton *closeBtn; // @synthesize closeBtn=_closeBtn;
@property(retain, nonatomic) UIView *bgView; // @synthesize bgView=_bgView;
@property(nonatomic) id <PARSCouponUpdateViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)update;
- (void)close;
- (void)layout;
- (id)init;
- (id)initWithDelegate:(id)arg1;

@end
