//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PABaseRequest.h"

@interface PARecommendHeadlines : PABaseRequest
{
}

- (void)deserializeResponse:(id)arg1;
- (id)result;
- (long long)handleError;
- (id)initWithPageSize:(long long)arg1 indexId:(long long)arg2 indexIdType:(id)arg3 channelId:(long long)arg4 partner:(id)arg5;

@end
