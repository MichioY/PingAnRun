//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PARSBaseUserHandler.h"

@class NSArray, NSCache, PARSDetailZoneInfoDataProvider, PARSModuleInfoProvider, PARSZoneConfigInfoProvider;

@interface PARSZoneConfigHandler : PARSBaseUserHandler
{
    _Bool _isNotCached;
    PARSDetailZoneInfoDataProvider *_detailZoneProvider;
    PARSZoneConfigInfoProvider *_zoneConfigProvider;
    PARSModuleInfoProvider *_moduleZoneInfoProvider;
    NSArray *_zoneList;
    NSCache *_cache;
}

@property(nonatomic) _Bool isNotCached; // @synthesize isNotCached=_isNotCached;
@property(retain, nonatomic) NSCache *cache; // @synthesize cache=_cache;
@property(retain, nonatomic) NSArray *zoneList; // @synthesize zoneList=_zoneList;
@property(retain, nonatomic) PARSModuleInfoProvider *moduleZoneInfoProvider; // @synthesize moduleZoneInfoProvider=_moduleZoneInfoProvider;
@property(retain, nonatomic) PARSZoneConfigInfoProvider *zoneConfigProvider; // @synthesize zoneConfigProvider=_zoneConfigProvider;
@property(retain, nonatomic) PARSDetailZoneInfoDataProvider *detailZoneProvider; // @synthesize detailZoneProvider=_detailZoneProvider;
- (void).cxx_destruct;
- (void)getPolicyServiceZoneInfosWithModuleZoneListResult:(id)arg1 resultBlock:(CDUnknownBlockType)arg2;
- (void)syncPolicyUsualServiceZoneWithCompletion:(CDUnknownBlockType)arg1;
- (void)queryZoneInfosWithSearchKey:(id)arg1 zoneMap:(id)arg2 result:(CDUnknownBlockType)arg3;
- (void)queryZoneItemInfosWithSearchKey:(id)arg1 zoneMap:(id)arg2 result:(CDUnknownBlockType)arg3;
- (void)queryZoneConfigInfosWithZoneIdList:(id)arg1 result:(CDUnknownBlockType)arg2;
- (void)queryZoneBaseInfoWithZones:(id)arg1 result:(CDUnknownBlockType)arg2;
- (void)queryPolicyServiceZoneInfos:(CDUnknownBlockType)arg1;
- (void)requestPolicyServiceZoneInfos:(CDUnknownBlockType)arg1;
- (void)updatePolicyUsualServiceZoneItemInfos:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)queryPolicyUsualServiceZoneItemInfos:(CDUnknownBlockType)arg1;
- (void)queryZoneInfosWithModuleId:(id)arg1 searchKey:(id)arg2 result:(CDUnknownBlockType)arg3;
- (void)queryZoneInfosWithModuleId:(id)arg1 result:(CDUnknownBlockType)arg2;
- (void)requestZoneInfosWithModuleId:(id)arg1 result:(CDUnknownBlockType)arg2;
- (void)fetchNewestZoneInfosWithZoneMap:(id)arg1 result:(CDUnknownBlockType)arg2;
- (void)queryZoneInfosWithZoneMap:(id)arg1 result:(CDUnknownBlockType)arg2;
- (void)requestZoneInfosWithZoneMap:(id)arg1 result:(CDUnknownBlockType)arg2;

@end
