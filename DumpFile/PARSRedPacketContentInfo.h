//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PARSBaseInfo.h"

@class NSString;

@interface PARSRedPacketContentInfo : PARSBaseInfo
{
    NSString *_redPacketId;
    NSString *_nickname;
    unsigned long long _status;
    unsigned long long _redPacketType;
    double _amount;
    NSString *_createdDate;
    NSString *_overdueDate;
    NSString *_title;
}

@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *overdueDate; // @synthesize overdueDate=_overdueDate;
@property(copy, nonatomic) NSString *createdDate; // @synthesize createdDate=_createdDate;
@property(nonatomic) double amount; // @synthesize amount=_amount;
@property(nonatomic) unsigned long long redPacketType; // @synthesize redPacketType=_redPacketType;
@property(nonatomic) unsigned long long status; // @synthesize status=_status;
@property(copy, nonatomic) NSString *nickname; // @synthesize nickname=_nickname;
@property(copy, nonatomic) NSString *redPacketId; // @synthesize redPacketId=_redPacketId;
- (void).cxx_destruct;
- (id)jsonObject;
- (id)initWithJson:(id)arg1;

@end
