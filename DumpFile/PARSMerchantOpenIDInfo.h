//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PARSBaseInfo.h"

@class NSString;

@interface PARSMerchantOpenIDInfo : PARSBaseInfo
{
    NSString *_openId;
    NSString *_openToken;
}

@property(copy, nonatomic) NSString *openToken; // @synthesize openToken=_openToken;
@property(copy, nonatomic) NSString *openId; // @synthesize openId=_openId;
- (void).cxx_destruct;
- (id)initWithJson:(id)arg1;

@end
