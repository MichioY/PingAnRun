//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface PAZQOPCamera : NSObject
{
    _Bool _needOneWayVideo;
    NSString *_currentBackId;
    NSString *_uuid;
    NSString *_userId;
    NSString *_rd;
    NSString *_key;
    NSString *_imgType;
    NSString *_photoType;
    NSString *_url;
    NSString *_clientInfo;
    NSString *_jsessionId;
    NSString *_token;
    NSString *_action;
}

@property(nonatomic) _Bool needOneWayVideo; // @synthesize needOneWayVideo=_needOneWayVideo;
@property(retain, nonatomic) NSString *action; // @synthesize action=_action;
@property(retain, nonatomic) NSString *token; // @synthesize token=_token;
@property(retain, nonatomic) NSString *jsessionId; // @synthesize jsessionId=_jsessionId;
@property(retain, nonatomic) NSString *clientInfo; // @synthesize clientInfo=_clientInfo;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
@property(retain, nonatomic) NSString *photoType; // @synthesize photoType=_photoType;
@property(retain, nonatomic) NSString *imgType; // @synthesize imgType=_imgType;
@property(retain, nonatomic) NSString *key; // @synthesize key=_key;
@property(retain, nonatomic) NSString *rd; // @synthesize rd=_rd;
@property(retain, nonatomic) NSString *userId; // @synthesize userId=_userId;
@property(retain, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;
@property(retain, nonatomic) NSString *currentBackId; // @synthesize currentBackId=_currentBackId;
- (void).cxx_destruct;
- (void)cleanData;

@end

