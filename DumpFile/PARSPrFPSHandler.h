//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CADisplayLink, NSMutableDictionary;

@interface PARSPrFPSHandler : NSObject
{
    long long _currentFPS;
    CADisplayLink *_fpsLink;
    id <PARSPrMonitorInfoProviderProtocol> _provider;
    double _lastTime;
    long long _count;
    NSMutableDictionary *_fpsDict;
}

@property(retain, nonatomic) NSMutableDictionary *fpsDict; // @synthesize fpsDict=_fpsDict;
@property(nonatomic) long long count; // @synthesize count=_count;
@property(nonatomic) double lastTime; // @synthesize lastTime=_lastTime;
@property(retain, nonatomic) id <PARSPrMonitorInfoProviderProtocol> provider; // @synthesize provider=_provider;
@property(retain, nonatomic) CADisplayLink *fpsLink; // @synthesize fpsLink=_fpsLink;
@property(nonatomic) long long currentFPS; // @synthesize currentFPS=_currentFPS;
- (void).cxx_destruct;
- (void)saveFPSInfo:(id)arg1;
- (void)updateCurrentFPS:(float)arg1;
- (void)tick:(id)arg1;
- (void)saveFPSWithViewControllerName:(id)arg1;
- (void)fetchFPSRecordWithPageNO:(long long)arg1 result:(CDUnknownBlockType)arg2;
- (void)startMonitorFPS;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)applicationWillEnterForeground:(id)arg1;
- (void)dealloc;
- (id)init;

@end
