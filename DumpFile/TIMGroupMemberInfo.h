//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TIMCodingModel.h"

@class NSDictionary, NSString;

@interface TIMGroupMemberInfo : TIMCodingModel
{
    unsigned int silentUntil;
    NSString *member;
    NSString *nameCard;
    long long joinTime;
    long long role;
    NSDictionary *_customInfo;
}

@property(retain, nonatomic) NSDictionary *customInfo; // @synthesize customInfo=_customInfo;
@property(nonatomic) unsigned int silentUntil; // @synthesize silentUntil;
@property(nonatomic) long long role; // @synthesize role;
@property(nonatomic) long long joinTime; // @synthesize joinTime;
@property(retain, nonatomic) NSString *nameCard; // @synthesize nameCard;
@property(retain, nonatomic) NSString *member; // @synthesize member;
- (void).cxx_destruct;
- (int)initWithIMCore:(struct NewGroupMemberInfo)arg1;

@end
