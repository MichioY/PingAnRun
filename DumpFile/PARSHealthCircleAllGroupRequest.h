//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PARSOldBaseUserHTTPRequest.h"

@class NSDictionary, PARSHCUserSummaryInfo;

@interface PARSHealthCircleAllGroupRequest : PARSOldBaseUserHTTPRequest
{
    NSDictionary *_infos;
    PARSHCUserSummaryInfo *_userSummaryInfo;
}

@property(readonly, nonatomic) PARSHCUserSummaryInfo *userSummaryInfo; // @synthesize userSummaryInfo=_userSummaryInfo;
@property(readonly, copy, nonatomic) NSDictionary *infos; // @synthesize infos=_infos;
- (void).cxx_destruct;
- (void)handleResponseResult:(id)arg1;
- (id)url;

@end
