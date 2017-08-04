//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PARSWebViewController.h"

@class EasyJSWebView, NSString;

@interface PARSEasyWebViewController : PARSWebViewController
{
    _Bool _needHideNavBar;
    NSString *_nativeName;
}

@property(nonatomic) _Bool needHideNavBar; // @synthesize needHideNavBar=_needHideNavBar;
@property(readonly, copy, nonatomic) NSString *nativeName; // @synthesize nativeName=_nativeName;
- (void).cxx_destruct;
- (_Bool)shouldHideNavigationBar;
- (void)parsWebView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)parsWebViewDidFinishLoad:(id)arg1;
- (void)parsWebViewDidStartLoad:(id)arg1;
- (void)navBackAction:(id)arg1;
- (void)updateNavBarWithHidden:(_Bool)arg1;
- (void)updateNavBarStatus;
- (id)buildWebView;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (id)initWithNativeName:(id)arg1 url:(id)arg2;

// Remaining properties
@property(readonly, nonatomic) EasyJSWebView *webView;

@end
