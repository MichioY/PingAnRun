//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSMutableDictionary, NSString, PAHybridViewController;

@interface PAHybridHandle : NSObject
{
    PAHybridViewController *_latestViewController;
    NSString *_callbackFunction;
    NSMutableDictionary *_customHybridHandles;
    id <PAHybridHandlePart> _loginModelPart;
    NSString *_currentURL;
    NSDate *_localDate;
    NSMutableDictionary *_pageObservers;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSMutableDictionary *pageObservers; // @synthesize pageObservers=_pageObservers;
@property(retain, nonatomic) NSDate *localDate; // @synthesize localDate=_localDate;
@property(copy, nonatomic) NSString *currentURL; // @synthesize currentURL=_currentURL;
@property(nonatomic) __weak id <PAHybridHandlePart> loginModelPart; // @synthesize loginModelPart=_loginModelPart;
@property(retain, nonatomic) NSMutableDictionary *customHybridHandles; // @synthesize customHybridHandles=_customHybridHandles;
@property(copy, nonatomic) NSString *callbackFunction; // @synthesize callbackFunction=_callbackFunction;
@property(nonatomic) __weak PAHybridViewController *latestViewController; // @synthesize latestViewController=_latestViewController;
- (void).cxx_destruct;
- (void)getRSADecryptString:(id)arg1:(id)arg2:(id)arg3;
- (_Bool)__isClickRepeatedlyWithPage:(id)arg1 domain:(id)arg2;
- (void)pushFromView:(id)arg1 toView:(id)arg2 animated:(_Bool)arg3;
- (void)dial:(id)arg1:(id)arg2;
- (void)getAppVersion:(id)arg1:(id)arg2;
- (void)log:(id)arg1:(id)arg2:(id)arg3;
- (void)TDOnEvent:(id)arg1:(id)arg2:(id)arg3:(id)arg4;
- (void)request:(id)arg1:(id)arg2:(id)arg3:(id)arg4:(id)arg5:(id)arg6:(id)arg7;
- (void)backModule:(id)arg1:(id)arg2:(id)arg3:(id)arg4:(id)arg5;
- (void)loadPage:(id)arg1:(id)arg2:(id)arg3;
- (void)forwardInside:(id)arg1:(id)arg2:(id)arg3:(id)arg4;
- (void)forwardModule:(id)arg1:(id)arg2:(id)arg3:(id)arg4;
- (void)gotoNative:(id)arg1:(id)arg2:(id)arg3:(id)arg4;
- (void)backWithMid:(id)arg1:(id)arg2:(id)arg3:(id)arg4:(id)arg5;
- (void)back:(id)arg1:(id)arg2:(id)arg3:(id)arg4;
- (void)forward:(id)arg1:(id)arg2:(id)arg3;
- (void)refresh:(id)arg1:(id)arg2;
- (void)tip:(id)arg1:(id)arg2;
- (void)loadingFinish:(id)arg1;
- (void)loadingBegin:(id)arg1:(id)arg2;
- (void)loadingBegin:(id)arg1;
- (void)setHeader:(id)arg1:(id)arg2:(id)arg3:(id)arg4:(id)arg5:(id)arg6:(id)arg7:(id)arg8;
- (id)init;

@end
