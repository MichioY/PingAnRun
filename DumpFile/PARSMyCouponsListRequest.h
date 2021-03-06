//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PARSProtalBaseUserHTTPRequest.h"

@class NSArray, PARSListResult;

@interface PARSMyCouponsListRequest : PARSProtalBaseUserHTTPRequest
{
    _Bool _needUpdate;
    long long _type;
    PARSListResult *_listResult;
    NSArray *_totalNum;
    long long _currentPage;
    long long _pagNo;
    long long _pageSize;
}

@property(nonatomic) long long pageSize; // @synthesize pageSize=_pageSize;
@property(nonatomic) long long pagNo; // @synthesize pagNo=_pagNo;
@property(nonatomic) long long currentPage; // @synthesize currentPage=_currentPage;
@property(nonatomic) _Bool needUpdate; // @synthesize needUpdate=_needUpdate;
@property(retain, nonatomic) NSArray *totalNum; // @synthesize totalNum=_totalNum;
@property(retain, nonatomic) PARSListResult *listResult; // @synthesize listResult=_listResult;
@property(nonatomic) long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (void)handleResponseResult:(id)arg1;
- (id)httpBody;
- (id)url;
- (id)initWithUserId:(id)arg1 page:(long long)arg2 type:(long long)arg3 pageSize:(long long)arg4 completion:(CDUnknownBlockType)arg5;

@end

