//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@protocol QalUserStatusListenerProtocol <NSObject>
- (void)onTicketError:(NSString *)arg1 andErrorcode:(NSString *)arg2;
- (void)onForceOffLine:(NSString *)arg1;
- (void)onRegFail:(int)arg1 andErrMsg:(NSString *)arg2 andIdentifier:(NSString *)arg3;
- (void)onRegSucc:(NSString *)arg1;
@end
