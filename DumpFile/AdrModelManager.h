//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AdrDatabaseServer, AdrNetworkServer;

@interface AdrModelManager : NSObject
{
    AdrNetworkServer *_networkServer;
    AdrDatabaseServer *_databaseServer;
}

@property(retain, nonatomic) AdrDatabaseServer *databaseServer; // @synthesize databaseServer=_databaseServer;
@property(retain, nonatomic) AdrNetworkServer *networkServer; // @synthesize networkServer=_networkServer;
- (void).cxx_destruct;
- (void)updateDataVersion:(id)arg1;
- (id)dataVersion;
- (id)queryAllItems;
- (void)handleResponseErrorInfo:(id)arg1;
- (void)hanleResponseFileData:(id)arg1;
- (void)handleBodyData:(id)arg1;
- (void)handleResponseInfo:(id)arg1;
- (_Bool)checkIsUpdateLocalDataWithNetworkDataVersion:(id)arg1;
- (_Bool)checkIsDownloadData;
- (void)loadFileData;
- (void)loadDataInstantly;
- (void)loadData;
- (id)init;
- (void)dealloc;

@end

