//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PARSOldBaseUserHTTPRequest.h"

@class PARSShareInfo;

@interface PARSShareRequest : PARSOldBaseUserHTTPRequest
{
    PARSShareInfo *_aboutInfo;
}

@property(retain, nonatomic) PARSShareInfo *aboutInfo; // @synthesize aboutInfo=_aboutInfo;
- (void).cxx_destruct;
- (void)handleResponseResult:(id)arg1;
- (id)httpBody;
- (id)url;

@end

