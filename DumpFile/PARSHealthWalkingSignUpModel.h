//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PARSBaseInfo.h"

@class NSMutableArray, NSString;

@interface PARSHealthWalkingSignUpModel : PARSBaseInfo
{
    NSString *_MSG;
    NSString *_CODE;
    NSString *_isPassword;
    NSString *_isSign;
    NSString *_isNew;
    NSString *_nickName;
    NSString *_empName;
    NSString *_agentNo;
    NSString *_specialAgentNo;
    NSMutableArray *_groupList;
}

@property(retain, nonatomic) NSMutableArray *groupList; // @synthesize groupList=_groupList;
@property(copy, nonatomic) NSString *specialAgentNo; // @synthesize specialAgentNo=_specialAgentNo;
@property(copy, nonatomic) NSString *agentNo; // @synthesize agentNo=_agentNo;
@property(copy, nonatomic) NSString *empName; // @synthesize empName=_empName;
@property(copy, nonatomic) NSString *nickName; // @synthesize nickName=_nickName;
@property(copy, nonatomic) NSString *isNew; // @synthesize isNew=_isNew;
@property(copy, nonatomic) NSString *isSign; // @synthesize isSign=_isSign;
@property(copy, nonatomic) NSString *isPassword; // @synthesize isPassword=_isPassword;
@property(copy, nonatomic) NSString *CODE; // @synthesize CODE=_CODE;
@property(copy, nonatomic) NSString *MSG; // @synthesize MSG=_MSG;
- (void).cxx_destruct;
- (id)initWithJson:(id)arg1;

@end

