//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PARSHTTPRequest.h"

@class CLLocation, PARSPlacemark;

@interface PARSBaiduGeocoderRequest : PARSHTTPRequest
{
    CLLocation *_location;
    PARSPlacemark *_placemark;
}

@property(retain, nonatomic) PARSPlacemark *placemark; // @synthesize placemark=_placemark;
@property(retain, nonatomic) CLLocation *location; // @synthesize location=_location;
- (void).cxx_destruct;
- (void)handleResponseResult:(id)arg1;
- (id)httpBody;
- (id)httpMethod;
- (id)url;

@end
