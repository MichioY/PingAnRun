//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PARSProtalBaseUserHTTPRequest.h"

@class NSDictionary, NSString;

@interface PARSHealthWalkingRecevieGeneRequest : PARSProtalBaseUserHTTPRequest
{
    NSDictionary *_resultData;
    NSString *_activityId;
}

@property(copy, nonatomic) NSString *activityId; // @synthesize activityId=_activityId;
@property(copy, nonatomic) NSDictionary *resultData; // @synthesize resultData=_resultData;
- (void).cxx_destruct;
- (void)handleResponseResult:(id)arg1;
- (id)httpBody;
- (id)url;
- (id)initWithUserId:(id)arg1 activityId:(id)arg2 completion:(CDUnknownBlockType)arg3;

@end

