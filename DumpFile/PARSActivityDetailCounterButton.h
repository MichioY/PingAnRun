//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIButton.h"

#import "CountDownDelegate.h"
#import "PARSActivityDetailModelButtonProtocol.h"

@class CountDownView, NSString, PARSActivityDetailButtomButtonLogicModel;

@interface PARSActivityDetailCounterButton : UIButton <CountDownDelegate, PARSActivityDetailModelButtonProtocol>
{
    PARSActivityDetailButtomButtonLogicModel *_buttonLogicModel;
    unsigned long long _dueTimeSecond;
    CountDownView *_cdv;
}

@property(retain, nonatomic) CountDownView *cdv; // @synthesize cdv=_cdv;
@property(nonatomic) unsigned long long dueTimeSecond; // @synthesize dueTimeSecond=_dueTimeSecond;
@property(retain, nonatomic) PARSActivityDetailButtomButtonLogicModel *buttonLogicModel; // @synthesize buttonLogicModel=_buttonLogicModel;
- (void).cxx_destruct;
- (void)countDownDidFinishWithView:(id)arg1;
- (void)initCountDownUIWithTimeStr:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
