//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSObject<OS_dispatch_queue>, PHAFHTTPRequestOperationManager, PHNetworkConfig;

@interface PHNetworkAgent : NSObject
{
    PHAFHTTPRequestOperationManager *_manager;
    PHNetworkConfig *_config;
    NSMutableDictionary *_requestsRecord;
    NSObject<OS_dispatch_queue> *_requestProcessingQueue;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (id)requestOperationWithRequest:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (id)requestOperationWithHTTPMethod:(id)arg1 requestSerializer:(id)arg2 URLString:(id)arg3 parameters:(id)arg4;
- (void)removeOperation:(id)arg1;
- (void)addOperation:(id)arg1;
- (id)requestHashKey:(id)arg1;
- (void)handleRequestResult:(id)arg1;
- (_Bool)checkResult:(id)arg1;
- (void)cancelAllRequests;
- (void)cancelRequest:(id)arg1;
- (void)addRequest:(id)arg1;
- (id)buildRequestUrl:(id)arg1;
- (id)init;

@end

