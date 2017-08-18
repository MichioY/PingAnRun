//
//  KKPARunConfig.m
//  WeChatEnvTestViewController
//
//  Created by SuperDry on 08/08/2017.
//  Copyright © 2017 Test. All rights reserved.
//

#import "KKPARunConfig.h"

static NSString * const kIntegratedSteps    = @"kIntegratedSteps";
static NSString * const kHeartRate          = @"kHeartRate";

@implementation KKPARunConfig

+ (instancetype)sharedConfig {
    static KKPARunConfig *config = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        config = [KKPARunConfig new];
    });
    return config;
}

- (instancetype)init {
    
    if (self = [super init]) {

        _steps = [[NSUserDefaults standardUserDefaults] integerForKey:kIntegratedSteps];
        _heartRate = [[NSUserDefaults standardUserDefaults] integerForKey:kHeartRate];

    }
    return self;
}

- (void)setSteps:(NSInteger)steps{
    _steps = steps;
    
    [[NSUserDefaults standardUserDefaults] setInteger:steps forKey:kIntegratedSteps];
    [[NSUserDefaults standardUserDefaults] synchronize];
}

- (void)setHeartRate:(NSInteger)heartRate{
    _heartRate = heartRate;
    
    [[NSUserDefaults standardUserDefaults] setInteger:heartRate forKey:kHeartRate];
    [[NSUserDefaults standardUserDefaults] synchronize];
}

@end
