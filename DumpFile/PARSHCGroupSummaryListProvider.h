//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PARSBaseUserDatabaseProvider.h"

@interface PARSHCGroupSummaryListProvider : PARSBaseUserDatabaseProvider
{
}

- (_Bool)deleteAllGroups;
- (_Bool)deleteGroupInfo:(id)arg1;
- (unsigned long long)queryCircleTypeWithSocialCloudId:(id)arg1;
- (id)queryEcoCircleIdWithSocialCloudId:(id)arg1;
- (_Bool)saveGroupSummaryInfos:(id)arg1;
- (id)queryAllEcoGroupIds;
- (id)queryAllGroupInfos;
- (id)buildConversationInfoWithResult:(id)arg1;
- (_Bool)onCreateTable:(id)arg1;
- (long long)version;
- (id)name;

@end
