//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JKNSharePlatformInfo.h"

@class NSDictionary, NSString;

@interface JKNShareWeiboInfo : JKNSharePlatformInfo
{
    NSString *_secret;
    NSString *_redirectUrl;
    NSDictionary *_userInfo;
    NSString *_scope;
}

@property(retain, nonatomic) NSString *scope; // @synthesize scope=_scope;
@property(retain, nonatomic) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(retain, nonatomic) NSString *redirectUrl; // @synthesize redirectUrl=_redirectUrl;
@property(retain, nonatomic) NSString *secret; // @synthesize secret=_secret;
- (void).cxx_destruct;

@end

