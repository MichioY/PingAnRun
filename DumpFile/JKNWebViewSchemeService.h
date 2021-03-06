//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface JKNWebViewSchemeService : NSObject
{
}

+ (void)executeJS:(id)arg1 webView:(id)arg2 func:(id)arg3;
+ (void)getLocation:(id)arg1 content:(id)arg2;
+ (void)runInBackground:(CDUnknownBlockType)arg1;
+ (void)setHealthHabit:(id)arg1 webView:(id)arg2;
+ (void)takePoto:(id)arg1 webView:(id)arg2 imagePickerType:(unsigned long long)arg3;
+ (void)refreshUserToken:(id)arg1 content:(id)arg2;
+ (void)getVersionCode:(id)arg1 content:(id)arg2;
+ (void)shareWithType:(id)arg1 sharedata:(id)arg2;
+ (_Bool)openSafairWithUrl:(id)arg1;
+ (void)clearHistoryWithUrl:(id)arg1;
+ (void)closeWebView:(id)arg1;
+ (void)openNewWebView:(id)arg1 webView:(id)arg2;
+ (_Bool)handleWebViewSchemeActionWithWebView:(id)arg1 request:(id)arg2;

@end

