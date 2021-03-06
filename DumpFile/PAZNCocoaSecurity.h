//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface PAZNCocoaSecurity : NSObject
{
}

+ (id)hmacSha512WithData:(id)arg1 hmacKey:(id)arg2;
+ (id)hmacSha512:(id)arg1 hmacKey:(id)arg2;
+ (id)hmacSha384WithData:(id)arg1 hmacKey:(id)arg2;
+ (id)hmacSha384:(id)arg1 hmacKey:(id)arg2;
+ (id)hmacSha256WithData:(id)arg1 hmacKey:(id)arg2;
+ (id)hmacSha256:(id)arg1 hmacKey:(id)arg2;
+ (id)hmacSha224WithData:(id)arg1 hmacKey:(id)arg2;
+ (id)hmacSha224:(id)arg1 hmacKey:(id)arg2;
+ (id)hmacSha1WithData:(id)arg1 hmacKey:(id)arg2;
+ (id)hmacSha1:(id)arg1 hmacKey:(id)arg2;
+ (id)sha512WithData:(id)arg1;
+ (id)sha512:(id)arg1;
+ (id)sha384WithData:(id)arg1;
+ (id)sha384:(id)arg1;
+ (id)sha256WithData:(id)arg1;
+ (id)sha256:(id)arg1;
+ (id)sha224WithData:(id)arg1;
+ (id)sha224:(id)arg1;
+ (id)sha1WithData:(id)arg1;
+ (id)sha1:(id)arg1;
+ (id)hmacMd5WithData:(id)arg1 hmacKey:(id)arg2;
+ (id)hmacMd5:(id)arg1 hmacKey:(id)arg2;
+ (id)md5WithData:(id)arg1;
+ (id)md5:(id)arg1;
+ (id)aesDecryptWithData:(id)arg1 key:(id)arg2 iv:(id)arg3;
+ (id)aesDecryptWithBase64:(id)arg1 key:(id)arg2 iv:(id)arg3;
+ (id)aesDecryptWithBase64:(id)arg1 hexKey:(id)arg2 hexIv:(id)arg3;
+ (id)aesDecryptWithBase64:(id)arg1 key:(id)arg2;
+ (id)aesEncryptWithData:(id)arg1 key:(id)arg2 iv:(id)arg3;
+ (id)aesEncrypt:(id)arg1 key:(id)arg2 iv:(id)arg3;
+ (id)aesEncrypt:(id)arg1 hexKey:(id)arg2 hexIv:(id)arg3;
+ (id)aesEncrypt:(id)arg1 key:(id)arg2;

@end

