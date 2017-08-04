//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "OnSignListenerDelegate.h"

@class BjcaInterfaceView, NSDictionary, NSString, UIButton, UIView;

@interface NewEsignViewController : UIViewController <OnSignListenerDelegate>
{
    NSString *jsSuccessCallbackMethod;
    NSDictionary *_param;
    NSString *_clientName;
    NSString *_idNumber;
    NSString *_manageNum;
    NSString *_information;
    NSString *_serverEncType;
    NSString *_signKeyWord;
    BjcaInterfaceView *_signApi;
    UIView *_signView;
    UIButton *_saveSignBTN;
    UIButton *_cancelSignBTN;
    UIButton *_clearSignBTN;
    double _signWidth;
    double _signHeight;
}

@property(nonatomic) double signHeight; // @synthesize signHeight=_signHeight;
@property(nonatomic) double signWidth; // @synthesize signWidth=_signWidth;
@property(retain, nonatomic) UIButton *clearSignBTN; // @synthesize clearSignBTN=_clearSignBTN;
@property(retain, nonatomic) UIButton *cancelSignBTN; // @synthesize cancelSignBTN=_cancelSignBTN;
@property(retain, nonatomic) UIButton *saveSignBTN; // @synthesize saveSignBTN=_saveSignBTN;
@property(retain, nonatomic) UIView *signView; // @synthesize signView=_signView;
@property(retain, nonatomic) BjcaInterfaceView *signApi; // @synthesize signApi=_signApi;
@property(copy, nonatomic) NSString *signKeyWord; // @synthesize signKeyWord=_signKeyWord;
@property(copy, nonatomic) NSString *serverEncType; // @synthesize serverEncType=_serverEncType;
@property(copy, nonatomic) NSString *information; // @synthesize information=_information;
@property(copy, nonatomic) NSString *manageNum; // @synthesize manageNum=_manageNum;
@property(copy, nonatomic) NSString *idNumber; // @synthesize idNumber=_idNumber;
@property(copy, nonatomic) NSString *clientName; // @synthesize clientName=_clientName;
@property(retain, nonatomic) NSDictionary *param; // @synthesize param=_param;
- (void).cxx_destruct;
- (void)onDismiss;
- (void)onCancel;
- (void)onConfirm;
- (void)dismissSelf;
- (struct formInformation)setFormInfoData:(struct formInformation *)arg1;
- (_Bool)setDataArray;
- (id)getEncodeWay;
- (void)signClear;
- (void)signCancel;
- (void)removeView;
- (void)signSave;
- (void)getSignImage:(id)arg1;
- (void)showSignView;
- (id)__getBase64String:(id)arg1;
- (id)__getSignEncodeStringOfSM2:(id)arg1;
- (void)__setupOptionBtn;
- (struct signerInformation)__getSignInfo;
- (id)dictionaryToJson:(id)arg1;
- (void)__getParams;
- (void)didReceiveMemoryWarning;
- (long long)preferredInterfaceOrientationForPresentation;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (void)dealloc;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
