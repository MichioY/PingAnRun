//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface PARSDeviceDataAnalyticBean : NSObject
{
    NSString *_dataSource;
    NSString *_collectDate;
    NSString *_deviceId;
    NSString *_deviceName;
    NSString *_hostName;
    NSString *_imeiCode;
    NSString *_cellId;
    NSString *_lac;
    NSString *_mobileModel;
    NSString *_osVersion;
    NSString *_osSdkVersion;
    NSString *_cpuAbi;
    NSString *_pixelmetric;
    NSString *_country;
    NSString *_languages;
    NSString *_timeZone;
    NSString *_carrier;
    NSString *_deviceG23;
    NSString *_netWorkOperator;
    NSString *_simId;
    NSString *_simOperator;
    NSString *_isJailbroken;
    NSString *_packageName;
    NSString *_appVersionCode;
    NSString *_appVersionName;
    NSString *_appStoreid;
    NSString *_partnerId;
    NSString *_installationDate;
    NSString *_isCracked;
    NSString *_kernBootDate;
}

@property(copy, nonatomic) NSString *kernBootDate; // @synthesize kernBootDate=_kernBootDate;
@property(copy, nonatomic) NSString *isCracked; // @synthesize isCracked=_isCracked;
@property(copy, nonatomic) NSString *installationDate; // @synthesize installationDate=_installationDate;
@property(copy, nonatomic) NSString *partnerId; // @synthesize partnerId=_partnerId;
@property(copy, nonatomic) NSString *appStoreid; // @synthesize appStoreid=_appStoreid;
@property(copy, nonatomic) NSString *appVersionName; // @synthesize appVersionName=_appVersionName;
@property(copy, nonatomic) NSString *appVersionCode; // @synthesize appVersionCode=_appVersionCode;
@property(copy, nonatomic) NSString *packageName; // @synthesize packageName=_packageName;
@property(copy, nonatomic) NSString *isJailbroken; // @synthesize isJailbroken=_isJailbroken;
@property(copy, nonatomic) NSString *simOperator; // @synthesize simOperator=_simOperator;
@property(copy, nonatomic) NSString *simId; // @synthesize simId=_simId;
@property(copy, nonatomic) NSString *netWorkOperator; // @synthesize netWorkOperator=_netWorkOperator;
@property(copy, nonatomic) NSString *deviceG23; // @synthesize deviceG23=_deviceG23;
@property(copy, nonatomic) NSString *carrier; // @synthesize carrier=_carrier;
@property(copy, nonatomic) NSString *timeZone; // @synthesize timeZone=_timeZone;
@property(copy, nonatomic) NSString *languages; // @synthesize languages=_languages;
@property(copy, nonatomic) NSString *country; // @synthesize country=_country;
@property(copy, nonatomic) NSString *pixelmetric; // @synthesize pixelmetric=_pixelmetric;
@property(copy, nonatomic) NSString *cpuAbi; // @synthesize cpuAbi=_cpuAbi;
@property(copy, nonatomic) NSString *osSdkVersion; // @synthesize osSdkVersion=_osSdkVersion;
@property(copy, nonatomic) NSString *osVersion; // @synthesize osVersion=_osVersion;
@property(copy, nonatomic) NSString *mobileModel; // @synthesize mobileModel=_mobileModel;
@property(copy, nonatomic) NSString *lac; // @synthesize lac=_lac;
@property(copy, nonatomic) NSString *cellId; // @synthesize cellId=_cellId;
@property(copy, nonatomic) NSString *imeiCode; // @synthesize imeiCode=_imeiCode;
@property(copy, nonatomic) NSString *hostName; // @synthesize hostName=_hostName;
@property(copy, nonatomic) NSString *deviceName; // @synthesize deviceName=_deviceName;
@property(copy, nonatomic) NSString *deviceId; // @synthesize deviceId=_deviceId;
@property(copy, nonatomic) NSString *collectDate; // @synthesize collectDate=_collectDate;
@property(copy, nonatomic) NSString *dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;
- (id)checkNull:(id)arg1;
- (id)clientIp;
- (id)city;
- (id)province;
- (id)longitude;
- (id)latitude;
- (id)toDictionary;

@end

