//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PARSProtalBaseUserHTTPRequest.h"

@class NSArray, NSString;

@interface PARSLiveBannerListRequest : PARSProtalBaseUserHTTPRequest
{
    long long _page;
    NSString *_phoneNo;
    long long _pageSize;
    NSArray *_bannerList;
}

@property(retain, nonatomic) NSArray *bannerList; // @synthesize bannerList=_bannerList;
@property(nonatomic) long long pageSize; // @synthesize pageSize=_pageSize;
@property(copy, nonatomic) NSString *phoneNo; // @synthesize phoneNo=_phoneNo;
@property(nonatomic) long long page; // @synthesize page=_page;
- (void).cxx_destruct;
- (void)handleResponseResult:(id)arg1;
- (id)httpBody;
- (id)url;

@end
