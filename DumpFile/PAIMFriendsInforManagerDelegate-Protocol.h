//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, PAIMFriendModel;

@protocol PAIMFriendsInforManagerDelegate <NSObject>

@optional
- (void)setNickNameRequestResult:(_Bool)arg1;
- (void)removeBlacklistRequestResult:(_Bool)arg1;
- (void)addToBlacklistRequestResult:(_Bool)arg1;
- (void)deleteFriendRequestResult:(_Bool)arg1;
- (void)addFriendRequestResult:(_Bool)arg1;
- (void)requestCallback:(NSString *)arg1;
- (void)requestSuccessWithFriendModel:(PAIMFriendModel *)arg1;
@end
