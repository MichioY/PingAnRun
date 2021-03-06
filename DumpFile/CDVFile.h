//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CDVPlugin.h"

@class NSMutableArray, NSString;

@interface CDVFile : CDVPlugin
{
    NSString *rootDocsPath;
    NSString *appDocsPath;
    NSString *appLibraryPath;
    NSString *appTempPath;
    NSMutableArray *fileSystems_;
    _Bool userHasAllowed;
    NSString *_persistentPath;
    NSString *_temporaryPath;
}

@property(retain, nonatomic) NSString *temporaryPath; // @synthesize temporaryPath=_temporaryPath;
@property(retain, nonatomic) NSString *persistentPath; // @synthesize persistentPath=_persistentPath;
@property(retain, nonatomic) NSMutableArray *fileSystems; // @synthesize fileSystems=fileSystems_;
@property _Bool userHasAllowed; // @synthesize userHasAllowed;
@property(retain, nonatomic) NSString *appTempPath; // @synthesize appTempPath;
@property(retain, nonatomic) NSString *appLibraryPath; // @synthesize appLibraryPath;
@property(retain, nonatomic) NSString *appDocsPath; // @synthesize appDocsPath;
@property(retain, nonatomic) NSString *rootDocsPath; // @synthesize rootDocsPath;
- (void).cxx_destruct;
- (void)_getLocalFilesystemPath:(id)arg1;
- (id)getDirectoryEntry:(id)arg1 isDirectory:(_Bool)arg2;
- (id)getMimeTypeFromPath:(id)arg1;
- (void)getFreeDiskSpace:(id)arg1;
- (void)testDirectoryExists:(id)arg1;
- (void)testFileExists:(id)arg1;
- (id)filesystemPathForURL:(id)arg1;
- (void)write:(id)arg1;
- (void)truncate:(id)arg1;
- (void)readAsBinaryString:(id)arg1;
- (void)readAsArrayBuffer:(id)arg1;
- (void)readAsDataURL:(id)arg1;
- (void)readAsText:(id)arg1;
- (void)readEntries:(id)arg1;
- (void)getFileMetadata:(id)arg1;
- (void)doCopyMove:(id)arg1 isCopy:(_Bool)arg2;
- (void)moveTo:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)removeRecursively:(id)arg1;
- (void)remove:(id)arg1;
- (void)setMetadata:(id)arg1;
- (void)getParent:(id)arg1;
- (void)getFile:(id)arg1;
- (void)getDirectory:(id)arg1;
- (id)encodePath:(id)arg1;
- (void)resolveLocalFileSystemURI:(id)arg1;
- (id)makeEntryForURL:(id)arg1;
- (id)makeEntryForLocalURL:(id)arg1;
- (id)makeEntryForPath:(id)arg1 fileSystemName:(id)arg2 isDirectory:(_Bool)arg3;
- (void)requestAllPaths:(id)arg1;
- (void)requestAllFileSystems:(id)arg1;
- (void)requestFileSystem:(id)arg1;
- (id)checkFreeDiskSpace:(id)arg1;
- (id)fileSystemURLforLocalPath:(id)arg1;
- (id)fileSystemURLforArg:(id)arg1;
- (id)initWithWebView:(id)arg1;
- (void)pluginInitialize;
- (id)getAvailableFileSystems;
- (void)registerExtraFileSystems:(id)arg1 fromAvailableSet:(id)arg2;
- (void)makeNonSyncable:(id)arg1;
- (id)getExtraFileSystemsPreference:(id)arg1;
- (id)filesystemForURL:(id)arg1;
- (id)fileSystemByName:(id)arg1;
- (void)registerFilesystem:(id)arg1;

@end

