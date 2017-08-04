//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PALHServiceHandler.h"

@class NSString;

@interface PALHCommonServiceHandler : PALHServiceHandler
{
    double _timeInterval;
    NSString *_event_id;
    NSString *_event_lable;
    NSString *_product_id;
}

@property(copy, nonatomic) NSString *product_id; // @synthesize product_id=_product_id;
@property(copy, nonatomic) NSString *event_lable; // @synthesize event_lable=_event_lable;
@property(copy, nonatomic) NSString *event_id; // @synthesize event_id=_event_id;
@property(nonatomic) double timeInterval; // @synthesize timeInterval=_timeInterval;
- (void).cxx_destruct;
- (void)writeLog:(id)arg1 result:(CDUnknownBlockType)arg2;
- (void)trackEvent:(id)arg1 result:(CDUnknownBlockType)arg2;
- (id)checkNull:(id)arg1;
- (void)talkingProductClick:(id)arg1 result:(CDUnknownBlockType)arg2;
- (void)talkingWealthClick:(id)arg1 result:(CDUnknownBlockType)arg2;
- (void)getJSSDKVersion:(id)arg1 result:(CDUnknownBlockType)arg2;
- (void)handleMessage:(id)arg1 result:(CDUnknownBlockType)arg2;
- (id)actions;

@end
