//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PARSWealthProductInfo.h"

@class NSString;

@interface PARSWealthProductOrderInfo : PARSWealthProductInfo
{
    NSString *_orderNo;
    NSString *_policyNo;
    NSString *_beginDateStr;
    NSString *_endDateStr;
}

@property(readonly, copy, nonatomic) NSString *endDateStr; // @synthesize endDateStr=_endDateStr;
@property(readonly, copy, nonatomic) NSString *beginDateStr; // @synthesize beginDateStr=_beginDateStr;
@property(readonly, copy, nonatomic) NSString *policyNo; // @synthesize policyNo=_policyNo;
@property(readonly, copy, nonatomic) NSString *orderNo; // @synthesize orderNo=_orderNo;
- (void).cxx_destruct;
- (id)initWithJson:(id)arg1;

@end

