//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

@interface JKNMainHopitalParam : NSObject
{
    _Bool _can_register;
    double _lat;
    double _lon;
    long long _pageNo;
    long long _pageView;
    NSArray *_hospital_sorts;
}

@property(nonatomic) _Bool can_register; // @synthesize can_register=_can_register;
@property(copy, nonatomic) NSArray *hospital_sorts; // @synthesize hospital_sorts=_hospital_sorts;
@property(nonatomic) long long pageView; // @synthesize pageView=_pageView;
@property(nonatomic) long long pageNo; // @synthesize pageNo=_pageNo;
@property(nonatomic) double lon; // @synthesize lon=_lon;
@property(nonatomic) double lat; // @synthesize lat=_lat;
- (void).cxx_destruct;

@end

