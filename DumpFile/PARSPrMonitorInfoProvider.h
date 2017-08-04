//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PARSBaseCommonDatabaseProvider.h"

#import "PARSPrMonitorInfoProviderProtocol.h"

@class NSString;

@interface PARSPrMonitorInfoProvider : PARSBaseCommonDatabaseProvider <PARSPrMonitorInfoProviderProtocol>
{
}

+ (id)sharedProvider;
- (void)deleteMonitorInfoBeforeDate:(id)arg1;
- (void)deleteMonitorInfoArray:(id)arg1;
- (void)deleteMonitorInfoWithType:(unsigned long long)arg1;
- (long long)queryMonitorInfoCount;
- (id)queryMonitorInfoWithCount:(long long)arg1;
- (id)queryAllMonitorInfo;
- (id)queryMonitorInfoWithPageNO:(long long)arg1;
- (id)queryMonitorInfoWithType:(unsigned long long)arg1 pageNO:(long long)arg2;
- (id)queryMonitorInfoWithType:(unsigned long long)arg1;
- (void)addMonitorInfoArray:(id)arg1;
- (void)addMonitorInfo:(id)arg1;
- (id)buildMonitorInfoWithResultSet:(id)arg1;
- (_Bool)onUpgradeTable:(id)arg1 fromVersion:(long long)arg2 toVersion:(long long)arg3;
- (_Bool)onCreateTable:(id)arg1;
- (long long)version;
- (id)name;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
