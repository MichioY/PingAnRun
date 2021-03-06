//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IOBSUploadOption, NSData, NSDictionary, NSString;

@protocol IOBSHttpDelegate <NSObject>
- (void)putFileWithData:(NSData *)arg1 fileName:(NSString *)arg2 bucket:(NSString *)arg3 key:(NSString *)arg4 token:(NSString *)arg5 complete:(void (^)(IOBSUploadResponseInfo *, NSString *, NSDictionary *))arg6 option:(IOBSUploadOption *)arg7 withBaseUrl:(NSString *)arg8;
- (void)putFileWithData:(NSData *)arg1 fileName:(NSString *)arg2 bucket:(NSString *)arg3 key:(NSString *)arg4 token:(NSString *)arg5 complete:(void (^)(IOBSUploadResponseInfo *, NSString *, NSDictionary *))arg6 option:(IOBSUploadOption *)arg7;
- (void)post:(NSString *)arg1 withParams:(NSDictionary *)arg2 withCompleteBlock:(void (^)(IOBSUploadResponseInfo *, NSDictionary *))arg3;
- (void)post:(NSString *)arg1 withData:(NSData *)arg2 fileName:(NSString *)arg3 mimeType:(NSString *)arg4 withParams:(NSDictionary *)arg5 withCompleteBlock:(void (^)(IOBSUploadResponseInfo *, NSDictionary *))arg6 withProgressBlock:(void (^)(long long, long long))arg7;
@end

