//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AdrInterface_Parser, NSString;

@interface AdrEnvTools : NSObject
{
    unsigned long long _envFlag;
    NSString *_envDesc;
    AdrInterface_Parser *_interface_Xml;
    NSString *_talkingDataAppKey;
    NSString *_userSecurityKey;
    NSString *_txtRSAPublicKey;
    NSString *_PersonalSecurityKey;
}

+ (id)copyWithZone:(struct _NSZone *)arg1;
+ (id)sharedAdrEnvTools;
+ (id)allocWithZone:(struct _NSZone *)arg1;
@property(retain, nonatomic) NSString *PersonalSecurityKey; // @synthesize PersonalSecurityKey=_PersonalSecurityKey;
@property(retain, nonatomic) NSString *txtRSAPublicKey; // @synthesize txtRSAPublicKey=_txtRSAPublicKey;
@property(retain, nonatomic) NSString *userSecurityKey; // @synthesize userSecurityKey=_userSecurityKey;
@property(retain, nonatomic) NSString *talkingDataAppKey; // @synthesize talkingDataAppKey=_talkingDataAppKey;
@property(retain, nonatomic) AdrInterface_Parser *interface_Xml; // @synthesize interface_Xml=_interface_Xml;
@property(retain, nonatomic) NSString *envDesc; // @synthesize envDesc=_envDesc;
@property(nonatomic) unsigned long long envFlag; // @synthesize envFlag=_envFlag;
- (void).cxx_destruct;
- (id)getActionKeyStrWithActionKey:(unsigned long long)arg1;
- (id)getRequestXMLHostPath;
- (void)setThirdDataForEnv:(unsigned long long)arg1;
- (void)setEnvFlagAndDesc:(unsigned long long)arg1;
- (id)getRequestUrlWithAction:(unsigned long long)arg1;
- (id)getThirdData:(unsigned long long)arg1;
- (void)setAnyDoorEnv:(unsigned long long)arg1;
- (id)init;

@end

