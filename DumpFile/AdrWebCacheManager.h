//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface AdrWebCacheManager : NSObject
{
    _Bool _openLog;
    NSString *_appId;
    NSString *_appVersion;
    NSString *_encryptKey;
}

+ (_Bool)loadCachedFiles:(id)arg1 filePath:(id)arg2;
+ (id)shareInstance;
@property(nonatomic) _Bool openLog; // @synthesize openLog=_openLog;
@property(copy, nonatomic) NSString *encryptKey; // @synthesize encryptKey=_encryptKey;
@property(copy, nonatomic) NSString *appVersion; // @synthesize appVersion=_appVersion;
@property(copy, nonatomic) NSString *appId; // @synthesize appId=_appId;
- (void).cxx_destruct;
- (void)downLoadWebCacheInBackGround;
- (_Bool)downloadPluginCacheFile:(id)arg1 pluginId:(id)arg2 resultBlock:(CDUnknownBlockType)arg3;
- (_Bool)enablePluginWebCache:(id)arg1 manifestURL:(id)arg2 pluginId:(id)arg3 updateVersion:(_Bool)arg4 resultBlock:(CDUnknownBlockType)arg5;
- (_Bool)enablePluginWebCache:(id)arg1 pluginId:(id)arg2 resultBlock:(CDUnknownBlockType)arg3;
- (void)addTarget:(id)arg1 domain:(id)arg2;
- (_Bool)createPluginWebCacheDownloadTask:(id)arg1 pluginId:(id)arg2 pluginVersion:(id)arg3 downloadCacheFiles:(_Bool)arg4 resultBlock:(CDUnknownBlockType)arg5;
- (_Bool)initCache:(id)arg1 appVersion:(id)arg2 encryptKey:(id)arg3;
- (id)init;

@end

