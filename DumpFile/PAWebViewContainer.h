//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UIWebViewDelegate.h"

@class NSString, NSURLConnection, NSURLRequest, PAEasyJSWebView, WebViewURLManager;

@interface PAWebViewContainer : UIView <UIWebViewDelegate>
{
    _Bool _isFinishLoading;
    _Bool _authenticated;
    PAEasyJSWebView *_easyWebView;
    id <PAWebViewContainerDelegate> _delegate;
    NSString *_currentUrl;
    WebViewURLManager *_webViewUrlManager;
    NSURLRequest *_originRequest;
    NSURLConnection *_urlConnection;
    struct CGPoint _tapPoint;
}

@property(retain, nonatomic) NSURLConnection *urlConnection; // @synthesize urlConnection=_urlConnection;
@property(retain, nonatomic) NSURLRequest *originRequest; // @synthesize originRequest=_originRequest;
@property(nonatomic) _Bool authenticated; // @synthesize authenticated=_authenticated;
@property(retain, nonatomic) WebViewURLManager *webViewUrlManager; // @synthesize webViewUrlManager=_webViewUrlManager;
@property(retain, nonatomic) NSString *currentUrl; // @synthesize currentUrl=_currentUrl;
@property(nonatomic) _Bool isFinishLoading; // @synthesize isFinishLoading=_isFinishLoading;
@property(nonatomic) __weak id <PAWebViewContainerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) struct CGPoint tapPoint; // @synthesize tapPoint=_tapPoint;
@property(retain, nonatomic) PAEasyJSWebView *easyWebView; // @synthesize easyWebView=_easyWebView;
- (void).cxx_destruct;
- (void)openRefreshPage;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)webViewDidStartLoad:(id)arg1;
- (void)webView:(id)arg1 shouldDidStartLoadWithRequest:(id)arg2;
- (_Bool)connection:(id)arg1 canAuthenticateAgainstProtectionSpace:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)connection:(id)arg1 didReceiveAuthenticationChallenge:(id)arg2;
- (_Bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (void)loadWithURL:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

