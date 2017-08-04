//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PARSOldBaseUserHTTPRequest.h"

@class NSString, PARSMerchantOpenIDInfo;

@interface PARSMerchantOpenIDRequest : PARSOldBaseUserHTTPRequest
{
    NSString *_merchantCode;
    PARSMerchantOpenIDInfo *_openIdInfo;
}

@property(retain, nonatomic) PARSMerchantOpenIDInfo *openIdInfo; // @synthesize openIdInfo=_openIdInfo;
@property(copy, nonatomic) NSString *merchantCode; // @synthesize merchantCode=_merchantCode;
- (void).cxx_destruct;
- (void)handleResponseResult:(id)arg1;
- (id)httpBody;
- (_Bool)needMobilePhone;
- (_Bool)shouldEncryptPhoneWithTimstamp;
- (id)url;

@end
