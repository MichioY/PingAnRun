//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PARSBaseInfo.h"

@class NSString;

@interface PARSMainAccountWCTransferResult : PARSBaseInfo
{
    _Bool _needQuery;
    long long _status;
    NSString *_prepayId;
    NSString *_msg;
    NSString *_transationNo;
    NSString *_transTime;
    NSString *_startCountInterest;
    NSString *_interestArrivalTime;
    NSString *_arrivalTime;
    NSString *_token;
    NSString *_mobileInfo;
}

+ (id)convertTimeToIncomeArrivalTimeStyle:(id)arg1;
+ (id)convertTimeToIncomeCalculateTimeStyle:(id)arg1;
+ (id)convertTimeToTransTimeStyle:(id)arg1;
+ (long long)status:(id)arg1;
@property(retain, nonatomic) NSString *mobileInfo; // @synthesize mobileInfo=_mobileInfo;
@property(retain, nonatomic) NSString *token; // @synthesize token=_token;
@property(retain, nonatomic) NSString *arrivalTime; // @synthesize arrivalTime=_arrivalTime;
@property(retain, nonatomic) NSString *interestArrivalTime; // @synthesize interestArrivalTime=_interestArrivalTime;
@property(retain, nonatomic) NSString *startCountInterest; // @synthesize startCountInterest=_startCountInterest;
@property(retain, nonatomic) NSString *transTime; // @synthesize transTime=_transTime;
@property(nonatomic) _Bool needQuery; // @synthesize needQuery=_needQuery;
@property(retain, nonatomic) NSString *transationNo; // @synthesize transationNo=_transationNo;
@property(retain, nonatomic) NSString *msg; // @synthesize msg=_msg;
@property(retain, nonatomic) NSString *prepayId; // @synthesize prepayId=_prepayId;
@property(nonatomic) long long status; // @synthesize status=_status;
- (void).cxx_destruct;
- (id)initWithJson:(id)arg1;

@end
