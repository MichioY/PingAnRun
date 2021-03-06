//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSObject<OS_dispatch_queue>, NSTimer;

@interface PARSPrCPUHandler : NSObject
{
    float _cpuThreshold;
    float _currentCpuUsage;
    NSMutableArray *_historyArray;
    NSTimer *_timer;
    id <PARSPrMonitorInfoProviderProtocol> _provider;
    NSObject<OS_dispatch_queue> *_handleQueue;
    double _lastSaveTime;
}

@property(nonatomic) double lastSaveTime; // @synthesize lastSaveTime=_lastSaveTime;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *handleQueue; // @synthesize handleQueue=_handleQueue;
@property(retain, nonatomic) id <PARSPrMonitorInfoProviderProtocol> provider; // @synthesize provider=_provider;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) NSMutableArray *historyArray; // @synthesize historyArray=_historyArray;
@property(nonatomic) float currentCpuUsage; // @synthesize currentCpuUsage=_currentCpuUsage;
@property(nonatomic) float cpuThreshold; // @synthesize cpuThreshold=_cpuThreshold;
- (void).cxx_destruct;
- (float)fetchCpuUsage;
- (void)fetchCPURecordWithPageNO:(long long)arg1 result:(CDUnknownBlockType)arg2;
- (void)startMonitorCpuUsage;
- (void)cpuMonitorTimer:(id)arg1;
- (id)init;

@end

