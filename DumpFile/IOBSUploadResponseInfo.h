//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSError;

@interface IOBSUploadResponseInfo : NSObject
{
    _Bool _canceled;
    long long _statusCode;
    NSError *_error;
}

+ (id)responseInfoWithInvalidArgument:(id)arg1;
+ (id)responseInfoWithNetError:(id)arg1;
+ (id)responseInfoWithFileError:(id)arg1;
+ (id)cancel;
@property(readonly, nonatomic, getter=isCancelled) _Bool canceled; // @synthesize canceled=_canceled;
@property(copy, nonatomic) NSError *error; // @synthesize error=_error;
@property(nonatomic) long long statusCode; // @synthesize statusCode=_statusCode;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool couldRetry;
@property(readonly, nonatomic, getter=isOK) _Bool ok;
- (_Bool)isCanceled;
- (id)description;
- (id)initWithStatus:(int)arg1 error:(id)arg2 host:(id)arg3 duration:(double)arg4;
- (id)initWithStatus:(int)arg1 error:(id)arg2;
- (id)initWithStatus:(int)arg1 errorDescription:(id)arg2;
- (id)initWithCancelled;
- (id)initWithStateCode:(int)arg1 withBody:(id)arg2 withError:(id)arg3;

@end

