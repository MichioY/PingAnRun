//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BaseResponse.h"

@class NSString;

@interface ValifyTelResponse : BaseResponse
{
    NSString *_registerFlag;
    NSString *_connectFlag;
    NSString *_bindFlag;
    NSString *_toaName;
    NSString *_phone;
    NSString *_toaFlag;
    NSString *_toaCode;
    NSString *_customerId;
}

@property(retain, nonatomic) NSString *customerId; // @synthesize customerId=_customerId;
@property(retain, nonatomic) NSString *toaCode; // @synthesize toaCode=_toaCode;
@property(retain, nonatomic) NSString *toaFlag; // @synthesize toaFlag=_toaFlag;
@property(retain, nonatomic) NSString *phone; // @synthesize phone=_phone;
@property(retain, nonatomic) NSString *toaName; // @synthesize toaName=_toaName;
@property(retain, nonatomic) NSString *bindFlag; // @synthesize bindFlag=_bindFlag;
@property(retain, nonatomic) NSString *connectFlag; // @synthesize connectFlag=_connectFlag;
@property(retain, nonatomic) NSString *registerFlag; // @synthesize registerFlag=_registerFlag;
- (void).cxx_destruct;
- (_Bool)hasPayPWD;
- (_Bool)hasAccount;
- (_Bool)isBinded;
- (_Bool)isConnected;
- (_Bool)isRegisted;
- (_Bool)isOK;
- (id)initWithDictionary:(id)arg1;
- (id)initWithType:(long long)arg1;

@end

