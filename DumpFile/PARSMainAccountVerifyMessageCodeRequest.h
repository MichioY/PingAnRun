//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PARSProtalBaseUserHTTPRequest.h"

@class PARSMainAccountVerifyMessageCodeParam;

@interface PARSMainAccountVerifyMessageCodeRequest : PARSProtalBaseUserHTTPRequest
{
    PARSMainAccountVerifyMessageCodeParam *_param;
}

@property(retain, nonatomic) PARSMainAccountVerifyMessageCodeParam *param; // @synthesize param=_param;
- (void).cxx_destruct;
- (id)httpBody;
- (id)url;

@end
