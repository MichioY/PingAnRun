//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PARSHTTPRequest.h"

@class NSString, PARSYZTSignInfo, PARSYZTSignTimestampInfo, PARSYZTUserInfo;

@interface PARSSignYZTAssertRequest : PARSHTTPRequest
{
    NSString *_account;
    NSString *_assert;
    PARSYZTSignTimestampInfo *_signTimestamp;
    long long _loginSource;
    PARSYZTSignInfo *_signInfo;
    PARSYZTUserInfo *_userInfo;
}

@property(retain, nonatomic) PARSYZTUserInfo *userInfo; // @synthesize userInfo=_userInfo;
@property(retain, nonatomic) PARSYZTSignInfo *signInfo; // @synthesize signInfo=_signInfo;
@property(nonatomic) long long loginSource; // @synthesize loginSource=_loginSource;
@property(retain, nonatomic) PARSYZTSignTimestampInfo *signTimestamp; // @synthesize signTimestamp=_signTimestamp;
@property(copy, nonatomic) NSString *assert; // @synthesize assert=_assert;
@property(copy, nonatomic) NSString *account; // @synthesize account=_account;
- (void).cxx_destruct;
- (void)handleResponseResult:(id)arg1;
- (id)httpBody;
- (id)url;
- (id)initWithAccount:(id)arg1 assert:(id)arg2 signTimestamp:(id)arg3 loginSource:(long long)arg4 completion:(CDUnknownBlockType)arg5;

@end
