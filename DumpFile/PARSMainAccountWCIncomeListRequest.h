//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PARSOldBaseUserHTTPRequest.h"

@class PARSMainAccountWCIncomeListParam, PARSMainAccountWCIncomeListResult;

@interface PARSMainAccountWCIncomeListRequest : PARSOldBaseUserHTTPRequest
{
    PARSMainAccountWCIncomeListParam *_param;
    PARSMainAccountWCIncomeListResult *_result;
}

@property(retain, nonatomic) PARSMainAccountWCIncomeListResult *result; // @synthesize result=_result;
@property(retain, nonatomic) PARSMainAccountWCIncomeListParam *param; // @synthesize param=_param;
- (void).cxx_destruct;
- (void)handleResponseResult:(id)arg1;
- (id)httpBody;
- (_Bool)needMobilePhone;
- (_Bool)shouldEncryptPhoneWithTimstamp;
- (id)url;

@end
