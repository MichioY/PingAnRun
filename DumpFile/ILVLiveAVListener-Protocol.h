//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@protocol ILVLiveAVListener <NSObject>

@optional
- (void)onRoomDisconnect:(int)arg1;
- (void)onFirstFrameRecved:(int)arg1 height:(int)arg2 identifier:(NSString *)arg3 srcType:(long long)arg4;
- (void)onUserUpdateInfo:(long long)arg1 users:(NSArray *)arg2;
@end
