//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface AdrDatabaseServer : NSObject
{
}

- (void)updateRequestDataDate:(id)arg1;
- (id)requestDataDate;
- (void)updateDataVersion:(id)arg1;
- (id)dataVersion;
- (_Bool)updateTableWithItems:(id)arg1;
- (id)queryAllItems;
- (_Bool)clearAllItems;
- (_Bool)batchInsertItems:(id)arg1;
- (_Bool)insertItem:(id)arg1;
- (_Bool)dropTable;
- (_Bool)createTable;
- (id)init;

@end

