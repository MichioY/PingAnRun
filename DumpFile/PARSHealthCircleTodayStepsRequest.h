//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PARSHealthCircleBaseRequest.h"

@class NSDictionary;

@interface PARSHealthCircleTodayStepsRequest : PARSHealthCircleBaseRequest
{
    NSDictionary *_resultData;
}

@property(copy, nonatomic) NSDictionary *resultData; // @synthesize resultData=_resultData;
- (void).cxx_destruct;
- (void)handleResponseResult:(id)arg1;
- (id)url;

@end
