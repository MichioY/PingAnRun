//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PARSFundOrderListRequest.h"

@class NSArray;

@interface PARSFundDealOrderListRequest : PARSFundOrderListRequest
{
    NSArray *_dealOrders;
}

@property(retain, nonatomic) NSArray *dealOrders; // @synthesize dealOrders=_dealOrders;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *resultOrders;
- (void)handleResponseResult:(id)arg1;
- (id)url;

@end
