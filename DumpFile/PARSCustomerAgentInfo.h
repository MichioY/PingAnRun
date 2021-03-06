//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PARSBaseInfo.h"

#import "NSCopying.h"

@class NSString;

@interface PARSCustomerAgentInfo : PARSBaseInfo <NSCopying>
{
    _Bool _isResign;
    _Bool _isCustomAgent;
    _Bool _prompted;
    _Bool _isHasTraCqCart;
    long long _type;
    NSString *_agentNumber;
    NSString *_name;
    NSString *_phone;
    NSString *_headImageUrl;
    NSString *_traCqCartUrl;
    NSString *_leave;
    NSString *_empType;
    NSString *_age;
    NSString *_birth;
    NSString *_regionName;
    NSString *_branch;
    NSString *_regioncode;
    NSString *_tel;
    NSString *_sex;
    NSString *_reg;
    NSString *_deptNo;
    NSString *_deptName;
}

+ (id)blankAndResignedRecommendAgent;
+ (id)blankAndResignedAgent;
+ (id)blankRecommendAgent;
+ (id)blankAgent;
@property(copy, nonatomic) NSString *deptName; // @synthesize deptName=_deptName;
@property(copy, nonatomic) NSString *deptNo; // @synthesize deptNo=_deptNo;
@property(copy, nonatomic) NSString *reg; // @synthesize reg=_reg;
@property(copy, nonatomic) NSString *sex; // @synthesize sex=_sex;
@property(copy, nonatomic) NSString *tel; // @synthesize tel=_tel;
@property(copy, nonatomic) NSString *regioncode; // @synthesize regioncode=_regioncode;
@property(copy, nonatomic) NSString *branch; // @synthesize branch=_branch;
@property(copy, nonatomic) NSString *regionName; // @synthesize regionName=_regionName;
@property(copy, nonatomic) NSString *birth; // @synthesize birth=_birth;
@property(copy, nonatomic) NSString *age; // @synthesize age=_age;
@property(copy, nonatomic) NSString *empType; // @synthesize empType=_empType;
@property(copy, nonatomic) NSString *leave; // @synthesize leave=_leave;
@property(copy, nonatomic) NSString *traCqCartUrl; // @synthesize traCqCartUrl=_traCqCartUrl;
@property(nonatomic) _Bool isHasTraCqCart; // @synthesize isHasTraCqCart=_isHasTraCqCart;
@property(copy, nonatomic) NSString *headImageUrl; // @synthesize headImageUrl=_headImageUrl;
@property(copy, nonatomic) NSString *phone; // @synthesize phone=_phone;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *agentNumber; // @synthesize agentNumber=_agentNumber;
@property(nonatomic) _Bool prompted; // @synthesize prompted=_prompted;
@property(nonatomic) _Bool isCustomAgent; // @synthesize isCustomAgent=_isCustomAgent;
@property(nonatomic) _Bool isResign; // @synthesize isResign=_isResign;
@property(nonatomic) long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)initBlankAndResign;
- (_Bool)isBlank;
@property(readonly, nonatomic) _Bool isValid;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)updateWithJson:(id)arg1;
- (id)initWithFullJson:(id)arg1;
- (id)initWithJson:(id)arg1;
- (id)init;

@end

