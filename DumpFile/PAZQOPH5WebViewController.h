//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "UIWebViewDelegate.h"

@class NSString, NSURL, UIView, UIWebView;

@interface PAZQOPH5WebViewController : UIViewController <UIWebViewDelegate>
{
    UIWebView *_webView;
    NSString *backlStr;
    NSString *wbStr;
    long long urlCount;
    UIView *view;
    _Bool isgoback;
    _Bool isFromChooseView;
    NSString *titleText;
    NSString *URL;
    NSURL *redirectUrl;
    UIView *_topView;
}

@property(retain, nonatomic) UIView *topView; // @synthesize topView=_topView;
@property(nonatomic) _Bool isFromChooseView; // @synthesize isFromChooseView;
@property(retain, nonatomic) NSURL *redirectUrl; // @synthesize redirectUrl;
@property(retain, nonatomic) NSString *URL; // @synthesize URL;
@property(retain, nonatomic) NSString *titleText; // @synthesize titleText;
- (void).cxx_destruct;
- (id)colorFromString:(id)arg1;
- (_Bool)checkString:(id)arg1 formatType:(id)arg2;
- (long long)iOSVersionCompare:(id)arg1:(id)arg2;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2 IsView:(_Bool)arg3;
- (void)toggleAction;
- (void)toggleEdit;
- (void)addRight;
- (void)modifyBrowserKernelUserAgent;
- (void)loadViewByUrl:(id)arg1 Title:(id)arg2;
- (_Bool)prefersStatusBarHidden;
- (long long)preferredStatusBarStyle;
- (void)urlWithLskey;
- (void)didReceiveMemoryWarning;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)webViewDidStartLoad:(id)arg1;
- (_Bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (void)refreshData;
- (void)backToLastViewController:(id)arg1;
- (void)resetColor:(id)arg1;
- (void)viewDidLoad;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

