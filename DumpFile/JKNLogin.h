//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSString;

@interface JKNLogin : NSObject
{
    _Bool _isProcessing;
    _Bool _isRefresh;
    NSMutableArray *_cordovaPluginClassNames;
    id <JKNLoginDelegate> _loginDelegate;
    id <JKNViewDelegate> _viewDelegate;
    NSString *_partnerUserToken;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSString *partnerUserToken; // @synthesize partnerUserToken=_partnerUserToken;
@property(nonatomic) _Bool isRefresh; // @synthesize isRefresh=_isRefresh;
@property(nonatomic) _Bool isProcessing; // @synthesize isProcessing=_isProcessing;
@property(nonatomic) id <JKNViewDelegate> viewDelegate; // @synthesize viewDelegate=_viewDelegate;
@property(nonatomic) id <JKNLoginDelegate> loginDelegate; // @synthesize loginDelegate=_loginDelegate;
@property(retain, nonatomic) NSMutableArray *cordovaPluginClassNames; // @synthesize cordovaPluginClassNames=_cordovaPluginClassNames;
- (void).cxx_destruct;
- (void)handleLogoutSuccess:(id)arg1;
- (void)handleNoActiveDevice;
- (void)handleGetWebTokenFailure;
- (void)handleGetWebTokenSuccess;
- (void)handleGetUserTokenFailure;
- (void)handleGetUserTokenSuccess;
- (void)handleDeviceRegistFailure;
- (void)handleDeviceRegistSuccess;
- (void)jkn_notifyViewDelegate;
- (void)jkn_notifyViewDelegateWithFlag:(_Bool)arg1;
- (void)jkn_notifyViewDelegateWithViewController:(id)arg1;
- (_Bool)jkn_notifyLoginDelegateResetPartnerToken;
- (void)jkn_notifyLoginDelegateWithStep:(long long)arg1 status:(_Bool)arg2;
- (void)jkn_refreshViewController:(id)arg1;
- (id)jkn_getTabbarViewController;
- (void)jkn_cleanAccountInfo;
- (void)jkn_deleteDeviceInfo;
- (void)jkn_pageChangedInHomepage:(_Bool)arg1;
- (void)jkn_logoutHostApp;
- (void)jkn_exitInquiryHall;
- (void)jkn_removeLoginInfo;
- (void)jkn_removeWebUserInfo;
- (void)jkn_removeUserInfo;
- (void)jkn_removeLocalInfo;
- (void)jkn_setGetUserWebTokenState:(_Bool)arg1;
- (_Bool)jkn_isGetUserWebToken;
- (_Bool)jkn_validateUserToken;
- (void)jkn_refreshWebToken;
- (void)jkn_refreshUserToken;
- (void)jkn_requestMatchAgentCode;
- (void)jkn_requestWebToken;
- (void)jkn_requestUserToken;
- (void)jkn_exchangeTokenWithPartnerToken:(id)arg1;
- (void)jkn_exchangeToken;
- (void)jkn_setPartnerUserToken:(id)arg1;
- (void)dealloc;
- (id)init;

@end
