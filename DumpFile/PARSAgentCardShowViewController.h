//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PARSBaseViewController.h"

@class PARSAgentInfo, PARSWebViewController;

@interface PARSAgentCardShowViewController : PARSBaseViewController
{
    _Bool _hideConfirmButton;
    PARSAgentInfo *_agentInfo;
    CDUnknownBlockType _nearbyAgentResult;
    CDUnknownBlockType _agentResult;
    PARSWebViewController *_webCtr;
}

@property(retain, nonatomic) PARSWebViewController *webCtr; // @synthesize webCtr=_webCtr;
@property(nonatomic) _Bool hideConfirmButton; // @synthesize hideConfirmButton=_hideConfirmButton;
@property(copy, nonatomic) CDUnknownBlockType agentResult; // @synthesize agentResult=_agentResult;
@property(copy, nonatomic) CDUnknownBlockType nearbyAgentResult; // @synthesize nearbyAgentResult=_nearbyAgentResult;
@property(retain, nonatomic) PARSAgentInfo *agentInfo; // @synthesize agentInfo=_agentInfo;
- (void).cxx_destruct;
- (void)confirmChoose;
- (void)initUI;
- (void)viewDidLoad;

@end

