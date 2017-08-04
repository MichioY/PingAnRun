//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMutableDictionary, NSString, NSTimer, PAZQOPGetURLModel, PAZQOPVideoViewController, UIColor, UIView;

@interface PAZQOPApi : NSObject
{
    PAZQOPVideoViewController *videoController;
    PAZQOPGetURLModel *getUrl;
    _Bool _isAppUpdate;
    _Bool _isVideo;
    _Bool _isSetAppId;
    _Bool _isCamera;
    _Bool _isMike;
    unsigned long long _configStyle;
    unsigned long long _hangupBtnStyle;
    unsigned long long _queueConfigStyle;
    UIColor *_navBarBackgroundColor;
    UIColor *_localBackgroundColor;
    UIColor *_remoteBackgroundColor;
    UIView *_customQueueView;
    long long _customQueueLabelTag;
    long long _currentNetStatus;
    NSString *_owner_id;
    NSString *_user_id;
    NSArray *_ownerArray;
    NSTimer *_releaseTimer;
    CDUnknownBlockType _mainReturnBlock;
    NSTimer *_backTimer;
    NSMutableDictionary *_infoDic;
    struct CGRect _localVideoFrame;
    struct CGRect _remoteVideoFrame;
    struct CGRect _setHangUpFrame;
}

+ (id)share;
@property(retain, nonatomic) NSMutableDictionary *infoDic; // @synthesize infoDic=_infoDic;
@property(nonatomic) _Bool isMike; // @synthesize isMike=_isMike;
@property(nonatomic) _Bool isCamera; // @synthesize isCamera=_isCamera;
@property(nonatomic) _Bool isSetAppId; // @synthesize isSetAppId=_isSetAppId;
@property(retain, nonatomic) NSTimer *backTimer; // @synthesize backTimer=_backTimer;
@property(copy, nonatomic) CDUnknownBlockType mainReturnBlock; // @synthesize mainReturnBlock=_mainReturnBlock;
@property(retain, nonatomic) NSTimer *releaseTimer; // @synthesize releaseTimer=_releaseTimer;
@property(nonatomic) _Bool isVideo; // @synthesize isVideo=_isVideo;
@property(retain, nonatomic) NSArray *ownerArray; // @synthesize ownerArray=_ownerArray;
@property(copy, nonatomic) NSString *user_id; // @synthesize user_id=_user_id;
@property(copy, nonatomic) NSString *owner_id; // @synthesize owner_id=_owner_id;
@property(nonatomic) _Bool isAppUpdate; // @synthesize isAppUpdate=_isAppUpdate;
@property(nonatomic) long long currentNetStatus; // @synthesize currentNetStatus=_currentNetStatus;
@property(nonatomic) struct CGRect setHangUpFrame; // @synthesize setHangUpFrame=_setHangUpFrame;
@property(nonatomic) long long customQueueLabelTag; // @synthesize customQueueLabelTag=_customQueueLabelTag;
@property(retain, nonatomic) UIView *customQueueView; // @synthesize customQueueView=_customQueueView;
@property(retain, nonatomic) UIColor *remoteBackgroundColor; // @synthesize remoteBackgroundColor=_remoteBackgroundColor;
@property(nonatomic) struct CGRect remoteVideoFrame; // @synthesize remoteVideoFrame=_remoteVideoFrame;
@property(retain, nonatomic) UIColor *localBackgroundColor; // @synthesize localBackgroundColor=_localBackgroundColor;
@property(nonatomic) struct CGRect localVideoFrame; // @synthesize localVideoFrame=_localVideoFrame;
@property(retain, nonatomic) UIColor *navBarBackgroundColor; // @synthesize navBarBackgroundColor=_navBarBackgroundColor;
@property(nonatomic) unsigned long long queueConfigStyle; // @synthesize queueConfigStyle=_queueConfigStyle;
@property(nonatomic) unsigned long long hangupBtnStyle; // @synthesize hangupBtnStyle=_hangupBtnStyle;
@property(nonatomic) unsigned long long configStyle; // @synthesize configStyle=_configStyle;
- (void).cxx_destruct;
- (void)applicationDidBecomeActive;
- (void)applicationWillEnterForeground;
- (void)applicationDidEnterBackground;
- (void)applicationWillResignActive;
- (void)closTimer;
- (void)openTimer;
- (void)backGroundTimer;
- (_Bool)prepareAudioSession;
- (void)outputDeviceChanged:(id)arg1;
- (id)GetSDKVersion;
- (void)openViderViewController:(id)arg1;
- (void)loadDataVideo;
- (void)openAVideo:(id)arg1 channelId:(id)arg2 superVC:(id)arg3 callback:(CDUnknownBlockType)arg4;
- (void)openAVideoViewContro:(id)arg1;
- (_Bool)isOpenVidoe:(id)arg1;
- (void)setAppID:(id)arg1 channelData:(id)arg2;
- (id)extractDate:(id)arg1;
- (id)sha1:(id)arg1;
- (void)setEnv:(unsigned long long)arg1;
- (void)setAVSDK;
- (void)dealloc;

@end
