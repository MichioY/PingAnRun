//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface LoginInfo : NSObject
{
    NSString *_ssoTicket;
    NSString *_sessionSecret;
    NSString *_mamcId;
}

@property(retain, nonatomic) NSString *mamcId; // @synthesize mamcId=_mamcId;
@property(retain, nonatomic) NSString *sessionSecret; // @synthesize sessionSecret=_sessionSecret;
@property(retain, nonatomic) NSString *ssoTicket; // @synthesize ssoTicket=_ssoTicket;
- (void).cxx_destruct;
- (id)init;

@end

