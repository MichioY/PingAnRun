//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PARSOldHTTPRequest.h"

@class NSDictionary, NSString, PARSSignInfo, PARSUserInfo;

@interface PARSLoginVerifyRequest : PARSOldHTTPRequest
{
    NSString *_OTPCode;
    PARSUserInfo *_userInfo;
    PARSSignInfo *_signInfo;
    NSString *_account;
    NSString *_password;
    NSDictionary *_OTPCodeParams;
}

@property(copy, nonatomic) NSDictionary *OTPCodeParams; // @synthesize OTPCodeParams=_OTPCodeParams;
@property(copy, nonatomic) NSString *password; // @synthesize password=_password;
@property(copy, nonatomic) NSString *account; // @synthesize account=_account;
@property(retain, nonatomic) PARSSignInfo *signInfo; // @synthesize signInfo=_signInfo;
@property(retain, nonatomic) PARSUserInfo *userInfo; // @synthesize userInfo=_userInfo;
@property(copy, nonatomic) NSString *OTPCode; // @synthesize OTPCode=_OTPCode;
- (void).cxx_destruct;
- (void)handleResponseResult:(id)arg1;
- (id)httpBody;
- (id)url;
- (id)initWithAccount:(id)arg1 password:(id)arg2 completion:(CDUnknownBlockType)arg3;

@end
