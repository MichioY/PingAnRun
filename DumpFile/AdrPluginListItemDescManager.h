//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AdrModelManager.h"

@class AdrPluginListItem;

@interface AdrPluginListItemDescManager : AdrModelManager
{
    int _requestType;
    AdrPluginListItem *_pluginListItem;
}

- (void).cxx_destruct;
- (void)handlePluginContentData:(id)arg1 pluginId:(id)arg2;
- (id)networkServer;
- (void)handleResponseErrorInfo:(id)arg1;
- (void)handleBodyData:(id)arg1;
- (_Bool)checkIsDownloadData;
- (id)initWithluginContent:(int)arg1 pluginListItem:(id)arg2;

@end

