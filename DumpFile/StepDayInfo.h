//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface StepDayInfo : NSObject
{
    long long time;
    double sumDistance;
    long long totalsteps;
    double avgSteps;
    double avgspeed;
    double maxspeed;
    double KCAL;
    NSString *createtime;
    NSString *updatetime;
    NSString *phoneString;
}

@property(retain, nonatomic) NSString *phoneString; // @synthesize phoneString;
@property(retain, nonatomic) NSString *updatetime; // @synthesize updatetime;
@property(retain, nonatomic) NSString *createtime; // @synthesize createtime;
@property(nonatomic) double KCAL; // @synthesize KCAL;
@property(nonatomic) double maxspeed; // @synthesize maxspeed;
@property(nonatomic) double avgspeed; // @synthesize avgspeed;
@property(nonatomic) double avgSteps; // @synthesize avgSteps;
@property(nonatomic) long long totalsteps; // @synthesize totalsteps;
@property(nonatomic) double sumDistance; // @synthesize sumDistance;
@property(nonatomic) long long time; // @synthesize time;
- (void).cxx_destruct;
- (id)description;
- (void)reset;

@end
