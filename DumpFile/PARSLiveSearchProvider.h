//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PARSBaseUserDatabaseProvider.h"

@interface PARSLiveSearchProvider : PARSBaseUserDatabaseProvider
{
}

- (_Bool)clear;
- (_Bool)deleteKeyword:(id)arg1;
- (_Bool)addKeyWord:(id)arg1;
- (id)querySearchHistory;
- (id)keywordsWithResultSet:(id)arg1;
- (id)keywordWithResultSet:(id)arg1;
- (_Bool)onUpgradeTable:(id)arg1 fromVersion:(long long)arg2 toVersion:(long long)arg3;
- (_Bool)onCreateTable:(id)arg1;
- (long long)version;
- (id)name;

@end
