//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, PALiveAttachViewController, PALiveGiftModel, PALiveIMMsgInfo;

@protocol PALiveAttachViewControllerDelegate <NSObject>
- (void)homePage:(PALiveAttachViewController *)arg1;
- (void)signIn:(PALiveAttachViewController *)arg1;
- (void)share:(PALiveAttachViewController *)arg1;
- (void)reportAnchorVC:(PALiveAttachViewController *)arg1;
- (void)showMemberListVC:(PALiveAttachViewController *)arg1;
- (void)closeCurRoom:(PALiveAttachViewController *)arg1;
- (void)attachVC:(PALiveAttachViewController *)arg1 selectMsg:(PALiveIMMsgInfo *)arg2;
- (void)attachVC:(PALiveAttachViewController *)arg1 globalMute:(_Bool)arg2;
- (void)attachVC:(PALiveAttachViewController *)arg1 changeAudioMode:(_Bool)arg2;
- (void)livePreviewStartLive:(PALiveAttachViewController *)arg1;
- (void)attachVC:(PALiveAttachViewController *)arg1 sendGift:(PALiveGiftModel *)arg2;
- (void)attachVC:(PALiveAttachViewController *)arg1 sendPraise:(unsigned long long)arg2;
- (void)attachVC:(PALiveAttachViewController *)arg1 sendToHostMsg:(NSString *)arg2;
- (void)attachVC:(PALiveAttachViewController *)arg1 sendMsg:(NSString *)arg2 isQuestion:(_Bool)arg3;
@end

