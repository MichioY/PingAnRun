//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PARSHealthCircleBaseRequest.h"

@class NSArray, NSString, PARSHealthBehaviorIndexInfo;

@interface PARSHealthCircleIndividualWalkRankingRequest : PARSHealthCircleBaseRequest
{
    NSArray *_indexList;
    PARSHealthBehaviorIndexInfo *_btnType;
    NSString *_groupId;
}

@property(copy, nonatomic) NSString *groupId; // @synthesize groupId=_groupId;
@property(retain, nonatomic) PARSHealthBehaviorIndexInfo *btnType; // @synthesize btnType=_btnType;
@property(readonly, copy, nonatomic) NSArray *indexList; // @synthesize indexList=_indexList;
- (void).cxx_destruct;
- (void)handleResponseResult:(id)arg1;
- (id)httpBody;
- (id)url;
- (id)initWithUserId:(id)arg1 groupId:(id)arg2 completion:(CDUnknownBlockType)arg3;

@end
