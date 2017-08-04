//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PARSYZTBaseRequest.h"

@class NSString, PARSYZTVerificationCodeInfo;

@interface PARSYZTVerificationCodeRequest : PARSYZTBaseRequest
{
    NSString *_account;
    PARSYZTVerificationCodeInfo *_verificationCode;
}

@property(retain, nonatomic) PARSYZTVerificationCodeInfo *verificationCode; // @synthesize verificationCode=_verificationCode;
@property(copy, nonatomic) NSString *account; // @synthesize account=_account;
- (void).cxx_destruct;
- (void)handleResponseResult:(id)arg1;
- (id)httpBody;
- (id)url;
- (id)initWithAccount:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end
