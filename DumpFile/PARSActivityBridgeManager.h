//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class PARSActivityDetailModel;

@interface PARSActivityBridgeManager : NSObject
{
    PARSActivityDetailModel *_activity;
}

+ (id)sharedManager;
@property(retain, nonatomic) PARSActivityDetailModel *activity; // @synthesize activity=_activity;
- (void).cxx_destruct;

@end

