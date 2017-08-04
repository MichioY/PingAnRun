//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface JKNWebCookie : NSObject
{
    NSString *_wbtoken;
    NSString *_domain;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSString *domain; // @synthesize domain=_domain;
@property(retain, nonatomic) NSString *wbtoken; // @synthesize wbtoken=_wbtoken;
- (void).cxx_destruct;
- (void)injectWebToken;
- (void)injectUserToken;
- (void)injectTokens;
- (void)deleteCookieWithName:(id)arg1;
- (void)deleteAllCookies;
- (void)setCookieName:(id)arg1 value:(id)arg2;
- (void)loadUsertokenAndWebtoken;
- (void)loadUserTokenWithDomain:(id)arg1;
- (id)init;

@end
