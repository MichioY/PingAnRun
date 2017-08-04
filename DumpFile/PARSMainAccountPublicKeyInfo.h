//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PARSBaseInfo.h"

@class NSString;

@interface PARSMainAccountPublicKeyInfo : PARSBaseInfo
{
    NSString *_pamaPublicKey;
    NSString *_hsmPublicKey;
    NSString *_appPublicKey;
    NSString *_currentTime;
    NSString *_signatureKey;
}

@property(readonly, nonatomic) NSString *signatureKey; // @synthesize signatureKey=_signatureKey;
@property(retain, nonatomic) NSString *currentTime; // @synthesize currentTime=_currentTime;
@property(retain, nonatomic) NSString *appPublicKey; // @synthesize appPublicKey=_appPublicKey;
@property(retain, nonatomic) NSString *hsmPublicKey; // @synthesize hsmPublicKey=_hsmPublicKey;
@property(retain, nonatomic) NSString *pamaPublicKey; // @synthesize pamaPublicKey=_pamaPublicKey;
- (void).cxx_destruct;
- (id)encryptedPasswdMainAccount:(id)arg1;
- (id)encryptedPasswd:(id)arg1;
- (id)initWithJson:(id)arg1;

@end
