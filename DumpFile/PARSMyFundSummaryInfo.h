//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PARSBaseInfo.h"

@interface PARSMyFundSummaryInfo : PARSBaseInfo
{
    double _totalFloatProfit;
    double _totalMarketValue;
    double _applicationAmountFrom;
    double _applicationVolFrom;
    long long _ackCountApplied;
    long long _ackCountRedeem;
}

@property(nonatomic) long long ackCountRedeem; // @synthesize ackCountRedeem=_ackCountRedeem;
@property(nonatomic) long long ackCountApplied; // @synthesize ackCountApplied=_ackCountApplied;
@property(nonatomic) double applicationVolFrom; // @synthesize applicationVolFrom=_applicationVolFrom;
@property(nonatomic) double applicationAmountFrom; // @synthesize applicationAmountFrom=_applicationAmountFrom;
@property(nonatomic) double totalMarketValue; // @synthesize totalMarketValue=_totalMarketValue;
@property(nonatomic) double totalFloatProfit; // @synthesize totalFloatProfit=_totalFloatProfit;
- (id)initWithJson:(id)arg1;

@end

