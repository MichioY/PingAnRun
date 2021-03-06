//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BaseResponse.h"

@class NSString;

@interface AgentInfoBody : BaseResponse
{
    NSString *_leave;
    NSString *_agentid;
    NSString *_name;
    NSString *_age;
    NSString *_birth;
    NSString *_regionName;
    NSString *_empType;
    NSString *_branch;
    NSString *_regioncode;
    NSString *_mobile;
    NSString *_tel;
    NSString *_sex;
    NSString *_reg;
    NSString *_errMsg;
    NSString *_errCode;
    NSString *_returnFlag;
    NSString *_deptName;
    NSString *_activeFlag;
    NSString *_hasCard;
    NSString *_cardUrl;
}

+ (id)initWithResponse:(id)arg1;
@property(retain, nonatomic) NSString *cardUrl; // @synthesize cardUrl=_cardUrl;
@property(retain, nonatomic) NSString *hasCard; // @synthesize hasCard=_hasCard;
@property(retain, nonatomic) NSString *activeFlag; // @synthesize activeFlag=_activeFlag;
@property(retain, nonatomic) NSString *deptName; // @synthesize deptName=_deptName;
@property(retain, nonatomic) NSString *returnFlag; // @synthesize returnFlag=_returnFlag;
@property(retain, nonatomic) NSString *errCode; // @synthesize errCode=_errCode;
@property(retain, nonatomic) NSString *errMsg; // @synthesize errMsg=_errMsg;
@property(retain, nonatomic) NSString *reg; // @synthesize reg=_reg;
@property(retain, nonatomic) NSString *sex; // @synthesize sex=_sex;
@property(retain, nonatomic) NSString *tel; // @synthesize tel=_tel;
@property(retain, nonatomic) NSString *mobile; // @synthesize mobile=_mobile;
@property(retain, nonatomic) NSString *regioncode; // @synthesize regioncode=_regioncode;
@property(retain, nonatomic) NSString *branch; // @synthesize branch=_branch;
@property(retain, nonatomic) NSString *empType; // @synthesize empType=_empType;
@property(retain, nonatomic) NSString *regionName; // @synthesize regionName=_regionName;
@property(retain, nonatomic) NSString *birth; // @synthesize birth=_birth;
@property(retain, nonatomic) NSString *age; // @synthesize age=_age;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSString *agentid; // @synthesize agentid=_agentid;
@property(retain, nonatomic) NSString *leave; // @synthesize leave=_leave;
- (void).cxx_destruct;
- (_Bool)isOK;

@end

