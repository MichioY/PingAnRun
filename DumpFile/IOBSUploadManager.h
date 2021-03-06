//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IOBSConfiguration;

@interface IOBSUploadManager : NSObject
{
    id <IOBSHttpDelegate> _httpManager;
    IOBSConfiguration *_config;
}

+ (_Bool)checkAndNotifyErrorBucket:(id)arg1 key:(id)arg2 token:(id)arg3 input:(id)arg4 complete:(CDUnknownBlockType)arg5;
+ (id)sharedInstanceWithConfiguration:(id)arg1;
@property(retain, nonatomic) IOBSConfiguration *config; // @synthesize config=_config;
@property(retain, nonatomic) id <IOBSHttpDelegate> httpManager; // @synthesize httpManager=_httpManager;
- (void).cxx_destruct;
- (void)putFileInternal:(id)arg1 bucket:(id)arg2 fileName:(id)arg3 key:(id)arg4 token:(id)arg5 complete:(CDUnknownBlockType)arg6 option:(id)arg7 withBaseUrl:(id)arg8;
- (void)putFileWithData:(id)arg1 fileName:(id)arg2 bucket:(id)arg3 key:(id)arg4 token:(id)arg5 complete:(CDUnknownBlockType)arg6 option:(id)arg7 withBaseUrl:(id)arg8;
- (void)putFileWithData:(id)arg1 fileName:(id)arg2 bucket:(id)arg3 key:(id)arg4 token:(id)arg5 complete:(CDUnknownBlockType)arg6 option:(id)arg7;
- (void)putFileWithPath:(id)arg1 bucket:(id)arg2 key:(id)arg3 token:(id)arg4 complete:(CDUnknownBlockType)arg5 option:(id)arg6 withBaseUrl:(id)arg7;
- (void)putFileWithPath:(id)arg1 bucket:(id)arg2 key:(id)arg3 token:(id)arg4 complete:(CDUnknownBlockType)arg5 option:(id)arg6;
- (id)initWithConfiguration:(id)arg1;
- (id)initWithRecorder:(id)arg1;
- (id)init;

@end

