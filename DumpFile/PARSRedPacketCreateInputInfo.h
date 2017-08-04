//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PARSBaseInfo.h"

@class NSString;

@interface PARSRedPacketCreateInputInfo : PARSBaseInfo
{
    NSString *_groupId;
    NSString *_nickName;
    NSString *_title;
    unsigned long long _redPacketType;
    unsigned long long _redPacketNum;
    double _amount;
}

@property(nonatomic) double amount; // @synthesize amount=_amount;
@property(nonatomic) unsigned long long redPacketNum; // @synthesize redPacketNum=_redPacketNum;
@property(nonatomic) unsigned long long redPacketType; // @synthesize redPacketType=_redPacketType;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *nickName; // @synthesize nickName=_nickName;
@property(retain, nonatomic) NSString *groupId; // @synthesize groupId=_groupId;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *realType;

@end
