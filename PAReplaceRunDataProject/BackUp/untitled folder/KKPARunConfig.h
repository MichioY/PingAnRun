//
//  KKPARunConfig.h
//  WeChatEnvTestViewController
//
//  Created by SuperDry on 08/08/2017.
//  Copyright © 2017 Test. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface KKPARunConfig : NSObject

+ (instancetype)sharedConfig;

@property (nonatomic ,assign) NSInteger steps;
@property (nonatomic ,assign) NSInteger heartRate;

@end
