//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PARSPALHWebViewController.h"

#import "PALifeHealthLineLXActionSheetDelegate.h"

@class NSString, PALHARUserServiceHandler, PALHPALifePayServiceHandler, PARSBaseActivityInfo;

@interface PARSARActivityWebViewController : PARSPALHWebViewController <PALifeHealthLineLXActionSheetDelegate>
{
    PARSBaseActivityInfo *_actDetailInfo;
    PALHARUserServiceHandler *_userServiceHandler;
    PALHPALifePayServiceHandler *_payServiceHandler;
}

@property(retain, nonatomic) PALHPALifePayServiceHandler *payServiceHandler; // @synthesize payServiceHandler=_payServiceHandler;
@property(retain, nonatomic) PALHARUserServiceHandler *userServiceHandler; // @synthesize userServiceHandler=_userServiceHandler;
@property(readonly, nonatomic) PARSBaseActivityInfo *actDetailInfo; // @synthesize actDetailInfo=_actDetailInfo;
- (void).cxx_destruct;
- (void)didClickOnButtonIndex:(long long)arg1;
- (void)backAction;
- (void)dismissViewAction:(id)arg1;
- (void)registerServiceHandlers;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (id)initWithActivity:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

