//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PARSProtalBaseUserHTTPRequest.h"

@class PARSPolicyRuleCheck4DetailRequestParam, PARSPolicyRuleCheck4DetailRequestResult;

@interface PARSPolicyRuleCheck4DetailRequest : PARSProtalBaseUserHTTPRequest
{
    PARSPolicyRuleCheck4DetailRequestParam *_param;
    PARSPolicyRuleCheck4DetailRequestResult *_checkResult;
}

@property(retain, nonatomic) PARSPolicyRuleCheck4DetailRequestResult *checkResult; // @synthesize checkResult=_checkResult;
@property(retain, nonatomic) PARSPolicyRuleCheck4DetailRequestParam *param; // @synthesize param=_param;
- (void).cxx_destruct;
- (void)handleResponseResult:(id)arg1;
- (id)httpBody;
- (id)url;

@end
