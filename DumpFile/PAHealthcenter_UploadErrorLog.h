//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PABaseRequest.h"

@interface PAHealthcenter_UploadErrorLog : PABaseRequest
{
}

- (void)deserializeResponse:(id)arg1;
- (id)result;
- (long long)handleError;
- (void)setErrorLog:(id)arg1;
- (void)setLogTfs:(id)arg1;
- (id)initWithPhoneVersion:(id)arg1 systemVersion:(id)arg2 sdkVersion:(id)arg3;

@end

