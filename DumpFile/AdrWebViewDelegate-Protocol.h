//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AdrHybridWebView, NSError, NSURLRequest;

@protocol AdrWebViewDelegate <NSObject>

@optional
- (void)webView:(AdrHybridWebView *)arg1 didFailLoadWithError:(NSError *)arg2;
- (void)webViewDidFinishLoad:(AdrHybridWebView *)arg1;
- (void)webViewDidStartLoad:(AdrHybridWebView *)arg1;
- (_Bool)webView:(AdrHybridWebView *)arg1 shouldStartLoadWithRequest:(NSURLRequest *)arg2 navigationType:(long long)arg3;
@end
