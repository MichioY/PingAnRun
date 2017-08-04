//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIViewController, UIWebView;

@interface CDVPlugin : NSObject
{
    _Bool hasPendingOperation;
    _Bool _isStatusBarOverlaysWebView;
    UIWebView *webView;
    UIViewController *viewController;
    id <CDVCommandDelegate> commandDelegate;
}

@property(nonatomic) _Bool isStatusBarOverlaysWebView; // @synthesize isStatusBarOverlaysWebView=_isStatusBarOverlaysWebView;
@property _Bool hasPendingOperation; // @synthesize hasPendingOperation;
@property(nonatomic) __weak id <CDVCommandDelegate> commandDelegate; // @synthesize commandDelegate;
@property(nonatomic) __weak UIViewController *viewController; // @synthesize viewController;
@property(nonatomic) __weak UIWebView *webView; // @synthesize webView;
- (void).cxx_destruct;
- (id)error:(id)arg1 callbackId:(id)arg2;
- (id)success:(id)arg1 callbackId:(id)arg2;
- (id)writeJavascript:(id)arg1;
- (id)appDelegate;
- (void)dealloc;
- (void)onReset;
- (void)onMemoryWarning;
- (void)onAppTerminate;
- (void)handleOpenURL:(id)arg1;
- (void)dispose;
- (void)pluginInitialize;
- (id)initWithWebView:(id)arg1;
- (id)initWithWebView:(id)arg1 settings:(id)arg2;

@end
