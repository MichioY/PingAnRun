//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PARSBaseInfo.h"

@class NSDate;

@interface PARSPedometerInfo : PARSBaseInfo
{
    long long _iPhoneSteps;
    long long _iWatchSteps;
    long long _otherDeviceSteps;
    long long _integratedSteps;
    long long _heartRate;
    NSDate *_startDate;
    NSDate *_endDate;
    NSDate *_syncDate;
    double _stepFrequency;
}

@property(nonatomic) double stepFrequency; // @synthesize stepFrequency=_stepFrequency;
@property(retain, nonatomic) NSDate *syncDate; // @synthesize syncDate=_syncDate;
@property(retain, nonatomic) NSDate *endDate; // @synthesize endDate=_endDate;
@property(retain, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
@property(nonatomic) long long heartRate; // @synthesize heartRate=_heartRate;
@property(nonatomic) long long integratedSteps; // @synthesize integratedSteps=_integratedSteps;
@property(nonatomic) long long otherDeviceSteps; // @synthesize otherDeviceSteps=_otherDeviceSteps;
@property(nonatomic) long long iWatchSteps; // @synthesize iWatchSteps=_iWatchSteps;
@property(nonatomic) long long iPhoneSteps; // @synthesize iPhoneSteps=_iPhoneSteps;
- (void).cxx_destruct;
- (id)description;
- (id)init;

@end
