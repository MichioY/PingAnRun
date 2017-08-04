//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CLLocationManagerDelegate.h"
#import "ServerSupporteDelegate.h"

@class BatteryInfo, CLLocation, CLLocationManager, GPSInfo, IDDatabaseService, IDServerSupport, NSString, NSTimer;

@interface PACollectTalkingData : NSObject <CLLocationManagerDelegate, ServerSupporteDelegate>
{
    CLLocationManager *locationManager;
    _Bool isLocationServerStarted;
    IDDatabaseService *database;
    CLLocation *currentLocation;
    BatteryInfo *batteryInfo;
    GPSInfo *gpsInfo;
    long long recordsNum;
    NSTimer *locationTimer;
    NSTimer *batteryTimer;
    long long PACollectLocationInterval;
    long long PACollectBatteryInterval;
    _Bool PACollectLocationEnable;
    _Bool PACollectBatteryEnable;
    long long PACollectUploadLimit;
    long long maxLocation;
    long long maxBattery;
    _Bool LogEnable;
    IDServerSupport *_serverSupport;
}

+ (id)share;
+ (void)setLogEnabled:(_Bool)arg1;
+ (void)setCollectBatteryEnable:(_Bool)arg1;
+ (void)setCollectLocationEnable:(_Bool)arg1;
+ (void)setBatteryInterval:(long long)arg1;
+ (void)setLocationInterval:(long long)arg1;
+ (void)setUploadLimit:(long long)arg1;
+ (void)setMaxBatteryCount:(long long)arg1;
+ (void)setMaxLocationCount:(long long)arg1;
+ (void)sessionStarted;
@property(retain, nonatomic) IDServerSupport *serverSupport; // @synthesize serverSupport=_serverSupport;
- (void).cxx_destruct;
- (void)serverSupportDidcheckNetState:(id)arg1;
- (void)timerMethod:(id)arg1;
- (void)stopTimer;
- (void)startTimer;
- (id)stringFromDate:(id)arg1;
- (void)locationManager:(id)arg1 didUpdateToLocation:(id)arg2 fromLocation:(id)arg3;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (id)getBatteryCharge;
- (id)getBattery;
- (void)collectBatteryInfo;
- (void)saveAppList:(id)arg1;
- (void)getInstallationApps;
- (void)collectDeviceID;
- (id)init;
- (void)trackAllGPSInfoEvent;
- (void)trackAllBatteryInfoEvent;
- (void)collectUserLocation;
- (void)applicationEnterForeground:(id)arg1;
- (void)trackAppListEvent;
- (void)stopLocation;
- (void)startLocation;
- (void)initAllServer;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
