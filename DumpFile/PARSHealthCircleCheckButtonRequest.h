//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PARSOldBaseUserHTTPRequest.h"

@class NSArray;

@interface PARSHealthCircleCheckButtonRequest : PARSOldBaseUserHTTPRequest
{
    NSArray *_models;
}

@property(retain, nonatomic) NSArray *models; // @synthesize models=_models;
- (void).cxx_destruct;
- (void)handleResponseResult:(id)arg1;
- (_Bool)shouldEncryptPhoneWithTimstamp;
- (_Bool)needMobilePhone;
- (id)httpBody;
- (id)url;
- (id)initWithUserId:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end
