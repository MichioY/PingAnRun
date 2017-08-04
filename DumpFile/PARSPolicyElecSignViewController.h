//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "UIAlertViewDelegate.h"

@class NSMutableArray, NSString, PARSElecSignParamsInfo, PARSTakePhotoAndSignViewController, UIButton, UITextView;

@interface PARSPolicyElecSignViewController : UIViewController <UIAlertViewDelegate>
{
    _Bool _isNewQuerySwitch;
    _Bool _isVoiceReturnVisit;
    PARSTakePhotoAndSignViewController *_takePhotoAndSignViewController;
    UITextView *_infoTextView;
    UIButton *_startSignButton;
    id <PARSPolicyElecSignViewDelegate> _delegate;
    NSMutableArray *_signDataArray;
    PARSElecSignParamsInfo *_paramsInfo;
    NSString *_questionData;
    long long _signType;
}

@property(nonatomic) long long signType; // @synthesize signType=_signType;
@property(copy, nonatomic) NSString *questionData; // @synthesize questionData=_questionData;
@property(retain, nonatomic) PARSElecSignParamsInfo *paramsInfo; // @synthesize paramsInfo=_paramsInfo;
@property(retain, nonatomic) NSMutableArray *signDataArray; // @synthesize signDataArray=_signDataArray;
@property(nonatomic) __weak id <PARSPolicyElecSignViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIButton *startSignButton; // @synthesize startSignButton=_startSignButton;
@property(retain, nonatomic) UITextView *infoTextView; // @synthesize infoTextView=_infoTextView;
@property(retain, nonatomic) PARSTakePhotoAndSignViewController *takePhotoAndSignViewController; // @synthesize takePhotoAndSignViewController=_takePhotoAndSignViewController;
@property(nonatomic) _Bool isVoiceReturnVisit; // @synthesize isVoiceReturnVisit=_isVoiceReturnVisit;
@property(nonatomic) _Bool isNewQuerySwitch; // @synthesize isNewQuerySwitch=_isNewQuerySwitch;
- (void).cxx_destruct;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)startSign:(id)arg1;
- (id)getQuestionDataParametersFromString:(id)arg1;
- (id)formatDate:(long long)arg1;
- (id)getCurrentDate;
- (id)getTimeStr;
- (void)upLoadImageSignData;
- (void)packFormData:(id)arg1;
- (id)uploadURL;
- (void)hideElecSignView;
- (void)showElecSignView;
- (void)trueBack;
- (void)falseBack;
- (void)setupSubviews;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithInfos:(id)arg1 questionData:(id)arg2 signType:(long long)arg3 delegate:(id)arg4;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
