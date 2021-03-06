//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PARSPrMonitorInfoProtocol.h"

@class NSDate, NSString;

@interface PARSPrFPSInfo : NSObject <PARSPrMonitorInfoProtocol>
{
    NSString *_pageName;
    long long _maxFPS;
    long long _minFPS;
    long long _avgFPS;
    long long _uniqueId;
    NSDate *_time;
    long long _historyCount;
    long long _totalFPS;
    NSString *_deviceG23;
    NSString *_clientIp;
    long long _appVersionCode;
    NSString *_appVersionName;
    NSString *_languages;
    NSString *_timeZone;
}

@property(copy, nonatomic) NSString *timeZone; // @synthesize timeZone=_timeZone;
@property(copy, nonatomic) NSString *languages; // @synthesize languages=_languages;
@property(copy, nonatomic) NSString *appVersionName; // @synthesize appVersionName=_appVersionName;
@property(nonatomic) long long appVersionCode; // @synthesize appVersionCode=_appVersionCode;
@property(copy, nonatomic) NSString *clientIp; // @synthesize clientIp=_clientIp;
@property(copy, nonatomic) NSString *deviceG23; // @synthesize deviceG23=_deviceG23;
@property(nonatomic) long long totalFPS; // @synthesize totalFPS=_totalFPS;
@property(nonatomic) long long historyCount; // @synthesize historyCount=_historyCount;
@property(retain, nonatomic) NSDate *time; // @synthesize time=_time;
@property(nonatomic) long long uniqueId; // @synthesize uniqueId=_uniqueId;
@property(nonatomic) long long avgFPS; // @synthesize avgFPS=_avgFPS;
@property(nonatomic) long long minFPS; // @synthesize minFPS=_minFPS;
@property(nonatomic) long long maxFPS; // @synthesize maxFPS=_maxFPS;
@property(retain, nonatomic) NSString *pageName; // @synthesize pageName=_pageName;
- (void).cxx_destruct;
- (unsigned long long)type;
- (id)jsonString;
- (id)stateId;
- (void)updateFPS:(long long)arg1;
- (id)init;
- (id)initWithMonitorInfo:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

