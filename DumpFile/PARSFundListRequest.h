//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PARSFundBaseHTTPRequest.h"

@class NSDictionary;

@interface PARSFundListRequest : PARSFundBaseHTTPRequest
{
    NSDictionary *_typeFunds;
}

@property(retain, nonatomic) NSDictionary *typeFunds; // @synthesize typeFunds=_typeFunds;
- (void).cxx_destruct;
- (void)handleResponseResult:(id)arg1;
- (id)httpBody;
- (id)httpMethod;
- (long long)responseBodyType;
- (id)url;

@end

