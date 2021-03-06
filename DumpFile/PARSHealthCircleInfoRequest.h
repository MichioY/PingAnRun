//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PARSHealthCircleBaseRequest.h"

@class NSString, PARSCircleInfo;

@interface PARSHealthCircleInfoRequest : PARSHealthCircleBaseRequest
{
    PARSCircleInfo *_circleInfo;
    NSString *_circleId;
}

@property(copy, nonatomic) NSString *circleId; // @synthesize circleId=_circleId;
@property(retain, nonatomic) PARSCircleInfo *circleInfo; // @synthesize circleInfo=_circleInfo;
- (void).cxx_destruct;
- (void)handleResponseResult:(id)arg1;
- (id)httpBody;
- (id)url;
- (id)initWithUserId:(id)arg1 circleId:(id)arg2 completion:(CDUnknownBlockType)arg3;

@end

