//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PARSProtalBaseHTTPRequest.h"

@class NSArray, NSString;

@interface PARSMonitorInfoUploadRequest : PARSProtalBaseHTTPRequest
{
    NSArray *_monitorInfoArray;
    NSString *_deviceId;
    long long _timestamp;
    NSArray *_groupDictArray;
}

@property(retain, nonatomic) NSArray *groupDictArray; // @synthesize groupDictArray=_groupDictArray;
@property(nonatomic) long long timestamp; // @synthesize timestamp=_timestamp;
@property(copy, nonatomic) NSString *deviceId; // @synthesize deviceId=_deviceId;
@property(retain, nonatomic) NSArray *monitorInfoArray; // @synthesize monitorInfoArray=_monitorInfoArray;
- (void).cxx_destruct;
- (void)handleResponseResult:(id)arg1;
- (id)httpBody;
- (_Bool)supportGzip;
- (long long)requestBodyType;
- (id)httpHeader;
- (_Bool)needMobilePhone;
- (_Bool)shouldEncryptPhoneWithTimstamp;
- (id)url;

@end

