//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PARSProtalBaseUserHTTPRequest.h"

@class NSArray;

@interface PARSMissionListRequest : PARSProtalBaseUserHTTPRequest
{
    NSArray *_missionList;
}

@property(retain, nonatomic) NSArray *missionList; // @synthesize missionList=_missionList;
- (void).cxx_destruct;
- (void)handleResponseResult:(id)arg1;
- (id)url;

@end

