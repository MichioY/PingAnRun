//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "FiveInfoShowViewDelegate.h"
#import "IFlySpeechSynthesizerDelegate.h"
#import "UIAlertViewDelegate.h"

@class CCSFeedBackPolEntity, FiveInfoEntity, FiveInfoShowView, NSDictionary, NSFileManager, NSMutableArray, NSMutableString, NSString;

@interface FiveInfoShowViewController : UIViewController <UIAlertViewDelegate, IFlySpeechSynthesizerDelegate, FiveInfoShowViewDelegate>
{
    FiveInfoShowView *fiveInfoShowView;
    _Bool end;
    _Bool finish;
    NSFileManager *_manager;
    _Bool _isVoiceReturnVisit;
    _Bool _isNewQuerySwitch;
    NSMutableArray *_ccsPolArray;
    NSMutableString *_voiceStr;
    FiveInfoEntity *_fiveInfoEntity;
    NSDictionary *_jsonDic;
    CCSFeedBackPolEntity *_policyEntity;
}

@property(retain, nonatomic) CCSFeedBackPolEntity *policyEntity; // @synthesize policyEntity=_policyEntity;
@property(nonatomic) _Bool isNewQuerySwitch; // @synthesize isNewQuerySwitch=_isNewQuerySwitch;
@property(retain, nonatomic) NSDictionary *jsonDic; // @synthesize jsonDic=_jsonDic;
@property(nonatomic) _Bool isVoiceReturnVisit; // @synthesize isVoiceReturnVisit=_isVoiceReturnVisit;
@property(retain, nonatomic) FiveInfoEntity *fiveInfoEntity; // @synthesize fiveInfoEntity=_fiveInfoEntity;
@property(copy, nonatomic) NSMutableString *voiceStr; // @synthesize voiceStr=_voiceStr;
@property(retain, nonatomic) NSMutableArray *ccsPolArray; // @synthesize ccsPolArray=_ccsPolArray;
- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (void)fiveInfoShowCancel;
- (void)gotoQuestionVC;
- (void)fiveInfoShowConfirm;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)dealloc;
- (void)gotoPolicyListVC;
- (void)queryQuestionCondition;
- (void)queryPolForCCS;
- (void)goToOTPInputOK;
- (void)goToOTPInput;
- (id)getLastNOByString:(id)arg1;
- (void)goBackFiveInfoInput:(id)arg1;
- (void)onCompleted:(id)arg1;
- (void)viewDidLoad;
- (void)backButtonClick:(id)arg1;
- (void)navLeftItemButton;
- (id)initWithJsonDic:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
