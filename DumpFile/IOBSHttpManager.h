//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IOBSHttpDelegate.h"
#import "NSURLSessionDelegate.h"
#import "NSURLSessionTaskDelegate.h"

@class IOBSDnsManager, IOBSUploadOption, IOBSUploadResponseInfo, NSDictionary, NSError, NSString;

@interface IOBSHttpManager : NSObject <IOBSHttpDelegate, NSURLSessionDelegate, NSURLSessionTaskDelegate>
{
    unsigned int _timeout;
    CDUnknownBlockType _completeBlock;
    CDUnknownBlockType _progressBlock;
    NSDictionary *_responseDic;
    CDUnknownBlockType _converter;
    IOBSDnsManager *_dns;
    CDUnknownBlockType _completeHandle;
    IOBSUploadOption *_uploadOption;
    IOBSUploadResponseInfo *_uploadInfo;
    NSError *_uploadError;
    NSString *_name;
    long long _flag;
}

@property(nonatomic) long long flag; // @synthesize flag=_flag;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSError *uploadError; // @synthesize uploadError=_uploadError;
@property(copy, nonatomic) IOBSUploadResponseInfo *uploadInfo; // @synthesize uploadInfo=_uploadInfo;
@property(copy, nonatomic) IOBSUploadOption *uploadOption; // @synthesize uploadOption=_uploadOption;
@property(copy, nonatomic) CDUnknownBlockType completeHandle; // @synthesize completeHandle=_completeHandle;
@property(retain, nonatomic) IOBSDnsManager *dns; // @synthesize dns=_dns;
@property(copy, nonatomic) CDUnknownBlockType converter; // @synthesize converter=_converter;
@property unsigned int timeout; // @synthesize timeout=_timeout;
@property(retain, nonatomic) NSDictionary *responseDic; // @synthesize responseDic=_responseDic;
@property(copy, nonatomic) CDUnknownBlockType progressBlock; // @synthesize progressBlock=_progressBlock;
@property(copy, nonatomic) CDUnknownBlockType completeBlock; // @synthesize completeBlock=_completeBlock;
- (void).cxx_destruct;
- (id)buildResponseInfo:(id)arg1 withError:(id)arg2 withResponse:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didSendBodyData:(long long)arg3 totalBytesSent:(long long)arg4 totalBytesExpectedToSend:(long long)arg5;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (id)JSONObjectWithData:(id)arg1;
- (void)post:(id)arg1 withData:(id)arg2 fileName:(id)arg3 mimeType:(id)arg4 withParams:(id)arg5 withCompleteBlock:(CDUnknownBlockType)arg6 withProgressBlock:(CDUnknownBlockType)arg7;
- (void)post:(id)arg1 withParams:(id)arg2 withCompleteBlock:(CDUnknownBlockType)arg3;
- (void)upload:(id)arg1 mimeType:(id)arg2 fileData:(id)arg3 params:(id)arg4 urlString:(id)arg5;
- (void)putFileWithData:(id)arg1 fileName:(id)arg2 bucket:(id)arg3 key:(id)arg4 token:(id)arg5 complete:(CDUnknownBlockType)arg6 option:(id)arg7 withBaseUrl:(id)arg8;
- (void)putFileWithData:(id)arg1 fileName:(id)arg2 bucket:(id)arg3 key:(id)arg4 token:(id)arg5 complete:(CDUnknownBlockType)arg6 option:(id)arg7;
- (_Bool)checkAndNotifyKey:(id)arg1 token:(id)arg2 input:(id)arg3 bucket:(id)arg4 fileName:(id)arg5;
- (id)initWithTimeout:(unsigned int)arg1 urlConverter:(CDUnknownBlockType)arg2 dns:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
