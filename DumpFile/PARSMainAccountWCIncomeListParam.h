//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PARSBaseInfo.h"

@interface PARSMainAccountWCIncomeListParam : PARSBaseInfo
{
    long long _type;
    long long _pageSize;
    long long _pageNo;
}

@property(nonatomic) long long pageNo; // @synthesize pageNo=_pageNo;
@property(nonatomic) long long pageSize; // @synthesize pageSize=_pageSize;
@property(nonatomic) long long type; // @synthesize type=_type;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithJson:(id)arg1;

@end

