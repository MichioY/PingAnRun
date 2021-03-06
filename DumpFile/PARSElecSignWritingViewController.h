//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "OnSignListenerDelegate.h"

@class BjcaInterfaceView, NSString, PARSElecSignParamsInfo, UIButton, UIImageView, UILabel, UIView;

@interface PARSElecSignWritingViewController : UIViewController <OnSignListenerDelegate>
{
    double _signWidth;
    double _signHeight;
    double _drawWidth;
    double _drawHeight;
    id <SignViewDelegate> _delegate;
    BjcaInterfaceView *_interfaceView;
    UIImageView *_logoImageView;
    UILabel *_tipsLabel;
    UIView *_signView;
    UIButton *_saveButton;
    UIButton *_cleanButton;
    UIButton *_cancelButton;
    UILabel *_headerLabel;
    UIView *_footerView;
    UIButton *_submitButton;
    UIButton *_resignButton;
    PARSElecSignParamsInfo *_paramsInfo;
}

@property(retain, nonatomic) PARSElecSignParamsInfo *paramsInfo; // @synthesize paramsInfo=_paramsInfo;
@property(retain, nonatomic) UIButton *resignButton; // @synthesize resignButton=_resignButton;
@property(retain, nonatomic) UIButton *submitButton; // @synthesize submitButton=_submitButton;
@property(retain, nonatomic) UIView *footerView; // @synthesize footerView=_footerView;
@property(retain, nonatomic) UILabel *headerLabel; // @synthesize headerLabel=_headerLabel;
@property(retain, nonatomic) UIButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(retain, nonatomic) UIButton *cleanButton; // @synthesize cleanButton=_cleanButton;
@property(retain, nonatomic) UIButton *saveButton; // @synthesize saveButton=_saveButton;
@property(retain, nonatomic) UIView *signView; // @synthesize signView=_signView;
@property(retain, nonatomic) UILabel *tipsLabel; // @synthesize tipsLabel=_tipsLabel;
@property(retain, nonatomic) UIImageView *logoImageView; // @synthesize logoImageView=_logoImageView;
@property(retain, nonatomic) BjcaInterfaceView *interfaceView; // @synthesize interfaceView=_interfaceView;
@property(nonatomic) __weak id <SignViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)setDataArray;
- (struct formInformation)setFormInfoData:(struct formInformation *)arg1;
- (id)getPackString;
- (struct signerInformation)SetSignData:(int)arg1 info:(struct signerInformation *)arg2;
- (void)onDismiss;
- (void)onCancel;
- (void)onConfirm;
- (void)buttonTapped:(id)arg1;
- (void)getSignImage:(id)arg1;
- (void)hidePreviewView;
- (void)setupPreviewView;
- (void)setupSignOptionButtons;
- (void)setupTipsView;
- (void)setupSignView;
- (void)startSign;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)forbidClearDrawing;
- (void)viewDidLoad;
- (id)initWithInfos:(id)arg1 interfaceViewController:(id)arg2 delegate:(id)arg3;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

