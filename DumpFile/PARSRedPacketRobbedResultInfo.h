//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PARSBaseInfo.h"

@class NSString;

@interface PARSRedPacketRobbedResultInfo : PARSBaseInfo
{
    NSString *_redPacketId;
    unsigned long long _resultType;
    NSString *_resutMsg;
    NSString *_endTime;
    NSString *_overDueMsg;
}

@property(copy, nonatomic) NSString *overDueMsg; // @synthesize overDueMsg=_overDueMsg;
@property(copy, nonatomic) NSString *endTime; // @synthesize endTime=_endTime;
@property(copy, nonatomic) NSString *resutMsg; // @synthesize resutMsg=_resutMsg;
@property(nonatomic) unsigned long long resultType; // @synthesize resultType=_resultType;
@property(copy, nonatomic) NSString *redPacketId; // @synthesize redPacketId=_redPacketId;
- (void).cxx_destruct;
- (id)initWithJson:(id)arg1;

@end
