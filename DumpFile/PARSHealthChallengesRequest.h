//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PARSOldBaseUserHTTPRequest.h"

@class NSString;

@interface PARSHealthChallengesRequest : PARSOldBaseUserHTTPRequest
{
    _Bool _autoLoading;
    NSString *_activityId;
}

@property(nonatomic) _Bool autoLoading; // @synthesize autoLoading=_autoLoading;
@property(copy, nonatomic) NSString *activityId; // @synthesize activityId=_activityId;
- (void).cxx_destruct;
- (void)handleResponseResult:(id)arg1;
- (id)httpBody;
- (_Bool)shouldEncryptPhoneWithTimstamp;
- (id)url;
- (id)initWithUserId:(id)arg1 activityId:(id)arg2 autoLoading:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;

@end

