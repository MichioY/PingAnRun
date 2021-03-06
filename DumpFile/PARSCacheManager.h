//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UIWebViewDelegate.h"

@class NSString, UIWebView, YYCache;

@interface PARSCacheManager : NSObject <UIWebViewDelegate>
{
    YYCache *_cache;
    UIWebView *_webView;
    NSString *_diskPath;
}

+ (id)sharedManager;
@property(copy, nonatomic) NSString *diskPath; // @synthesize diskPath=_diskPath;
@property(retain, nonatomic) UIWebView *webView; // @synthesize webView=_webView;
@property(retain, nonatomic) YYCache *cache; // @synthesize cache=_cache;
- (void).cxx_destruct;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)webViewDidFinishLoad:(id)arg1;
- (_Bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (void)loadWebView;
- (_Bool)isJsOrCss:(id)arg1;
- (_Bool)shouldCacheResponse:(id)arg1;
- (void)setResponse:(id)arg1 forRequest:(id)arg2;
- (void)setData:(id)arg1 forRequest:(id)arg2;
- (id)infoForRequest:(id)arg1;
- (void)webCacheSizeWithBlock:(CDUnknownBlockType)arg1;
- (void)cleanCache;
- (void)setUp;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

