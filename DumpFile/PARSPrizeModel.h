//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PARSBaseInfo.h"

@class NSString;

@interface PARSPrizeModel : PARSBaseInfo
{
    _Bool _isExpired;
    _Bool _isReceived;
    NSString *_Id;
    NSString *_name;
    NSString *_grade;
    NSString *_gradeName;
    NSString *_type;
    NSString *_expirationTime;
    NSString *_receivedTime;
    NSString *_activityNo;
    NSString *_activityName;
    NSString *_prizeNo;
    NSString *_iconUrl;
    NSString *_tab;
    unsigned long long _page;
}

+ (id)prizeModelWithDict:(id)arg1;
@property(nonatomic) unsigned long long page; // @synthesize page=_page;
@property(copy, nonatomic) NSString *tab; // @synthesize tab=_tab;
@property(nonatomic) _Bool isReceived; // @synthesize isReceived=_isReceived;
@property(nonatomic) _Bool isExpired; // @synthesize isExpired=_isExpired;
@property(copy, nonatomic) NSString *iconUrl; // @synthesize iconUrl=_iconUrl;
@property(copy, nonatomic) NSString *prizeNo; // @synthesize prizeNo=_prizeNo;
@property(copy, nonatomic) NSString *activityName; // @synthesize activityName=_activityName;
@property(copy, nonatomic) NSString *activityNo; // @synthesize activityNo=_activityNo;
@property(copy, nonatomic) NSString *receivedTime; // @synthesize receivedTime=_receivedTime;
@property(copy, nonatomic) NSString *expirationTime; // @synthesize expirationTime=_expirationTime;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *gradeName; // @synthesize gradeName=_gradeName;
@property(copy, nonatomic) NSString *grade; // @synthesize grade=_grade;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *Id; // @synthesize Id=_Id;
- (void).cxx_destruct;
- (id)initWithDict:(id)arg1;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;

@end
