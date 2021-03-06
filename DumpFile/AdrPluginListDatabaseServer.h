//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AdrDatabaseServer.h"

@interface AdrPluginListDatabaseServer : AdrDatabaseServer
{
}

+ (id)copyWithZone:(struct _NSZone *)arg1;
+ (id)sharedAdrPluginDatabaseServer;
+ (id)allocWithZone:(struct _NSZone *)arg1;
- (id)queryPluginListWithSQL:(id)arg1;
- (id)getLocalPluginList;
- (void)updatePluginListTableVersion:(id)arg1;
- (id)pluginListTableVersion;
- (_Bool)isLoadLocalJsonPluginListData;
- (_Bool)clearDataWithSql:(id)arg1;
- (void)loadLocalJsonPluginListDataToDatabaseCallback:(CDUnknownBlockType)arg1;
- (id)queryNewPluginList;
- (void)updateIsLoadLocalJsonPluginListData:(_Bool)arg1;
- (void)updatePluginListRequestStatus:(_Bool)arg1;
- (_Bool)pluginListRequestStatus;
- (void)updateRequestDataDate:(id)arg1;
- (id)requestDataDate;
- (void)updateDataVersion:(id)arg1;
- (id)dataVersion;
- (_Bool)updateTableWithItems:(id)arg1;
- (id)queryPluginListItemWithPluginId:(id)arg1;
- (id)querySubPluginListWithParentPluginUid:(id)arg1;
- (_Bool)isParentPluginWithParentPluginUid:(id)arg1;
- (id)queryPersonalCenterPluginList;
- (id)queryFPluginList;
- (id)queryParentPluginList;
- (id)queryAllItems;
- (_Bool)clearAllItems;
- (_Bool)insertItem:(id)arg1 database:(id)arg2;
- (_Bool)batchInsertItems:(id)arg1;
- (_Bool)dropTable;
- (_Bool)createTable;

@end

