//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PARSBaseUserHandler.h"

@class PARSWangCaiDataProvider, PARSWangCaiTransactionDataProvider;

@interface PARSMyWangCaiHandler : PARSBaseUserHandler
{
    _Bool _wangCaiOpenStatus;
    PARSWangCaiDataProvider *_wangCaiDataProvider;
    PARSWangCaiTransactionDataProvider *_transactionDataProvider;
}

@property(retain, nonatomic) PARSWangCaiTransactionDataProvider *transactionDataProvider; // @synthesize transactionDataProvider=_transactionDataProvider;
@property(retain, nonatomic) PARSWangCaiDataProvider *wangCaiDataProvider; // @synthesize wangCaiDataProvider=_wangCaiDataProvider;
@property(nonatomic) _Bool wangCaiOpenStatus; // @synthesize wangCaiOpenStatus=_wangCaiOpenStatus;
- (void).cxx_destruct;
- (void)applyWangCaiCancelWithParam:(id)arg1 result:(CDUnknownBlockType)arg2;
- (void)requestWangCaiCancelStatus:(CDUnknownBlockType)arg1;
- (void)requestBankCardProtectionStatus:(CDUnknownBlockType)arg1;
- (void)fetchBankCardProtectionStatus:(CDUnknownBlockType)arg1;
- (void)setUp;
- (void)requestWangCaiBrefInfo:(CDUnknownBlockType)arg1;
- (void)updateWangCaiOpenStatus:(_Bool)arg1;
- (void)updateCachedWangCaiBrefInfo:(id)arg1;
- (void)fetchCachedWangCaiTransactionWithPageNO:(long long)arg1 result:(CDUnknownBlockType)arg2;
- (void)requestWangCaiTransactionsWithPageNO:(long long)arg1 result:(CDUnknownBlockType)arg2;
- (void)fetchCachedWangCaiBrefInfo:(CDUnknownBlockType)arg1;
- (void)requestWangCaiInfo:(CDUnknownBlockType)arg1;
- (void)fetchCachedWangCaiInfo:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) _Bool isWangCaiOpen;

@end
