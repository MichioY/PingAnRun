//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PARSHealthCircleBaseRequest.h"

@class NSArray, NSDictionary;

@interface PARSHealthCircleUploadPedometerRequest : PARSHealthCircleBaseRequest
{
    _Bool _isAuto;
    NSDictionary *_resultData;
    unsigned long long _totalSteps;
    NSArray *_pedometerList;
}

@property(nonatomic) _Bool isAuto; // @synthesize isAuto=_isAuto;
@property(copy, nonatomic) NSArray *pedometerList; // @synthesize pedometerList=_pedometerList;
@property(nonatomic) unsigned long long totalSteps; // @synthesize totalSteps=_totalSteps;
@property(copy, nonatomic) NSDictionary *resultData; // @synthesize resultData=_resultData;
- (void).cxx_destruct;
- (id)pedmeterListJson:(id)arg1;
- (id)converseToServerTime:(double)arg1;
- (void)handleResponseResult:(id)arg1;
- (id)httpBody;
- (id)url;
- (id)initWithUserId:(id)arg1 pedometerList:(id)arg2 isAuto:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;

@end
