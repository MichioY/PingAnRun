//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSMutableDictionary, NSString, PAResponse;

@interface PABaseRequest : NSObject
{
    NSMutableDictionary *_params;
    NSMutableDictionary *_verifyMsgs;
    NSString *_methodName;
    long long _securityType;
    long long _systime;
    PAResponse *_response;
    NSDictionary *_userInfo;
    NSString *_sourceURLString;
}

@property(retain, nonatomic) NSString *sourceURLString; // @synthesize sourceURLString=_sourceURLString;
@property(retain, nonatomic) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(nonatomic) long long systime; // @synthesize systime=_systime;
@property(retain, nonatomic) NSMutableDictionary *params; // @synthesize params=_params;
- (void).cxx_destruct;
- (id)result;
- (void)fillResponse:(long long)arg1 length:(long long)arg2 message:(id)arg3 input:(id)arg4;
- (void)deserializeResponse:(id)arg1;
- (id)returnMessage;
- (long long)returnCode;
- (void)removeVerifyErrorWithName:(id)arg1;
- (void)addVerifyErrorWithName:(id)arg1 value:(id)arg2;
- (id)stringInfo;
- (void)setParameter:(id)arg1 withName:(id)arg2;
- (id)verifyMsgs;
- (long long)securityType;
- (id)methodName;
- (id)initWithMethodName:(id)arg1 securityType:(int)arg2;

@end
