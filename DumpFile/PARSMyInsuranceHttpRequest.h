//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PARSProtalBaseUserHTTPRequest.h"

@class PARSListResult;

@interface PARSMyInsuranceHttpRequest : PARSProtalBaseUserHTTPRequest
{
    long long _pageNo;
    long long _pageSize;
    PARSListResult *_listResult;
}

@property(retain, nonatomic) PARSListResult *listResult; // @synthesize listResult=_listResult;
@property(nonatomic) long long pageSize; // @synthesize pageSize=_pageSize;
@property(nonatomic) long long pageNo; // @synthesize pageNo=_pageNo;
- (void).cxx_destruct;
- (void)handleResponseResult:(id)arg1;
- (id)httpBody;
- (id)url;

@end
