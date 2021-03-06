//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class PARSMyProductHandler;

@interface PARSMyProductManager : NSObject
{
    PARSMyProductHandler *_myProductHandler;
}

+ (id)sharedManager;
@property(retain, nonatomic) PARSMyProductHandler *myProductHandler; // @synthesize myProductHandler=_myProductHandler;
- (void).cxx_destruct;
- (void)fetchMyProductCommentWithRefresh:(_Bool)arg1 orderNo:(id)arg2 result:(CDUnknownBlockType)arg3;
- (void)addCommentWithOrderNo:(id)arg1 comment:(id)arg2 desc:(long long)arg3 shopService:(long long)arg4 logisticsService:(long long)arg5 result:(CDUnknownBlockType)arg6;
- (void)fetchMyProductWithRefresh:(_Bool)arg1 pageNo:(long long)arg2 productType:(long long)arg3 result:(CDUnknownBlockType)arg4;

@end

