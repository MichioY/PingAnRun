//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PARSHTTPRequest.h"

#import "PARSFileDownloadRequest.h"

@class NSData, NSString, NSURLSessionDownloadTask;

@interface PARSFileDownloadRequest : PARSHTTPRequest <PARSFileDownloadRequest>
{
    NSString *_tempPath;
    NSString *_defaultDestinationPath;
    NSString *_destPath;
    NSData *_fileData;
    NSURLSessionDownloadTask *_task;
    CDUnknownBlockType _progressBlock;
    CDUnknownBlockType _completionHandler;
    NSData *_resumeData;
}

@property(copy, nonatomic) NSData *resumeData; // @synthesize resumeData=_resumeData;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(copy, nonatomic) CDUnknownBlockType progressBlock; // @synthesize progressBlock=_progressBlock;
@property(nonatomic) __weak NSURLSessionDownloadTask *task; // @synthesize task=_task;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *destPath;
- (void)createDirectory;
- (id)handleResumeData:(id)arg1;
- (void)cancel;
- (void)pause;
- (void)startDownload;
- (void)setHasWrittenBytes:(long long)arg1 totalBytes:(long long)arg2;
- (void)setFileLocation:(id)arg1;
- (void)initResumeData;
- (id)initWithURL:(id)arg1 progressBlock:(CDUnknownBlockType)arg2 completionBlock:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSData *fileData;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

