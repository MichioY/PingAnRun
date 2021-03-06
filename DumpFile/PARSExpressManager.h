//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class PARSExpressHandler;

@interface PARSExpressManager : NSObject
{
    PARSExpressHandler *_expressHandler;
}

+ (id)sharedManager;
@property(retain, nonatomic) PARSExpressHandler *expressHandler; // @synthesize expressHandler=_expressHandler;
- (void).cxx_destruct;
- (void)loadExpressCompanyInfoWithExpressNum:(id)arg1 resultBlock:(CDUnknownBlockType)arg2;
- (void)loadExpressInfoWithExpressList:(id)arg1 resultBlock:(CDUnknownBlockType)arg2;
- (void)clearAllPrizeLogisticListHistory;
- (void)savePrizeLogisticList:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchAllPrizeHistoryWithResultBlock:(CDUnknownBlockType)arg1;
- (void)clearAllLogisticListHistory;
- (void)updateLogisticList:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)saveLogisticList:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchAllHistoryWithResultBlock:(CDUnknownBlockType)arg1;
- (void)refreshCompanyListWithResultBlock:(CDUnknownBlockType)arg1;
- (void)fetchCacheCompanyListWithResultBlock:(CDUnknownBlockType)arg1;

@end

