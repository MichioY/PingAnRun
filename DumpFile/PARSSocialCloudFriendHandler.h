//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PARSSocialCloudBaseHandler.h"

#import "PAIMApiFriendsDelegate.h"

@class NSString, PAIMApiFriends;

@interface PARSSocialCloudFriendHandler : PARSSocialCloudBaseHandler <PAIMApiFriendsDelegate>
{
    PAIMApiFriends *_friendHandler;
}

@property(retain, nonatomic) PAIMApiFriends *friendHandler; // @synthesize friendHandler=_friendHandler;
- (void).cxx_destruct;
- (void)queryFriendSucceed:(id)arg1;
- (void)queryFriendFailed:(id)arg1;
- (void)addFriendCallBack:(_Bool)arg1;
- (id)fetchFriendInfoWithFriendId:(id)arg1;
- (void)fetchFriendInfoWithFriendId:(id)arg1 result:(CDUnknownBlockType)arg2;
- (void)fetchFriendInfoWithCustomId:(id)arg1 result:(CDUnknownBlockType)arg2;
- (void)addFriendWithFriendId:(id)arg1 result:(CDUnknownBlockType)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
