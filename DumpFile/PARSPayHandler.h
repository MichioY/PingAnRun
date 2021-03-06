//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PARSBaseUserHandler.h"

@interface PARSPayHandler : PARSBaseUserHandler
{
    long long _queryPayResultTimes;
}

@property(nonatomic) long long queryPayResultTimes; // @synthesize queryPayResultTimes=_queryPayResultTimes;
- (void)requestWCPayResultWithParam:(id)arg1 result:(CDUnknownBlockType)arg2;
- (void)setWCPayTransPassword:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)requestWCPayPubKeyInfo:(CDUnknownBlockType)arg1;
- (void)requestToBindOrUnBindBankCardWithBankInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)requestToGetBankInfoWithBankNumber:(id)arg1 resultBlock:(CDUnknownBlockType)arg2;
- (void)requestToOpenAccountWithUserInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)requestOrderInfoWithParam:(id)arg1 result:(CDUnknownBlockType)arg2;
- (void)requestToPayWithParam:(id)arg1 needPolling:(_Bool)arg2 result:(CDUnknownBlockType)arg3;

@end

