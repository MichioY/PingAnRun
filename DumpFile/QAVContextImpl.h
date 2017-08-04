//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QAVContext.h"

#import "roomInternalDelegate.h"

@class NSString, QAVAudioCtrl, QAVCloudSpearEngineCtrl, QAVContextStartParam, QAVCustomSpearEngineCtrl, QAVRoomDelegateOnMainThread, QAVRoomMulti, QAVVideoCtrl;

@interface QAVContextImpl : QAVContext <roomInternalDelegate>
{
    QAVContextStartParam *_startParam;
    struct AVContextProxy *_context;
    struct AVBasicRoomDeletateImp *_pImp;
    QAVRoomMulti *_room;
    QAVAudioCtrl *_audioCtrl;
    QAVVideoCtrl *_videoCtrl;
    QAVCloudSpearEngineCtrl *_cloudSpearCtrl;
    QAVCustomSpearEngineCtrl *_customSpearCtrl;
    QAVRoomDelegateOnMainThread *_avRoomDelegate;
    int _version;
    long long _roomState;
}

@property(nonatomic) struct AVContextProxy *nativeContext; // @synthesize nativeContext=_context;
- (id)customSpearCtrl;
- (id)cloudSpearCtrl;
- (long long)state;
- (id)param;
- (id)videoCtrl;
- (id)room;
- (id)audioCtrl;
- (void)OnHwStateChangeNotify:(int)arg1 isMain:(int)arg2 isSwitchToSoft:(int)arg3 identifier:(id)arg4;
- (void)OnRoomEvent:(int)arg1 subtype:(int)arg2 data:(void *)arg3;
- (void)OnCameraSettingNotify:(int)arg1 Height:(int)arg2 Fps:(int)arg3;
- (void)OnSemiAutoRecvMediaVideo:(id)arg1;
- (void)OnSemiAutoRecvScreenVideo:(id)arg1;
- (void)OnSemiAutoRecvCameraVideo:(id)arg1;
- (void)OnPrivilegeDiffNotify:(int)arg1;
- (void)OnEndpointsUpdateInfo:(long long)arg1 endpointList:(id)arg2;
- (void)OnRoomDisconnect:(int)arg1 withString:(id)arg2;
- (void)OnExitRoomComplete;
- (void)OnSwitchRoomComplete:(int)arg1 withString:(id)arg2;
- (void)OnEnterRoomComplete:(int)arg1 withString:(id)arg2;
- (void)OnEnterForground:(id)arg1;
- (_Bool)delayExecuteWithTime:(double)arg1;
- (void)onBecomeTerminate:(id)arg1;
- (void)OnEnterBackground:(id)arg1;
- (void)onAudioInterruption:(id)arg1;
- (void)OnTelephonyStateListenerEnd;
- (void)OnTelephonyStateListenerBegin;
- (void)OnBecomeActive:(id)arg1;
- (void)OnResignActive:(id)arg1;
- (void)switchRoom:(int)arg1;
- (long long)exitRoom;
- (void)enterRoom:(id)arg1 delegate:(id)arg2;
- (void)destroyInternal;
- (long long)stop;
- (void)setImsdkChannel;
- (void)setHttpsInternalChannel;
- (void)startWithParam:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (int)getCurNetType;
- (void)OnNetStatChanged:(id)arg1;
- (void)destroy;
- (_Bool)create;
- (id)init;
- (void)dealloc;
- (int)version;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
