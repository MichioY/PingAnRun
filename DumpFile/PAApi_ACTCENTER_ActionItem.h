//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSString;

@interface PAApi_ACTCENTER_ActionItem : NSObject
{
    long long _actionItemId;
    long long _postsId;
    NSString *_title;
    NSString *_actionItemType;
    long long _orderNo;
    NSString *_actionType;
    NSString *_action;
    NSString *_name;
    NSString *_summary;
    NSString *_photoUrl;
    long long _actionId;
    NSString *_url;
    NSMutableArray *_itmeInfos;
}

+ (id)deserialize:(id)arg1;
+ (id)deserializeWithJsonData:(id)arg1;
@property(retain, nonatomic) NSMutableArray *itmeInfos; // @synthesize itmeInfos=_itmeInfos;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
@property(nonatomic) long long actionId; // @synthesize actionId=_actionId;
@property(retain, nonatomic) NSString *photoUrl; // @synthesize photoUrl=_photoUrl;
@property(retain, nonatomic) NSString *summary; // @synthesize summary=_summary;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSString *action; // @synthesize action=_action;
@property(retain, nonatomic) NSString *actionType; // @synthesize actionType=_actionType;
@property(nonatomic) long long orderNo; // @synthesize orderNo=_orderNo;
@property(retain, nonatomic) NSString *actionItemType; // @synthesize actionItemType=_actionItemType;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) long long postsId; // @synthesize postsId=_postsId;
@property(nonatomic) long long actionItemId; // @synthesize actionItemId=_actionItemId;
- (void).cxx_destruct;
- (id)serialize;
- (id)init;

@end
