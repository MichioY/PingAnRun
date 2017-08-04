//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PARSBaseInfo.h"

@interface PARSHealthMedalInfo : PARSBaseInfo
{
    long long _treeCount;
    long long _heartCount;
    long long _miniMCount;
    long long _halfMCount;
    long long _wholeMCount;
    long long _footCount;
    long long _treeNextNum;
    long long _heartNextNum;
    long long _footNextNum;
}

@property(nonatomic) long long footNextNum; // @synthesize footNextNum=_footNextNum;
@property(nonatomic) long long heartNextNum; // @synthesize heartNextNum=_heartNextNum;
@property(nonatomic) long long treeNextNum; // @synthesize treeNextNum=_treeNextNum;
@property(nonatomic) long long footCount; // @synthesize footCount=_footCount;
@property(nonatomic) long long wholeMCount; // @synthesize wholeMCount=_wholeMCount;
@property(nonatomic) long long halfMCount; // @synthesize halfMCount=_halfMCount;
@property(nonatomic) long long miniMCount; // @synthesize miniMCount=_miniMCount;
@property(readonly, nonatomic) long long heartCount; // @synthesize heartCount=_heartCount;
@property(nonatomic) long long treeCount; // @synthesize treeCount=_treeCount;
- (id)toDictionary;
- (id)initWithJson:(id)arg1;

@end
