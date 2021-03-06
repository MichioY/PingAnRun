//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AVAudioPlayerDelegate.h"

@class AVAudioPlayer, NSString;

@interface PAIMPlayerMusic : NSObject <AVAudioPlayerDelegate>
{
    AVAudioPlayer *_playerMessageMusic;
    _Bool isOfflineMessage;
    _Bool isFristPlayerMusic;
    _Bool isFristVibrate;
}

+ (id)sharedManager;
@property(nonatomic) _Bool isFristVibrate; // @synthesize isFristVibrate;
@property(nonatomic) _Bool isFristPlayerMusic; // @synthesize isFristPlayerMusic;
@property(nonatomic) _Bool isOfflineMessage; // @synthesize isOfflineMessage;
- (void).cxx_destruct;
- (void)startVibrate;
- (void)playSound;
- (void)playerMessageMusic;
- (_Bool)setSoundFilePath:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

