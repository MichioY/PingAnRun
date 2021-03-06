//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "UIWebViewDelegate.h"

@class JKNShareData, NSDate, NSString, NSTimer, UIButton, UILabel, UITextView, UIView, UIWebView;

@interface JKNShareWeiboWebViewController : UIViewController <UIWebViewDelegate>
{
    UILabel *_name;
    UIWebView *_authWebView;
    UITextView *_textview;
    UIView *_viewWebContainer;
    UIButton *_share;
    NSTimer *_timer;
    int _times;
    _Bool _isSuccess;
    NSString *_ShareStatusText;
    JKNShareData *_shareData;
    NSString *_defaultImageName;
    NSString *_shareContent;
    NSString *_wbtoken;
    NSString *_wbCurrentUserId;
    NSDate *_wbtokenPeriod;
    NSString *_appId;
    NSString *_appSecret;
    NSString *_redirectUrl;
}

- (void).cxx_destruct;
- (id)weiboWebTruncat:(id)arg1;
- (id)weiboWebTrim:(id)arg1;
- (void)hideWeiboAuthorizeWebview;
- (_Bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)didReceiveMemoryWarning;
- (id)pingResultPageContentWithText:(id)arg1;
- (void)showShareResultPageWithText:(id)arg1;
- (void)timerTrigger;
- (void)weiboWebShareRequest;
- (id)getWeiboUserNickName;
- (void)loadWeiboAuthorizeWebview;
- (void)btnShareToWeibo;
- (void)btnCancelClicked;
- (void)configShareData;
- (void)viewDidLoad;
- (id)initWithAppInfo:(id)arg1 shareData:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

