//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PARSBaseUserHandler.h"

@class PARSMyOrderProvider;

@interface PARSMyOrderHandler : PARSBaseUserHandler
{
    PARSMyOrderProvider *_orderProvider;
}

@property(retain, nonatomic) PARSMyOrderProvider *orderProvider; // @synthesize orderProvider=_orderProvider;
- (void).cxx_destruct;
- (void)deleteAllOrderInfos;
- (void)fetchMyOrderInfosWithResultBlock:(CDUnknownBlockType)arg1;
- (void)requestOrderInfoWithPageNo:(long long)arg1 resultBlock:(CDUnknownBlockType)arg2;

@end
