//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PARSProtalBaseUserHTTPRequest.h"

@class NSString;

@interface PARSHealthCircleQueryUserInfoRequest : PARSProtalBaseUserHTTPRequest
{
    NSString *_socialCloudId;
    NSString *_encryptedMobilePhone;
}

@property(readonly, copy, nonatomic) NSString *encryptedMobilePhone; // @synthesize encryptedMobilePhone=_encryptedMobilePhone;
@property(copy, nonatomic) NSString *socialCloudId; // @synthesize socialCloudId=_socialCloudId;
- (void).cxx_destruct;
- (void)handleResponseResult:(id)arg1;
- (id)httpBody;
- (id)url;

@end

