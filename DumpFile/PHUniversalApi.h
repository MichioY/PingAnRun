//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PHRequest.h"

@class NSDictionary, NSString;

@interface PHUniversalApi : PHRequest
{
    _Bool _isVerified;
    NSString *_url;
    NSDictionary *_postDict;
    long long _phRequestMethod;
    NSDictionary *_headerDict;
    CDUnknownBlockType _constructingBlock;
}

@property(copy, nonatomic) CDUnknownBlockType constructingBlock; // @synthesize constructingBlock=_constructingBlock;
@property(retain, nonatomic) NSDictionary *headerDict; // @synthesize headerDict=_headerDict;
@property(nonatomic) long long phRequestMethod; // @synthesize phRequestMethod=_phRequestMethod;
@property(nonatomic) _Bool isVerified; // @synthesize isVerified=_isVerified;
@property(retain, nonatomic) NSDictionary *postDict; // @synthesize postDict=_postDict;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
- (void).cxx_destruct;
- (CDUnknownBlockType)constructingBodyBlock;
- (id)requestHeaderFieldValueDictionary;
- (long long)requestMethod;
- (id)securityPolicy;
- (id)requestArgument;
- (id)requestUrl;
- (id)initWithURL:(id)arg1 postData:(id)arg2 verifyCertificate:(_Bool)arg3 requestMethod:(long long)arg4 headerDict:(id)arg5 constructingBlock:(CDUnknownBlockType)arg6;
- (id)initWithURL:(id)arg1 postData:(id)arg2 verifyCertificate:(_Bool)arg3 requestMethod:(long long)arg4 headerDict:(id)arg5;
- (id)initWithURL:(id)arg1 postData:(id)arg2 verifyCertificate:(_Bool)arg3 requestMethod:(long long)arg4;
- (id)initWithURL:(id)arg1 postData:(id)arg2 verifyCertificate:(_Bool)arg3;
- (id)initWithURL:(id)arg1 postData:(id)arg2;
- (id)postPAPayWithApi:(id)arg1 headers:(id)arg2 params:(id)arg3;
- (id)getPAPayWithApi:(id)arg1 headers:(id)arg2 params:(id)arg3;
- (id)postSSWithApi:(id)arg1 isNeedToken:(_Bool)arg2 dataDic:(id)arg3 params:(id)arg4;
- (id)postSSWithApi:(id)arg1 isNeedToken:(_Bool)arg2 params:(id)arg3;
- (id)getSSWithApi:(id)arg1 isNeedToken:(_Bool)arg2 params:(id)arg3;

@end

