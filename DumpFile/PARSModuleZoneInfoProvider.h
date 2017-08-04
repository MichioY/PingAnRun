//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PARSBaseUserDatabaseProvider.h"

@interface PARSModuleZoneInfoProvider : PARSBaseUserDatabaseProvider
{
}

- (id)buildModuleZoneInfoWithResult:(id)arg1;
- (void)queryModuleZoneInfoWithZoneIdList:(id)arg1 resultBlock:(CDUnknownBlockType)arg2;
- (void)queryModuleZoneInfoWithModuleId:(id)arg1 resultBlock:(CDUnknownBlockType)arg2;
- (void)deleteModuleZoneInfoWithZoneIdList:(id)arg1;
- (void)insertModuleZoneInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)onUpgradeTable:(id)arg1 fromVersion:(long long)arg2 toVersion:(long long)arg3;
- (_Bool)onCreateTable:(id)arg1;
- (long long)version;
- (id)name;

@end
