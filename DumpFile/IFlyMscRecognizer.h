//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSOperation.h"

#import "IFlyPcmRecorderDelegate.h"
#import "ISREngineDelegate.h"

@class IFlyPcmRecorder, ISREngine, NSMutableArray, NSString;

@interface IFlyMscRecognizer : NSOperation <ISREngineDelegate, IFlyPcmRecorderDelegate>
{
    ISREngine *_isrEngine;
    IFlyPcmRecorder *_isrRecorder;
    int _error;
    int _index;
    id <IFlySpeechRecognizerDelegate> _delegate;
    long long _audioCount;
    long long _resultCount;
    _Bool _isNeedExit;
    int _state;
    NSString *_params;
    NSString *_grammarId;
    NSMutableArray *_queue;
}

+ (void)setTimeout:(unsigned long long)arg1;
@property(nonatomic) NSMutableArray *queue; // @synthesize queue=_queue;
@property(nonatomic) int state; // @synthesize state=_state;
@property(copy, nonatomic) NSString *grammarId; // @synthesize grammarId=_grammarId;
@property(copy, nonatomic) NSString *params; // @synthesize params=_params;
- (int)buildGrammar:(CDUnknownBlockType)arg1 grammarType:(id)arg2 grammarContent:(id)arg3;
- (void)onGetRecordPower:(int)arg1;
- (void)onRecorderError:(id)arg1 theError:(int)arg2;
- (void)onReturnBuffer:(const void *)arg1 bufferSize:(int)arg2;
- (void)onEnd:(int)arg1;
- (void)onResult:(id)arg1 isLast:(_Bool)arg2;
- (void)onStop;
- (void)setSessionInfo;
- (void)savePcmFile;
- (void)writeEndData;
- (void)writeWaveData;
- (void)beginSession;
- (void)dealloc;
- (void)main;
- (_Bool)stopRecordAndWaitResult;
- (_Bool)startRecord;
- (void)setDelegate:(id)arg1;
- (id)init:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

