//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSCache;

@interface PAIMFriendCacheController : NSObject
{
    NSCache *cache;
    NSCache *_groupChatCache;
    NSCache *_groupMemberCache;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSCache *cache; // @synthesize cache;
- (void).cxx_destruct;
- (void)dealloc;
- (void)clearGroupMemberCacheForKey:(id)arg1;
- (void)clearGroupMemberCache;
- (id)getGroupMemberCacheForKey:(id)arg1;
- (void)setGroupMemberCache:(id)arg1 forKey:(id)arg2;
- (void)clearGroupCacheForKey:(id)arg1;
- (void)clearGroupCache;
- (id)getGroupCacheForKey:(id)arg1;
- (void)setGroupCache:(id)arg1 forKey:(id)arg2;
- (void)clearCacheForKey:(id)arg1;
- (void)clearCache;
- (id)getCacheForKey:(id)arg1;
- (void)setCache:(id)arg1 forKey:(id)arg2;
- (id)init;

@end

