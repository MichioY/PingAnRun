//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PARSBaseInfo.h"

@class NSString;

@interface PARSActivityGroupInfo : PARSBaseInfo
{
    _Bool _isNQ;
    NSString *_circleId;
    NSString *_groupId;
    NSString *_groupName;
    NSString *_nickName;
    unsigned long long _memberCount;
}

@property(nonatomic) unsigned long long memberCount; // @synthesize memberCount=_memberCount;
@property(nonatomic) _Bool isNQ; // @synthesize isNQ=_isNQ;
@property(retain, nonatomic) NSString *nickName; // @synthesize nickName=_nickName;
@property(retain, nonatomic) NSString *groupName; // @synthesize groupName=_groupName;
@property(retain, nonatomic) NSString *groupId; // @synthesize groupId=_groupId;
@property(retain, nonatomic) NSString *circleId; // @synthesize circleId=_circleId;
- (void).cxx_destruct;
- (void)updateWithGroupInfo:(id)arg1;
- (id)initWithOldJson:(id)arg1;
- (id)initWithJson:(id)arg1;
- (id)convertGroupInfoToCircleInfo;

@end

