//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PARSBaseInfo.h"

@class NSString;

@interface PARSBankCardInfo : PARSBaseInfo
{
    NSString *_bankCardId;
    NSString *_bankEnc;
    NSString *_bankEncMask;
    NSString *_bankCode;
    NSString *_bankName;
    NSString *_cardName;
    NSString *_bankType;
    NSString *_bankShort;
    NSString *_bankLogoUrl;
    long long _cardType;
}

@property(nonatomic) long long cardType; // @synthesize cardType=_cardType;
@property(copy, nonatomic) NSString *bankLogoUrl; // @synthesize bankLogoUrl=_bankLogoUrl;
@property(copy, nonatomic) NSString *bankShort; // @synthesize bankShort=_bankShort;
@property(copy, nonatomic) NSString *bankType; // @synthesize bankType=_bankType;
@property(copy, nonatomic) NSString *cardName; // @synthesize cardName=_cardName;
@property(copy, nonatomic) NSString *bankName; // @synthesize bankName=_bankName;
@property(copy, nonatomic) NSString *bankCode; // @synthesize bankCode=_bankCode;
@property(copy, nonatomic) NSString *bankEncMask; // @synthesize bankEncMask=_bankEncMask;
@property(copy, nonatomic) NSString *bankEnc; // @synthesize bankEnc=_bankEnc;
@property(copy, nonatomic) NSString *bankCardId; // @synthesize bankCardId=_bankCardId;
- (void).cxx_destruct;
- (id)initWithJson:(id)arg1;

@end
