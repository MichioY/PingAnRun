//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PARSOldBaseUserHTTPRequest.h"

@class NSString;

@interface PARSGetOpenTokenRequest : PARSOldBaseUserHTTPRequest
{
    NSString *_openToken;
}

@property(copy, nonatomic) NSString *openToken; // @synthesize openToken=_openToken;
- (void).cxx_destruct;
- (void)handleResponseResult:(id)arg1;
- (id)httpBody;
- (id)url;

@end
