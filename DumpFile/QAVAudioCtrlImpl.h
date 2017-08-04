//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QAVAudioCtrl.h"

@class QAVContextImpl;

@interface QAVAudioCtrlImpl : QAVAudioCtrl
{
    _Bool _isEnableExternalCap;
    _Bool _isPhoneConnected;
    struct AuidoInternalCallback *_audioNativeCallback;
    long long _outputMode;
    QAVContextImpl *_context;
    id <QAVAudioDataDelegate> _audioDlg;
}

@property(nonatomic) id <QAVAudioDataDelegate> audioDlg; // @synthesize audioDlg=_audioDlg;
@property(retain, nonatomic) QAVContextImpl *context; // @synthesize context=_context;
- (long long)setVoiceType:(long long)arg1;
- (float)getAudioDataVolume:(long long)arg1;
- (int)getAudioDataDBVolume:(long long)arg1;
- (long long)SetAudioDataDBVolume:(long long)arg1 volume:(int)arg2;
- (long long)setAudioDataVolume:(long long)arg1 volume:(float)arg2;
- (struct QAVAudioFrameDesc)getAudioDataFormat:(long long)arg1;
- (long long)setAudioDataFormat:(long long)arg1 desc:(struct QAVAudioFrameDesc)arg2;
- (long long)unregisterAudioDataCallbackAll;
- (long long)unregisterAudioDataCallback:(long long)arg1;
- (long long)registerAudioDataCallback:(long long)arg1;
- (long long)getAudioCategory;
- (int)onAudioCallback:(id)arg1 type:(long long)arg2 raw:(struct AudioFrame *)arg3;
- (long long)setAudioDataEventDelegate:(id)arg1;
- (_Bool)enableLoopBack:(_Bool)arg1;
- (unsigned int)dynamicVolume;
- (unsigned int)volume;
- (void)handleRouteChange:(id)arg1;
- (void)onAudioInterruption:(id)arg1;
- (long long)outputMode;
- (void)setOutputMode:(long long)arg1;
- (void)dealloc;
- (long long)getSpeakerState;
- (long long)getMicState;
- (_Bool)enableMic:(_Bool)arg1;
- (_Bool)enableSpeaker:(_Bool)arg1;
- (long long)fillExternalAudioFrame:(id)arg1;
- (void)enableExternalAudioDataInput:(_Bool)arg1;
- (id)getQualityTips;
- (long long)changeAudioCategory:(long long)arg1;
- (void)resumeAudio;
- (void)pauseAudio;
- (struct AVAudioCtrlProxy *)getNativeObj;
- (id)initWithContext:(id)arg1;
- (void)detectCall;

@end
