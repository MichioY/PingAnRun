//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PARSBaseInfo.h"

@class NSString;

@interface PARSPolicyNotificationInfo : PARSBaseInfo
{
    NSString *_title;
    NSString *_content;
    NSString *_openUrl;
}

@property(copy, nonatomic) NSString *openUrl; // @synthesize openUrl=_openUrl;
@property(copy, nonatomic) NSString *content; // @synthesize content=_content;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)initWithJson:(id)arg1;

@end

