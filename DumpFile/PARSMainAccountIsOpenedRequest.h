//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PARSOldBaseUserHTTPRequest.h"

@class NSString;

@interface PARSMainAccountIsOpenedRequest : PARSOldBaseUserHTTPRequest
{
    NSString *_isOpened;
}

@property(retain, nonatomic) NSString *isOpened; // @synthesize isOpened=_isOpened;
- (void).cxx_destruct;
- (void)handleResponseResult:(id)arg1;
- (id)httpBody;
- (_Bool)needMobilePhone;
- (_Bool)shouldEncryptPhoneWithTimstamp;
- (id)url;

@end
