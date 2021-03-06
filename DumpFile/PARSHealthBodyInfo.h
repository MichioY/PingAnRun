//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PARSBaseInfo.h"

@class NSString;

@interface PARSHealthBodyInfo : PARSBaseInfo
{
    NSString *_sex;
    long long _height;
    double _weight;
    long long _steps;
    double _stepSize;
    double _distance;
    double _calorie;
    long long _burnFat;
}

@property(nonatomic) long long burnFat; // @synthesize burnFat=_burnFat;
@property(nonatomic) double calorie; // @synthesize calorie=_calorie;
@property(nonatomic) double distance; // @synthesize distance=_distance;
@property(nonatomic) double stepSize; // @synthesize stepSize=_stepSize;
@property(nonatomic) long long steps; // @synthesize steps=_steps;
@property(nonatomic) double weight; // @synthesize weight=_weight;
@property(nonatomic) long long height; // @synthesize height=_height;
@property(copy, nonatomic) NSString *sex; // @synthesize sex=_sex;
- (void).cxx_destruct;

@end

