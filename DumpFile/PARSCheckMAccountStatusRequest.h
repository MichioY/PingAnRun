//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PARSOldBaseUserHTTPRequest.h"

@interface PARSCheckMAccountStatusRequest : PARSOldBaseUserHTTPRequest
{
    _Bool _isRisk;
}

@property(nonatomic) _Bool isRisk; // @synthesize isRisk=_isRisk;
- (void)handleResponseResult:(id)arg1;
- (id)reuseId;
- (id)url;

@end
