//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PALHServiceHandler.h"

@class PALHWebView;

@interface PALHCouponServiceHandler : PALHServiceHandler
{
    CDUnknownBlockType _useCouponBlock;
    PALHWebView *_webView;
}

@property(nonatomic) __weak PALHWebView *webView; // @synthesize webView=_webView;
@property(copy, nonatomic) CDUnknownBlockType useCouponBlock; // @synthesize useCouponBlock=_useCouponBlock;
- (void).cxx_destruct;
- (void)showUpdateTips:(id)arg1 resultBlock:(CDUnknownBlockType)arg2;
- (void)useCoupon:(id)arg1 resultBlock:(CDUnknownBlockType)arg2;
- (void)handleMessage:(id)arg1 result:(CDUnknownBlockType)arg2;
- (id)actions;

@end

