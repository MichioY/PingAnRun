//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PARSBaseInfo.h"

@class NSString;

@interface PARSAgentInfo : PARSBaseInfo
{
    NSString *_agentCode;
    NSString *_agentName;
    NSString *_realName;
    NSString *_desc;
    long long _age;
    NSString *_sex;
    NSString *_regionCode;
    NSString *_agentTel;
    NSString *_agentCellPhone;
    NSString *_empType;
    NSString *_headShot;
    NSString *_feeling;
    NSString *_selfInstruction;
    NSString *_cardUrl;
    NSString *_homePageAlisa;
}

@property(retain, nonatomic) NSString *homePageAlisa; // @synthesize homePageAlisa=_homePageAlisa;
@property(retain, nonatomic) NSString *cardUrl; // @synthesize cardUrl=_cardUrl;
@property(retain, nonatomic) NSString *selfInstruction; // @synthesize selfInstruction=_selfInstruction;
@property(retain, nonatomic) NSString *feeling; // @synthesize feeling=_feeling;
@property(retain, nonatomic) NSString *headShot; // @synthesize headShot=_headShot;
@property(retain, nonatomic) NSString *empType; // @synthesize empType=_empType;
@property(retain, nonatomic) NSString *agentCellPhone; // @synthesize agentCellPhone=_agentCellPhone;
@property(retain, nonatomic) NSString *agentTel; // @synthesize agentTel=_agentTel;
@property(retain, nonatomic) NSString *regionCode; // @synthesize regionCode=_regionCode;
@property(retain, nonatomic) NSString *sex; // @synthesize sex=_sex;
@property(nonatomic) long long age; // @synthesize age=_age;
@property(retain, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(retain, nonatomic) NSString *realName; // @synthesize realName=_realName;
@property(retain, nonatomic) NSString *agentName; // @synthesize agentName=_agentName;
@property(retain, nonatomic) NSString *agentCode; // @synthesize agentCode=_agentCode;
- (void).cxx_destruct;
- (id)initWithJson:(id)arg1;

@end
