//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PARSBaseInfo.h"

@class NSString;

@interface PARSRegisterVerifyCodeInfo : PARSBaseInfo
{
    NSString *_imageBase64;
    NSString *_vcKey;
    NSString *_vcMd5;
    NSString *_expire;
    NSString *_code;
    NSString *_msg;
}

@property(copy, nonatomic) NSString *msg; // @synthesize msg=_msg;
@property(copy, nonatomic) NSString *code; // @synthesize code=_code;
@property(copy, nonatomic) NSString *expire; // @synthesize expire=_expire;
@property(copy, nonatomic) NSString *vcMd5; // @synthesize vcMd5=_vcMd5;
@property(copy, nonatomic) NSString *vcKey; // @synthesize vcKey=_vcKey;
@property(copy, nonatomic) NSString *imageBase64; // @synthesize imageBase64=_imageBase64;
- (void).cxx_destruct;
- (id)initWithJson:(id)arg1;

@end
