//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "CDVScreenOrientationDelegate.h"
#import "UIWebViewDelegate.h"

@class CDVInAppBrowser, CDVInAppBrowserOptions, CDVWebViewDelegate, NSString, NSURL, UIActivityIndicatorView, UIBarButtonItem, UILabel, UIToolbar, UIWebView;

@interface CDVInAppBrowserViewController : UIViewController <UIWebViewDelegate, CDVScreenOrientationDelegate>
{
    NSString *_userAgent;
    NSString *_prevUserAgent;
    long long _userAgentLockToken;
    CDVInAppBrowserOptions *_browserOptions;
    CDVWebViewDelegate *_webViewDelegate;
    NSURL *currentURL;
    UIWebView *_webView;
    UIBarButtonItem *_closeButton;
    UILabel *_addressLabel;
    UIBarButtonItem *_backButton;
    UIBarButtonItem *_forwardButton;
    UIActivityIndicatorView *_spinner;
    UIToolbar *_toolbar;
    id <CDVScreenOrientationDelegate> _orientationDelegate;
    CDVInAppBrowser *_navigationDelegate;
}

@property(nonatomic) __weak CDVInAppBrowser *navigationDelegate; // @synthesize navigationDelegate=_navigationDelegate;
@property(nonatomic) __weak id <CDVScreenOrientationDelegate> orientationDelegate; // @synthesize orientationDelegate=_orientationDelegate;
@property(retain, nonatomic) UIToolbar *toolbar; // @synthesize toolbar=_toolbar;
@property(retain, nonatomic) UIActivityIndicatorView *spinner; // @synthesize spinner=_spinner;
@property(retain, nonatomic) UIBarButtonItem *forwardButton; // @synthesize forwardButton=_forwardButton;
@property(retain, nonatomic) UIBarButtonItem *backButton; // @synthesize backButton=_backButton;
@property(retain, nonatomic) UILabel *addressLabel; // @synthesize addressLabel=_addressLabel;
@property(retain, nonatomic) UIBarButtonItem *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) UIWebView *webView; // @synthesize webView=_webView;
@property(retain, nonatomic) NSURL *currentURL; // @synthesize currentURL;
- (void).cxx_destruct;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)webViewDidFinishLoad:(id)arg1;
- (_Bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (void)webViewDidStartLoad:(id)arg1;
- (void)rePositionViews;
- (float)getStatusBarOffset;
- (void)viewWillAppear:(_Bool)arg1;
- (void)goForward:(id)arg1;
- (void)goBack:(id)arg1;
- (void)navigateTo:(id)arg1;
- (void)close;
- (long long)preferredStatusBarStyle;
- (void)viewDidUnload;
- (void)viewDidLoad;
- (void)showToolBar:(_Bool)arg1:(id)arg2;
- (void)showLocationBar:(_Bool)arg1;
- (void)setCloseButtonTitle:(id)arg1;
- (void)setWebViewFrame:(struct CGRect)arg1;
- (void)createViews;
- (id)initWithUserAgent:(id)arg1 prevUserAgent:(id)arg2 browserOptions:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

