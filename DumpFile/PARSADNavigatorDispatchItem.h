//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString, PARSActivityDetailModel, PARSCircleInfo;

@interface PARSADNavigatorDispatchItem : NSObject
{
    _Bool _isSuccess;
    _Bool _tipAgentQuit;
    _Bool _needQuitGroup;
    int _comeFrom;
    NSString *_title;
    NSString *_URLString;
    NSString *_mobilePhone;
    NSString *_activityId;
    NSString *_service;
    NSString *_action;
    NSString *_nickName;
    NSString *_reason;
    NSString *_groupId;
    unsigned long long _navigationType;
    long long _viewType;
    long long _inviteComeFrom;
    PARSActivityDetailModel *_activityInfo;
    PARSCircleInfo *_circleInfo;
    NSArray *_circleInfos;
}

+ (id)dispatchItemWithKind:(unsigned long long)arg1 detailInfo:(id)arg2;
@property(retain, nonatomic) NSArray *circleInfos; // @synthesize circleInfos=_circleInfos;
@property(retain, nonatomic) PARSCircleInfo *circleInfo; // @synthesize circleInfo=_circleInfo;
@property(retain, nonatomic) PARSActivityDetailModel *activityInfo; // @synthesize activityInfo=_activityInfo;
@property(nonatomic) _Bool needQuitGroup; // @synthesize needQuitGroup=_needQuitGroup;
@property(nonatomic) _Bool tipAgentQuit; // @synthesize tipAgentQuit=_tipAgentQuit;
@property(nonatomic) _Bool isSuccess; // @synthesize isSuccess=_isSuccess;
@property(nonatomic) long long inviteComeFrom; // @synthesize inviteComeFrom=_inviteComeFrom;
@property(nonatomic) int comeFrom; // @synthesize comeFrom=_comeFrom;
@property(nonatomic) long long viewType; // @synthesize viewType=_viewType;
@property(nonatomic) unsigned long long navigationType; // @synthesize navigationType=_navigationType;
@property(retain, nonatomic) NSString *groupId; // @synthesize groupId=_groupId;
@property(retain, nonatomic) NSString *reason; // @synthesize reason=_reason;
@property(retain, nonatomic) NSString *nickName; // @synthesize nickName=_nickName;
@property(retain, nonatomic) NSString *action; // @synthesize action=_action;
@property(retain, nonatomic) NSString *service; // @synthesize service=_service;
@property(retain, nonatomic) NSString *activityId; // @synthesize activityId=_activityId;
@property(retain, nonatomic) NSString *mobilePhone; // @synthesize mobilePhone=_mobilePhone;
@property(retain, nonatomic) NSString *URLString; // @synthesize URLString=_URLString;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;

@end
