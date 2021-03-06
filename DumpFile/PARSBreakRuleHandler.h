//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PARSBaseUserHandler.h"

@class PARSBreakRuleCityProvider, PARSBreakRuleProvider;

@interface PARSBreakRuleHandler : PARSBaseUserHandler
{
    PARSBreakRuleProvider *_breakRuleProvider;
    PARSBreakRuleCityProvider *_breakRuleCityProvider;
}

@property(retain, nonatomic) PARSBreakRuleCityProvider *breakRuleCityProvider; // @synthesize breakRuleCityProvider=_breakRuleCityProvider;
@property(retain, nonatomic) PARSBreakRuleProvider *breakRuleProvider; // @synthesize breakRuleProvider=_breakRuleProvider;
- (void).cxx_destruct;
- (void)fetchUrlWithCarInfo:(id)arg1 result:(CDUnknownBlockType)arg2;
- (void)refreshCityWithResultBlock:(CDUnknownBlockType)arg1;
- (void)queryBreakRuleCarInfo:(id)arg1 breakRuleVersion:(id)arg2 resultBlock:(CDUnknownBlockType)arg3;
- (void)breakRuleDeleteWithCarInfo:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)breakRuleAddCarWithCarInfo:(id)arg1 resultBlock:(CDUnknownBlockType)arg2;
- (void)queryBreakRuleCarListWithResultLBlock:(CDUnknownBlockType)arg1;
- (void)queryBreakRuleCityDictWithResultBlock:(CDUnknownBlockType)arg1;
- (void)clearAllBreakRuleTicket;
- (void)storageBreakRuleTicketInfo:(id)arg1;
- (void)queryBreakRuleListWithResultLBlock:(CDUnknownBlockType)arg1;

@end

