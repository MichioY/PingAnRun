//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "QNHttpDelegate.h"

@class AFHTTPRequestOperationManager, NSString, QNDnsManager;

@interface QNHttpManager : NSObject <QNHttpDelegate>
{
    unsigned int _timeout;
    AFHTTPRequestOperationManager *_httpManager;
    CDUnknownBlockType _converter;
    QNDnsManager *_dns;
}

+ (id)buildResponseInfo:(id)arg1 withError:(id)arg2 withDuration:(double)arg3 withResponse:(id)arg4 withIp:(id)arg5;
@property(retain, nonatomic) QNDnsManager *dns; // @synthesize dns=_dns;
@property(copy, nonatomic) CDUnknownBlockType converter; // @synthesize converter=_converter;
@property unsigned int timeout; // @synthesize timeout=_timeout;
@property(retain, nonatomic) AFHTTPRequestOperationManager *httpManager; // @synthesize httpManager=_httpManager;
- (void).cxx_destruct;
- (void)post:(id)arg1 withData:(id)arg2 withParams:(id)arg3 withHeaders:(id)arg4 withCompleteBlock:(CDUnknownBlockType)arg5 withProgressBlock:(CDUnknownBlockType)arg6 withCancelBlock:(CDUnknownBlockType)arg7;
- (void)multipartPost:(id)arg1 withData:(id)arg2 withParams:(id)arg3 withFileName:(id)arg4 withMimeType:(id)arg5 withCompleteBlock:(CDUnknownBlockType)arg6 withProgressBlock:(CDUnknownBlockType)arg7 withCancelBlock:(CDUnknownBlockType)arg8;
- (void)sendRequest:(id)arg1 withCompleteBlock:(CDUnknownBlockType)arg2 withProgressBlock:(CDUnknownBlockType)arg3 withCancelBlock:(CDUnknownBlockType)arg4;
- (void)sendRequest2:(id)arg1 withCompleteBlock:(CDUnknownBlockType)arg2 withProgressBlock:(CDUnknownBlockType)arg3 withCancelBlock:(CDUnknownBlockType)arg4 withIpArray:(id)arg5 withIndex:(int)arg6 withDomain:(id)arg7 withRetryTimes:(int)arg8 withStartTime:(id)arg9;
- (id)init;
- (id)initWithTimeout:(unsigned int)arg1 urlConverter:(CDUnknownBlockType)arg2 dns:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
