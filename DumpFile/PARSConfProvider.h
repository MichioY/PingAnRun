//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PARSConfDefaults.h"

@class NSDictionary, NSString;

@interface PARSConfProvider : NSObject <PARSConfDefaults>
{
    NSDictionary *_confInfo;
}

+ (id)sharedProvider;
@property(copy) NSDictionary *confInfo; // @synthesize confInfo=_confInfo;
- (void).cxx_destruct;
- (void)saveAutoUploadLogTime:(id)arg1;
- (void)saveConfInfo:(id)arg1;
- (id)confValueOfKey:(id)arg1;
- (double)doubleConfValueOfKey:(id)arg1 defaultValue:(double)arg2;
- (long long)integerConfValueOfKey:(id)arg1 defaultValue:(long long)arg2;
- (_Bool)boolConfValueOfKey:(id)arg1 defaultValue:(_Bool)arg2;
@property(readonly, nonatomic) _Bool monitorNetworkEnable;
@property(readonly, nonatomic) _Bool monitorUploadNetworkTaid;
@property(readonly, nonatomic) _Bool monitorInfoUploadOnlyWIFI;
@property(readonly, nonatomic) _Bool pSDKCollectEnable;
@property(readonly, nonatomic) long long urlUploadFrequency;
@property(readonly, nonatomic) _Bool chatCreateEnable;
@property(readonly, nonatomic) _Bool liveEnable;
@property(readonly, nonatomic) _Bool mineIntegralSwitch;
@property(readonly, nonatomic) _Bool dailySignInSwitch;
@property(readonly, nonatomic) _Bool lifeAssistantSearchEnable;
- (_Bool)boolConfValueOfKey:(id)arg1;
@property(readonly, nonatomic) _Bool networkDiagnosticEnable;
@property(readonly, nonatomic) _Bool webGLConfigurable;
@property(readonly, nonatomic) _Bool registerHandlersOnPALHWebView;
@property(readonly, nonatomic) _Bool wkWebViewEnable;
@property(readonly, nonatomic) _Bool jSSDKWebViewEnable;
@property(readonly, nonatomic) _Bool reuseTaskEnable;
@property(readonly, nonatomic) _Bool suspendTaskEnable;
@property(readonly, nonatomic) _Bool sessionTaskEnable;
@property(readonly, nonatomic) double timeout;
@property(readonly, nonatomic) double uploadLogTime;
@property(readonly, nonatomic) _Bool autoResetApp;
@property(readonly, nonatomic) _Bool autoUploadLogEnable;
@property(readonly, nonatomic) _Bool policyWangCaiLoginEnable;
@property(readonly, nonatomic) _Bool showDonateBook;
@property(readonly, nonatomic) _Bool rateAppInAppEnableKeyEnabled;
@property(readonly, nonatomic) _Bool rateAppEnableKeyEnabled;
@property(readonly, nonatomic) _Bool showMarathon;
@property(readonly, nonatomic) double stepAutoUploadTimeInterval;
@property(readonly, nonatomic) long long stepThreshold;
@property(readonly, nonatomic) long long stepCountDayCount;
@property(readonly, nonatomic) _Bool stepCountUseValidSource;
@property(readonly, nonatomic) _Bool businessMonitorFlag;
@property(readonly, nonatomic) _Bool oldALSCacheEnable;
@property(readonly, nonatomic) _Bool webCacheEnable;
@property(readonly, nonatomic) _Bool lifeAssitantFlag;
@property(readonly, nonatomic) _Bool sjyDelayActive;
@property(readonly, nonatomic) _Bool socialCloudFlag;
@property(readonly, nonatomic) _Bool sjyLogoutEnable;
@property(readonly, nonatomic) _Bool autoUploadSteps;
@property(readonly, nonatomic) _Bool tingyunEnable;
@property(readonly, nonatomic) _Bool anydoorEnable;
@property(readonly, nonatomic) _Bool chattingForbidden;
@property(readonly, nonatomic) _Bool wangcaiCreditCardEnable;
@property(readonly, nonatomic) _Bool creditCardEnbale;
@property(readonly, nonatomic) _Bool lifeVoiceSearchEnable;
@property(readonly, nonatomic) _Bool policyVoiceSearchEnable;
@property(readonly, nonatomic) _Bool voiceSearchEnable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
