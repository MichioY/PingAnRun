//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface PARSPayRequestParam : NSObject
{
    NSString *_openId;
    NSString *_prepayId;
    NSString *_amount;
    long long _payType;
    NSString *_payTypeString;
    NSString *_payId;
    NSString *_cardId;
    NSString *_bankCode;
    NSString *_bankName;
    NSString *_currency;
    NSString *_orderType;
    NSString *_couponAmount;
    NSString *_integration;
    NSString *_passwd;
    NSString *_appId;
    NSString *_signature;
}

@property(retain, nonatomic) NSString *signature; // @synthesize signature=_signature;
@property(retain, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(retain, nonatomic) NSString *passwd; // @synthesize passwd=_passwd;
@property(retain, nonatomic) NSString *integration; // @synthesize integration=_integration;
@property(retain, nonatomic) NSString *couponAmount; // @synthesize couponAmount=_couponAmount;
@property(retain, nonatomic) NSString *orderType; // @synthesize orderType=_orderType;
@property(retain, nonatomic) NSString *currency; // @synthesize currency=_currency;
@property(retain, nonatomic) NSString *bankName; // @synthesize bankName=_bankName;
@property(retain, nonatomic) NSString *bankCode; // @synthesize bankCode=_bankCode;
@property(retain, nonatomic) NSString *cardId; // @synthesize cardId=_cardId;
@property(retain, nonatomic) NSString *payId; // @synthesize payId=_payId;
@property(retain, nonatomic) NSString *payTypeString; // @synthesize payTypeString=_payTypeString;
@property(nonatomic) long long payType; // @synthesize payType=_payType;
@property(retain, nonatomic) NSString *amount; // @synthesize amount=_amount;
@property(retain, nonatomic) NSString *prepayId; // @synthesize prepayId=_prepayId;
@property(copy, nonatomic) NSString *openId; // @synthesize openId=_openId;
- (void).cxx_destruct;
- (id)checkNull:(id)arg1;
- (id)needSignatureParamDicArray;
- (id)initWithPrepayId:(id)arg1;

@end
