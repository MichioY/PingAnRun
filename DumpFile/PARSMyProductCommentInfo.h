//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PARSBaseInfo.h"

@class NSString;

@interface PARSMyProductCommentInfo : PARSBaseInfo
{
    NSString *_orderComment;
    long long _commodityDesc;
    long long _shopService;
    long long _logisticsService;
}

@property(nonatomic) long long logisticsService; // @synthesize logisticsService=_logisticsService;
@property(nonatomic) long long shopService; // @synthesize shopService=_shopService;
@property(nonatomic) long long commodityDesc; // @synthesize commodityDesc=_commodityDesc;
@property(retain, nonatomic) NSString *orderComment; // @synthesize orderComment=_orderComment;
- (void).cxx_destruct;
- (id)initWithJson:(id)arg1;

@end
