//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PARSProtalBaseUserHTTPRequest.h"

@class NSString;

@interface PARSInformationRaisePopularityRequest : PARSProtalBaseUserHTTPRequest
{
    NSString *_infoNo;
}

@property(copy, nonatomic) NSString *infoNo; // @synthesize infoNo=_infoNo;
- (void).cxx_destruct;
- (void)handleResponseResult:(id)arg1;
- (id)httpBody;
- (id)url;

@end

