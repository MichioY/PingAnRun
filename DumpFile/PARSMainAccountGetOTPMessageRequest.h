//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PARSOldBaseUserHTTPRequest.h"

@class NSString;

@interface PARSMainAccountGetOTPMessageRequest : PARSOldBaseUserHTTPRequest
{
    NSString *_paymentAmount;
    NSString *_bankCardNo;
    NSString *_tailMobileNo;
}

@property(retain, nonatomic) NSString *tailMobileNo; // @synthesize tailMobileNo=_tailMobileNo;
@property(retain, nonatomic) NSString *bankCardNo; // @synthesize bankCardNo=_bankCardNo;
@property(retain, nonatomic) NSString *paymentAmount; // @synthesize paymentAmount=_paymentAmount;
- (void).cxx_destruct;
- (void)handleResponseResult:(id)arg1;
- (id)httpBody;
- (_Bool)needMobilePhone;
- (_Bool)shouldEncryptPhoneWithTimstamp;
- (id)url;

@end
