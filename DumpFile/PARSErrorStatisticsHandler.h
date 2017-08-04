//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PARSBaseHandler.h"

@class NSObject<OS_dispatch_source>, PARSErrorStatisticsBean, PARSErrorStatisticsProvider;

@interface PARSErrorStatisticsHandler : PARSBaseHandler
{
    long long _intervalTimeFormNet;
    NSObject<OS_dispatch_source> *_writeSource;
    NSObject<OS_dispatch_source> *_timeSource;
    long long _intervalTime;
    unsigned long long _requestCount;
    PARSErrorStatisticsBean *_errorRecord;
    PARSErrorStatisticsProvider *_errorStatisticsProvider;
}

@property(nonatomic) PARSErrorStatisticsProvider *errorStatisticsProvider; // @synthesize errorStatisticsProvider=_errorStatisticsProvider;
@property(retain, nonatomic) PARSErrorStatisticsBean *errorRecord; // @synthesize errorRecord=_errorRecord;
@property(nonatomic) unsigned long long requestCount; // @synthesize requestCount=_requestCount;
@property(nonatomic) long long intervalTime; // @synthesize intervalTime=_intervalTime;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *timeSource; // @synthesize timeSource=_timeSource;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *writeSource; // @synthesize writeSource=_writeSource;
@property(nonatomic) long long intervalTimeFormNet; // @synthesize intervalTimeFormNet=_intervalTimeFormNet;
- (void).cxx_destruct;
- (void)sendErrorRecords:(id)arg1;
- (void)statisticsWithErrorRecord:(id)arg1;
- (id)nowDateStr;
- (void)initTimeSourceWithIntervalTime:(long long)arg1;
- (void)initWriteSource;
- (id)init;

@end
