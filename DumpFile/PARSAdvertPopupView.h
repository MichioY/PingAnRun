//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class PARSModuleAdvertPopupInfo, UIButton, UIImageView;

@interface PARSAdvertPopupView : UIView
{
    id <PARSAdvertPopupViewDelegate> _delegate;
    UIImageView *_advertImageView;
    UIButton *_closeButton;
    PARSModuleAdvertPopupInfo *_info;
}

@property(retain, nonatomic) PARSModuleAdvertPopupInfo *info; // @synthesize info=_info;
@property(retain, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) UIImageView *advertImageView; // @synthesize advertImageView=_advertImageView;
@property(nonatomic) __weak id <PARSAdvertPopupViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)showWithAdvertImg:(id)arg1 advertPopupInfo:(id)arg2;
- (void)disMiss;
- (void)advertClick;
- (id)initWithFrame:(struct CGRect)arg1;

@end
