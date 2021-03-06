//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSTimer;

@interface PARSFrequencyControl : NSObject
{
    _Bool _isBusy;
    double _interval;
    NSTimer *_timer;
    double _realInterval;
    double _lastTime;
    long long _errorCount;
}

@property(nonatomic) long long errorCount; // @synthesize errorCount=_errorCount;
@property(nonatomic) double lastTime; // @synthesize lastTime=_lastTime;
@property(nonatomic) double realInterval; // @synthesize realInterval=_realInterval;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(nonatomic) _Bool isBusy; // @synthesize isBusy=_isBusy;
@property(nonatomic) double interval; // @synthesize interval=_interval;
- (void).cxx_destruct;
- (void)stopWithError:(id)arg1;
- (void)start;
- (id)init;

@end

