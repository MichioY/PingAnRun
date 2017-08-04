//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PARSProtalBaseUserHTTPRequest.h"

@class NSString, PARSLifeAidHomePageInfo;

@interface PARSLifeAidHomePageRequest : PARSProtalBaseUserHTTPRequest
{
    NSString *_dailyVersion;
    PARSLifeAidHomePageInfo *_resultInfo;
    NSString *_cityId;
}

@property(retain, nonatomic) NSString *cityId; // @synthesize cityId=_cityId;
@property(retain, nonatomic) PARSLifeAidHomePageInfo *resultInfo; // @synthesize resultInfo=_resultInfo;
@property(retain, nonatomic) NSString *dailyVersion; // @synthesize dailyVersion=_dailyVersion;
- (void).cxx_destruct;
- (void)handleResponseResult:(id)arg1;
- (id)httpBody;
- (id)url;
- (id)initWithUserId:(id)arg1 cityId:(id)arg2 completion:(CDUnknownBlockType)arg3;

@end
