//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PARSBaseInfo.h"

@class NSString;

@interface PARSMainAccountApplyForUnbindParam : PARSBaseInfo
{
    NSString *_bankEnc;
    NSString *_reason;
    NSString *_frontOfIdCardUrl;
    NSString *_backOfIdCardUrl;
    NSString *_holdingIdCardUrl;
}

@property(copy, nonatomic) NSString *holdingIdCardUrl; // @synthesize holdingIdCardUrl=_holdingIdCardUrl;
@property(copy, nonatomic) NSString *backOfIdCardUrl; // @synthesize backOfIdCardUrl=_backOfIdCardUrl;
@property(copy, nonatomic) NSString *frontOfIdCardUrl; // @synthesize frontOfIdCardUrl=_frontOfIdCardUrl;
@property(copy, nonatomic) NSString *reason; // @synthesize reason=_reason;
@property(copy, nonatomic) NSString *bankEnc; // @synthesize bankEnc=_bankEnc;
- (void).cxx_destruct;

@end

