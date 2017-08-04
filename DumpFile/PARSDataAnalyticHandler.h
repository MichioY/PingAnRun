//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSFileHandle, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>, PARSDataAnalyticBean;

@interface PARSDataAnalyticHandler : NSObject
{
    long long _intervalTimeFormNet;
    NSObject<OS_dispatch_queue> *_writeQueue;
    NSObject<OS_dispatch_queue> *_timeQueue;
    NSObject<OS_dispatch_source> *_writeSource;
    NSObject<OS_dispatch_source> *_timeSource;
    NSFileHandle *_fileHandle;
    PARSDataAnalyticBean *_dataModel;
    long long _intervalTime;
    unsigned long long _requestCount;
    NSDate *_lastUploadDate;
}

@property(retain, nonatomic) NSDate *lastUploadDate; // @synthesize lastUploadDate=_lastUploadDate;
@property(nonatomic) unsigned long long requestCount; // @synthesize requestCount=_requestCount;
@property(nonatomic) long long intervalTime; // @synthesize intervalTime=_intervalTime;
@property(retain, nonatomic) PARSDataAnalyticBean *dataModel; // @synthesize dataModel=_dataModel;
@property(retain, nonatomic) NSFileHandle *fileHandle; // @synthesize fileHandle=_fileHandle;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *timeSource; // @synthesize timeSource=_timeSource;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *writeSource; // @synthesize writeSource=_writeSource;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *timeQueue; // @synthesize timeQueue=_timeQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *writeQueue; // @synthesize writeQueue=_writeQueue;
@property(nonatomic) long long intervalTimeFormNet; // @synthesize intervalTimeFormNet=_intervalTimeFormNet;
- (void).cxx_destruct;
- (void)removeEventsWithBatchId:(id)arg1;
- (void)sendReportWithEventArray:(id)arg1 andIndex:(long long)arg2;
- (_Bool)sendReport;
- (void)checkToSend;
- (void)traceEventWithModel:(id)arg1;
- (void)initTimeSourceWithIntervalTime:(long long)arg1;
- (void)initWriteSource;
- (id)init;

@end
