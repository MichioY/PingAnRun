//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class TIMInnerUser;

@interface TIMFriendshipProxy : NSObject
{
    TIMInnerUser *user_;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (long long)GetStaus;
- (id)GetFriendGroup:(id)arg1;
- (id)GetFriendGroupList;
- (id)GetFriendsProfile:(id)arg1;
- (id)GetFriendList;
- (int)setUser:(id)arg1;
- (basic_string_a490aa4c)getIdentifier;

@end
