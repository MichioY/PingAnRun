//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSError, NSString, PAIMHTTPRequest;

@protocol PAHTTPRequestDelegate <NSObject>
- (void)requestFinished:(PAIMHTTPRequest *)arg1 withResult:(NSString *)arg2;

@optional
- (void)requestFailed:(PAIMHTTPRequest *)arg1 error:(NSError *)arg2;
- (void)requestFinishedWithData:(PAIMHTTPRequest *)arg1 withData:(NSData *)arg2;
@end
