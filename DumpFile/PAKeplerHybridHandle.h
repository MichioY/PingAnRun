//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UserInfoEntity;

@interface PAKeplerHybridHandle : NSObject
{
    UserInfoEntity *_entity;
}

+ (void)purgeSharedInstance;
+ (id)sharedInstance;
@property(retain, nonatomic) UserInfoEntity *entity; // @synthesize entity=_entity;
- (void).cxx_destruct;
- (void)getAddressInfo:(id)arg1:(id)arg2;
- (void)getContactsInfo:(id)arg1:(id)arg2:(id)arg3;
- (void)getTDDeviceInfo:(id)arg1:(id)arg2;

@end

