//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PARSBaseInfo.h"

@class NSString;

@interface PARSWCPayPubKeyInfo : PARSBaseInfo
{
    NSString *_appPublicKey;
    NSString *_currentTime;
    NSString *_hsmPublicKey;
    NSString *_signatureKey;
}

@property(copy, nonatomic) NSString *signatureKey; // @synthesize signatureKey=_signatureKey;
@property(copy, nonatomic) NSString *hsmPublicKey; // @synthesize hsmPublicKey=_hsmPublicKey;
@property(copy, nonatomic) NSString *currentTime; // @synthesize currentTime=_currentTime;
@property(copy, nonatomic) NSString *appPublicKey; // @synthesize appPublicKey=_appPublicKey;
- (void).cxx_destruct;
- (id)initWithJson:(id)arg1;

@end

