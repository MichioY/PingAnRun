//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PARSOldBaseUserHTTPRequest.h"

@class NSDictionary, NSString, PARSCarInfo;

@interface PARSBreakRuleDetailInfoRequest : PARSOldBaseUserHTTPRequest
{
    PARSCarInfo *_carInfo;
    NSString *_breakRuleVersion;
    NSDictionary *_resultDict;
}

@property(retain, nonatomic) NSDictionary *resultDict; // @synthesize resultDict=_resultDict;
@property(copy, nonatomic) NSString *breakRuleVersion; // @synthesize breakRuleVersion=_breakRuleVersion;
@property(retain, nonatomic) PARSCarInfo *carInfo; // @synthesize carInfo=_carInfo;
- (void).cxx_destruct;
- (void)handleResponseResult:(id)arg1;
- (id)httpBody;
- (id)url;

@end

