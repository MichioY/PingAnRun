//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSString;

@protocol QalPushListenerProtocol <NSObject>
- (void)onPushFail:(int)arg1;
- (void)onPushSucc:(NSData *)arg1 andCmd:(NSString *)arg2 andId:(NSString *)arg3;
@end
