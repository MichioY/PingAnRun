//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface XZMNetworkStatusMonitor : NSObject
{
    CDUnknownBlockType _callback;
}

+ (void)xzm_networkStatusWithCallback:(CDUnknownBlockType)arg1;
+ (void)startWithBlock:(CDUnknownBlockType)arg1;
@property(copy, nonatomic) CDUnknownBlockType callback; // @synthesize callback=_callback;
- (void).cxx_destruct;
- (void)withoutNetworkWithProcessor:(id)arg1;
- (void)unknowNetworkWithProcessor:(id)arg1;
- (void)wifiNetworkWithProcessor:(id)arg1;
- (void)wwanNetworkWithProcessor:(id)arg1;
- (void)applicationNetworkStatusChanged:(id)arg1;

@end
