//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIWebView.h"

@class PAZNAFHTTPSessionManager;

@interface UIWebView (PAZNAFNetworking)
- (void)loadRequest:(id)arg1 MIMEType:(id)arg2 textEncodingName:(id)arg3 progress:(id *)arg4 success:(CDUnknownBlockType)arg5 failure:(CDUnknownBlockType)arg6;
- (void)loadRequest:(id)arg1 progress:(id *)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (void)setResponseSerializer:(id)arg1;
- (id)responseSerializer;
@property(retain, nonatomic) PAZNAFHTTPSessionManager *sessionManager;
@end
