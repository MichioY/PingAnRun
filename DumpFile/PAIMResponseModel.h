//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSError;

@interface PAIMResponseModel : NSObject
{
    _Bool _isZipdes;
    long long _statusCode;
    id _responseData;
    NSError *_error;
}

@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(nonatomic) _Bool isZipdes; // @synthesize isZipdes=_isZipdes;
@property(retain, nonatomic) id responseData; // @synthesize responseData=_responseData;
@property(nonatomic) long long statusCode; // @synthesize statusCode=_statusCode;
- (void).cxx_destruct;
- (id)description;
- (id)responseString;
- (id)initWithStatusCode:(long long)arg1 responseData:(id)arg2 error:(id)arg3;

@end

