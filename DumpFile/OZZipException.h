//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSException.h"

@interface OZZipException : NSException
{
    long long _error;
}

+ (id)zipExceptionWithError:(long long)arg1 reason:(id)arg2;
+ (id)zipExceptionWithReason:(id)arg1;
@property(readonly, nonatomic) long long error; // @synthesize error=_error;
- (id)initWithError:(long long)arg1 reason:(id)arg2;
- (id)initWithReason:(id)arg1;

@end
