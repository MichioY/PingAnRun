//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@interface SpeedTestResultItem : NSObject
{
    unsigned int _accessIp;
    unsigned int _accessPort;
    unsigned int _clientIp;
    unsigned int _testCnt;
    unsigned int _upLoss;
    unsigned int _dwLoss;
    unsigned int _testPkgSize;
    unsigned int _avgRtt;
    unsigned int _maxRtt;
    unsigned int _minRtt;
    unsigned int _rtt0_50;
    unsigned int _rtt50_100;
    unsigned int _rtt100_200;
    unsigned int _rtt200_300;
    unsigned int _rtt300_700;
    unsigned int _rtt700_1000;
    unsigned int _rtt1000;
    unsigned int _jitter0_20;
    unsigned int _jitter20_50;
    unsigned int _jitter50_100;
    unsigned int _jitter100_200;
    unsigned int _jitter200_300;
    unsigned int _jitter300_500;
    unsigned int _jitter500_800;
    unsigned int _jitter800;
    unsigned int _upConsLoss0;
    unsigned int _upConsLoss1;
    unsigned int _upConsLoss2;
    unsigned int _upConsLoss3;
    unsigned int _upConsLossb3;
    unsigned int _dwConsLoss0;
    unsigned int _dwConsLoss1;
    unsigned int _dwConsLoss2;
    unsigned int _dwConsLoss3;
    unsigned int _dwConsLossb3;
    unsigned int _upDisorder;
    unsigned int _dwDisorder;
    NSString *_accessCountry;
    NSString *_accessProv;
    NSString *_accessIsp;
    NSArray *_upSeqs;
    NSArray *_dwSeqs;
}

@property(retain, nonatomic) NSArray *dwSeqs; // @synthesize dwSeqs=_dwSeqs;
@property(retain, nonatomic) NSArray *upSeqs; // @synthesize upSeqs=_upSeqs;
@property(nonatomic) unsigned int dwDisorder; // @synthesize dwDisorder=_dwDisorder;
@property(nonatomic) unsigned int upDisorder; // @synthesize upDisorder=_upDisorder;
@property(nonatomic) unsigned int dwConsLossb3; // @synthesize dwConsLossb3=_dwConsLossb3;
@property(nonatomic) unsigned int dwConsLoss3; // @synthesize dwConsLoss3=_dwConsLoss3;
@property(nonatomic) unsigned int dwConsLoss2; // @synthesize dwConsLoss2=_dwConsLoss2;
@property(nonatomic) unsigned int dwConsLoss1; // @synthesize dwConsLoss1=_dwConsLoss1;
@property(nonatomic) unsigned int dwConsLoss0; // @synthesize dwConsLoss0=_dwConsLoss0;
@property(nonatomic) unsigned int upConsLossb3; // @synthesize upConsLossb3=_upConsLossb3;
@property(nonatomic) unsigned int upConsLoss3; // @synthesize upConsLoss3=_upConsLoss3;
@property(nonatomic) unsigned int upConsLoss2; // @synthesize upConsLoss2=_upConsLoss2;
@property(nonatomic) unsigned int upConsLoss1; // @synthesize upConsLoss1=_upConsLoss1;
@property(nonatomic) unsigned int upConsLoss0; // @synthesize upConsLoss0=_upConsLoss0;
@property(nonatomic) unsigned int jitter800; // @synthesize jitter800=_jitter800;
@property(nonatomic) unsigned int jitter500_800; // @synthesize jitter500_800=_jitter500_800;
@property(nonatomic) unsigned int jitter300_500; // @synthesize jitter300_500=_jitter300_500;
@property(nonatomic) unsigned int jitter200_300; // @synthesize jitter200_300=_jitter200_300;
@property(nonatomic) unsigned int jitter100_200; // @synthesize jitter100_200=_jitter100_200;
@property(nonatomic) unsigned int jitter50_100; // @synthesize jitter50_100=_jitter50_100;
@property(nonatomic) unsigned int jitter20_50; // @synthesize jitter20_50=_jitter20_50;
@property(nonatomic) unsigned int jitter0_20; // @synthesize jitter0_20=_jitter0_20;
@property(nonatomic) unsigned int rtt1000; // @synthesize rtt1000=_rtt1000;
@property(nonatomic) unsigned int rtt700_1000; // @synthesize rtt700_1000=_rtt700_1000;
@property(nonatomic) unsigned int rtt300_700; // @synthesize rtt300_700=_rtt300_700;
@property(nonatomic) unsigned int rtt200_300; // @synthesize rtt200_300=_rtt200_300;
@property(nonatomic) unsigned int rtt100_200; // @synthesize rtt100_200=_rtt100_200;
@property(nonatomic) unsigned int rtt50_100; // @synthesize rtt50_100=_rtt50_100;
@property(nonatomic) unsigned int rtt0_50; // @synthesize rtt0_50=_rtt0_50;
@property(nonatomic) unsigned int minRtt; // @synthesize minRtt=_minRtt;
@property(nonatomic) unsigned int maxRtt; // @synthesize maxRtt=_maxRtt;
@property(nonatomic) unsigned int avgRtt; // @synthesize avgRtt=_avgRtt;
@property(nonatomic) unsigned int testPkgSize; // @synthesize testPkgSize=_testPkgSize;
@property(copy, nonatomic) NSString *accessIsp; // @synthesize accessIsp=_accessIsp;
@property(copy, nonatomic) NSString *accessProv; // @synthesize accessProv=_accessProv;
@property(copy, nonatomic) NSString *accessCountry; // @synthesize accessCountry=_accessCountry;
@property(nonatomic) unsigned int dwLoss; // @synthesize dwLoss=_dwLoss;
@property(nonatomic) unsigned int upLoss; // @synthesize upLoss=_upLoss;
@property(nonatomic) unsigned int testCnt; // @synthesize testCnt=_testCnt;
@property(nonatomic) unsigned int clientIp; // @synthesize clientIp=_clientIp;
@property(nonatomic) unsigned int accessPort; // @synthesize accessPort=_accessPort;
@property(nonatomic) unsigned int accessIp; // @synthesize accessIp=_accessIp;
- (void).cxx_destruct;

@end
