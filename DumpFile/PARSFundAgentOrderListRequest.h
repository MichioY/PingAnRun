//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PARSFundOrderListRequest.h"

@class NSArray;

@interface PARSFundAgentOrderListRequest : PARSFundOrderListRequest
{
    NSArray *_agentOrders;
}

@property(retain, nonatomic) NSArray *agentOrders; // @synthesize agentOrders=_agentOrders;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *resultOrders;
- (void)handleResponseResult:(id)arg1;
- (id)url;

@end
