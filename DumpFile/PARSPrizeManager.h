//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class PARSOldPrizeHandler, PARSPrizeHandler;

@interface PARSPrizeManager : NSObject
{
    PARSPrizeHandler *_prizeHandler;
    PARSOldPrizeHandler *_oldPrizeHandler;
}

+ (id)sharedManager;
@property(retain, nonatomic) PARSOldPrizeHandler *oldPrizeHandler; // @synthesize oldPrizeHandler=_oldPrizeHandler;
@property(retain, nonatomic) PARSPrizeHandler *prizeHandler; // @synthesize prizeHandler=_prizeHandler;
- (void).cxx_destruct;
- (void)requestForFavorAddressWithResultBlock:(CDUnknownBlockType)arg1;
- (void)requestForMergeActivityPrizeWithModel:(id)arg1 resultBlock:(CDUnknownBlockType)arg2;
- (void)requestPrizeDetailModelWithPrizeType:(id)arg1 prizeId:(id)arg2 result:(CDUnknownBlockType)arg3;
- (void)requestForPrizeReceivingWithPrizeId:(id)arg1 prizeType:(id)arg2 result:(CDUnknownBlockType)arg3;
- (void)fetchPrizesOfTab:(id)arg1 page:(long long)arg2 needRefresh:(_Bool)arg3 result:(CDUnknownBlockType)arg4;
- (void)fetchPrizeTab:(_Bool)arg1 resultBlock:(CDUnknownBlockType)arg2;

@end

