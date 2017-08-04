//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface MPushRequest : NSObject
{
}

+ (void)requestCurrentLocation;
+ (void)debugLog:(id)arg1;
+ (void)fetchMessage:(id)arg1 success:(CDUnknownBlockType)arg2;
+ (void)onceDataReport;
+ (void)clientDataReport;
+ (void)reportReadData:(id)arg1;
+ (void)authSms:(id)arg1 timeInterval:(double)arg2 finished:(CDUnknownBlockType)arg3;
+ (void)checkUnUploadData;
+ (void)ensureTags:(id)arg1 isDelete:(_Bool)arg2;
+ (void)setAlias:(id)arg1;
+ (void)ignorePush:(_Bool)arg1;
+ (void)setCurrentAppVersionTag:(id)arg1;
+ (void)registerClient;
+ (void)updateCustomViews;
+ (void)setDebugMode:(_Bool)arg1;
+ (void)setDeviceToken:(id)arg1;
+ (void)uploadDatas;
+ (void)updateDisplayViewsServer;
+ (void)setDisplayViews:(id)arg1 viewAlias:(id)arg2 methods:(id)arg3 displayModes:(id)arg4;
+ (void)initWithAppId:(id)arg1;
- (void)dealloc;

@end
