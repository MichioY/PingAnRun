//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PARSBaseInfo.h"

#import "NSCopying.h"

@class NSString;

@interface PARSHealthWalkingTrackInfo : PARSBaseInfo <NSCopying>
{
    _Bool _marathonWon;
    NSString *_activityId;
    double _startDate;
    double _endDate;
    unsigned long long _steps;
    double _distance;
    NSString *_trackUrl;
    unsigned long long _uploadStatus;
}

@property(nonatomic, getter=isMarathonWon) _Bool marathonWon; // @synthesize marathonWon=_marathonWon;
@property(nonatomic) unsigned long long uploadStatus; // @synthesize uploadStatus=_uploadStatus;
@property(copy, nonatomic) NSString *trackUrl; // @synthesize trackUrl=_trackUrl;
@property(nonatomic) double distance; // @synthesize distance=_distance;
@property(nonatomic) unsigned long long steps; // @synthesize steps=_steps;
@property(nonatomic) double endDate; // @synthesize endDate=_endDate;
@property(nonatomic) double startDate; // @synthesize startDate=_startDate;
@property(copy, nonatomic) NSString *activityId; // @synthesize activityId=_activityId;
- (void).cxx_destruct;
- (id)debugDescription;
- (id)description;
@property(readonly, nonatomic) NSString *stepsDesc;
@property(readonly, nonatomic) NSString *endDesc;
@property(readonly, nonatomic) NSString *startDesc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithJson:(id)arg1;

@end
