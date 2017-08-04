//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SimplePingDelegate.h"

@class NSDate, NSMutableArray, NSString, NSTimer, PAIMSimplePing;

@interface PAIMCDZPinger : NSObject <SimplePingDelegate>
{
    _Bool _pingerReady;
    _Bool _pingingDesired;
    int tag;
    NSMutableArray *_lastPingTimes;
    NSDate *_pingStartTime;
    double _lastPingTime;
    id <CDZPingerDelegate> _delegate;
    NSString *_domainOrIp;
    NSTimer *_pingTimer;
    unsigned long long _averageNumberOfPings;
    double _pingWaitTime;
    PAIMSimplePing *_simplePing;
}

@property(nonatomic) _Bool pingingDesired; // @synthesize pingingDesired=_pingingDesired;
@property(retain, nonatomic) PAIMSimplePing *simplePing; // @synthesize simplePing=_simplePing;
@property(nonatomic) double pingWaitTime; // @synthesize pingWaitTime=_pingWaitTime;
@property(nonatomic) unsigned long long averageNumberOfPings; // @synthesize averageNumberOfPings=_averageNumberOfPings;
@property(retain, nonatomic) NSTimer *pingTimer; // @synthesize pingTimer=_pingTimer;
@property(copy, nonatomic) NSString *domainOrIp; // @synthesize domainOrIp=_domainOrIp;
@property(nonatomic) __weak id <CDZPingerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) double lastPingTime; // @synthesize lastPingTime=_lastPingTime;
@property(retain, nonatomic) NSDate *pingStartTime; // @synthesize pingStartTime=_pingStartTime;
@property(nonatomic) _Bool pingerReady; // @synthesize pingerReady=_pingerReady;
@property(nonatomic) int tag; // @synthesize tag;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSMutableArray *lastPingTimes; // @synthesize lastPingTimes=_lastPingTimes;
- (void)simplePing:(id)arg1 didFailToSendPacket:(id)arg2 error:(id)arg3;
- (void)simplePing:(id)arg1 didFailWithError:(id)arg2;
- (void)simplePing:(id)arg1 didReceivePingResponsePacket:(id)arg2;
- (void)simplePing:(id)arg1 didSendPacket:(id)arg2;
- (void)simplePing:(id)arg1 didStartWithAddress:(id)arg2;
- (void)addPingTimeToRecord:(double)arg1;
- (void)sendPing;
- (void)timerFired:(id)arg1;
- (void)receivedPingWithTime:(double)arg1;
- (void)receivedError:(id)arg1;
- (void)stopPinging;
- (void)startPinging;
- (id)initWithHost:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
