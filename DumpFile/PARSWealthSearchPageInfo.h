//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PARSBaseInfo.h"

@interface PARSWealthSearchPageInfo : PARSBaseInfo
{
    long long _startIndex;
    long long _pageSize;
    long long _totalResults;
    long long _currentPage;
    long long _totalPageSize;
}

@property(nonatomic) long long totalPageSize; // @synthesize totalPageSize=_totalPageSize;
@property(nonatomic) long long currentPage; // @synthesize currentPage=_currentPage;
@property(nonatomic) long long totalResults; // @synthesize totalResults=_totalResults;
@property(nonatomic) long long pageSize; // @synthesize pageSize=_pageSize;
@property(nonatomic) long long startIndex; // @synthesize startIndex=_startIndex;
- (id)initWithJson:(id)arg1;

@end
