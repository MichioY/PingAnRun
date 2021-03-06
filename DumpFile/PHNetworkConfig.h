//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMutableArray, NSString, PHAFSecurityPolicy;

@interface PHNetworkConfig : NSObject
{
    NSMutableArray *_urlFilters;
    NSMutableArray *_cacheDirPathFilters;
    NSString *_baseUrl;
    NSString *_cdnUrl;
    PHAFSecurityPolicy *_securityPolicy;
}

+ (id)sharedInstance;
@property(retain, nonatomic) PHAFSecurityPolicy *securityPolicy; // @synthesize securityPolicy=_securityPolicy;
@property(retain, nonatomic) NSString *cdnUrl; // @synthesize cdnUrl=_cdnUrl;
@property(retain, nonatomic) NSString *baseUrl; // @synthesize baseUrl=_baseUrl;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *cacheDirPathFilters;
@property(readonly, nonatomic) NSArray *urlFilters;
- (void)addCacheDirPathFilter:(id)arg1;
- (void)addUrlFilter:(id)arg1;
- (id)init;

@end

