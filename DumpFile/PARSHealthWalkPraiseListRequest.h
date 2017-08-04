//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PARSOldBaseUserHTTPRequest.h"

@class NSString;

@interface PARSHealthWalkPraiseListRequest : PARSOldBaseUserHTTPRequest
{
    NSString *_activityId;
    NSString *_groupId;
    NSString *_queryType;
}

@property(copy, nonatomic) NSString *queryType; // @synthesize queryType=_queryType;
@property(copy, nonatomic) NSString *groupId; // @synthesize groupId=_groupId;
@property(copy, nonatomic) NSString *activityId; // @synthesize activityId=_activityId;
- (void).cxx_destruct;
- (void)handleResponseResult:(id)arg1;
- (_Bool)shouldEncryptPhoneWithTimstamp;
- (id)httpBody;
- (id)url;
- (id)initWithUserId:(id)arg1 activityId:(id)arg2 groupId:(id)arg3 queryType:(id)arg4 completion:(CDUnknownBlockType)arg5;

@end
