//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PARSBaseInfo.h"

@class NSString;

@interface PARSQiNiuUploadTokenInfo : PARSBaseInfo
{
    NSString *_token;
    NSString *_serviceTime;
    NSString *_expiredDate;
    NSString *_timeout;
}

@property(copy, nonatomic) NSString *timeout; // @synthesize timeout=_timeout;
@property(copy, nonatomic) NSString *expiredDate; // @synthesize expiredDate=_expiredDate;
@property(copy, nonatomic) NSString *serviceTime; // @synthesize serviceTime=_serviceTime;
@property(copy, nonatomic) NSString *token; // @synthesize token=_token;
- (void).cxx_destruct;
- (id)initWithJson:(id)arg1;

@end
