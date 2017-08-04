//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PARSBaseInfo.h"

@class NSArray, NSString, PARSExpressCompanyInfo;

@interface PARSExpressLogisticInfo : PARSBaseInfo
{
    PARSExpressCompanyInfo *_companyInfo;
    long long _type;
    NSString *_expressNum;
    NSString *_expressState;
    NSString *_expressStateCode;
    NSArray *_expressDetailList;
}

@property(copy, nonatomic) NSArray *expressDetailList; // @synthesize expressDetailList=_expressDetailList;
@property(copy, nonatomic) NSString *expressStateCode; // @synthesize expressStateCode=_expressStateCode;
@property(copy, nonatomic) NSString *expressState; // @synthesize expressState=_expressState;
@property(copy, nonatomic) NSString *expressNum; // @synthesize expressNum=_expressNum;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(retain, nonatomic) PARSExpressCompanyInfo *companyInfo; // @synthesize companyInfo=_companyInfo;
- (void).cxx_destruct;
- (id)initWithJson:(id)arg1;

@end
