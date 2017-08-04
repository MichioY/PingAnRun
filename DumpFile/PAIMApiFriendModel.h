//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSString;

@interface PAIMApiFriendModel : NSObject
{
    _Bool _hidden;
    _Bool _enable;
    NSString *_friendID;
    NSString *_name;
    NSString *_nickName;
    NSString *_heartID;
    NSString *_sex;
    NSString *_albumUrl;
    NSString *_mobilePhone;
    NSString *_signature;
    NSString *_region;
    NSString *_fullPinYin;
    NSString *_sectionName;
    unsigned long long _friendType;
    unsigned long long _userType;
    NSDate *_createTime;
    NSDate *_updateTime;
    NSString *_describe;
    long long _cancelAttentionStatus;
    NSString *_groupID;
    NSString *_groupNickName;
    NSString *_role;
    unsigned long long _groupType;
    unsigned long long _memberStatus;
}

@property(nonatomic) unsigned long long memberStatus; // @synthesize memberStatus=_memberStatus;
@property(nonatomic) unsigned long long groupType; // @synthesize groupType=_groupType;
@property(retain, nonatomic) NSString *role; // @synthesize role=_role;
@property(retain, nonatomic) NSString *groupNickName; // @synthesize groupNickName=_groupNickName;
@property(retain, nonatomic) NSString *groupID; // @synthesize groupID=_groupID;
@property(nonatomic) long long cancelAttentionStatus; // @synthesize cancelAttentionStatus=_cancelAttentionStatus;
@property(nonatomic) _Bool enable; // @synthesize enable=_enable;
@property(nonatomic) _Bool hidden; // @synthesize hidden=_hidden;
@property(retain, nonatomic) NSString *describe; // @synthesize describe=_describe;
@property(retain, nonatomic) NSDate *updateTime; // @synthesize updateTime=_updateTime;
@property(retain, nonatomic) NSDate *createTime; // @synthesize createTime=_createTime;
@property(nonatomic) unsigned long long userType; // @synthesize userType=_userType;
@property(nonatomic) unsigned long long friendType; // @synthesize friendType=_friendType;
@property(retain, nonatomic) NSString *sectionName; // @synthesize sectionName=_sectionName;
@property(retain, nonatomic) NSString *fullPinYin; // @synthesize fullPinYin=_fullPinYin;
@property(retain, nonatomic) NSString *region; // @synthesize region=_region;
@property(retain, nonatomic) NSString *signature; // @synthesize signature=_signature;
@property(retain, nonatomic) NSString *mobilePhone; // @synthesize mobilePhone=_mobilePhone;
@property(retain, nonatomic) NSString *albumUrl; // @synthesize albumUrl=_albumUrl;
@property(retain, nonatomic) NSString *sex; // @synthesize sex=_sex;
@property(retain, nonatomic) NSString *heartID; // @synthesize heartID=_heartID;
@property(retain, nonatomic) NSString *nickName; // @synthesize nickName=_nickName;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSString *friendID; // @synthesize friendID=_friendID;
- (void).cxx_destruct;
- (id)jid2user;
- (id)getNameToDisplay;
- (id)getChatUserName;
- (id)initWithFriendID:(id)arg1 friendName:(id)arg2 nickName:(id)arg3 albumUrl:(id)arg4 mobilePhone:(id)arg5 signature:(id)arg6 region:(id)arg7 friendType:(unsigned long long)arg8 userType:(unsigned long long)arg9 sex:(id)arg10 describe:(id)arg11 hidden:(_Bool)arg12 enable:(_Bool)arg13;
- (id)initWithFriendID:(id)arg1 friendName:(id)arg2 nickName:(id)arg3 albumUrl:(id)arg4 mobilePhone:(id)arg5 signature:(id)arg6 region:(id)arg7 friendType:(unsigned long long)arg8 userType:(unsigned long long)arg9 groupID:(id)arg10 groupNickName:(id)arg11 role:(id)arg12 groupType:(unsigned long long)arg13 memberStatus:(unsigned long long)arg14 sex:(id)arg15;
- (id)initWithFriendID:(id)arg1 friendName:(id)arg2 nickName:(id)arg3 albumUrl:(id)arg4 mobilePhone:(id)arg5 signature:(id)arg6 region:(id)arg7 friendType:(unsigned long long)arg8 userType:(unsigned long long)arg9 sex:(id)arg10 cancelAttentionStatus:(long long)arg11;

@end
