//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PARSOldBaseUserHTTPRequest.h"

@class NSString, PARSActivityDetailModel;

@interface PARSActivityDetailModelRequest : PARSOldBaseUserHTTPRequest
{
    NSString *_activityId;
    PARSActivityDetailModel *_detailModel;
}

@property(retain, nonatomic) PARSActivityDetailModel *detailModel; // @synthesize detailModel=_detailModel;
@property(copy, nonatomic) NSString *activityId; // @synthesize activityId=_activityId;
- (void).cxx_destruct;
- (void)handleResponseResult:(id)arg1;
- (id)httpBody;
- (_Bool)needMobilePhone;
- (id)url;
- (id)initWithUserId:(id)arg1 activityId:(id)arg2 completion:(CDUnknownBlockType)arg3;

@end
