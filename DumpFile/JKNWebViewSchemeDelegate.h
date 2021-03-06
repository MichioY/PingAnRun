//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, UIWebView;

@interface JKNWebViewSchemeDelegate : NSObject
{
    UIWebView *_curentWebView;
    NSString *_jsFunc;
}

+ (void)executeJS:(id)arg1 webView:(id)arg2 func:(id)arg3;
+ (id)sharedInstance;
@property(copy, nonatomic) NSString *jsFunc; // @synthesize jsFunc=_jsFunc;
@property(retain, nonatomic) UIWebView *curentWebView; // @synthesize curentWebView=_curentWebView;
- (void).cxx_destruct;
- (void)dealloc;
- (void)refreshTokenFailure:(id)arg1;
- (void)refreshTokenSuccess:(id)arg1;
- (void)getWebView:(id)arg1 jsFunc:(id)arg2;
- (void)getLocationInWebview:(id)arg1 content:(id)arg2;
- (id)init;

@end

