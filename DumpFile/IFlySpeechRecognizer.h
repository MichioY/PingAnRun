//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IFlySpeechRecognizerDelegate.h"

@class IFlyMscRecognizer, IFlyStreamRecognizer, NSMutableArray, NSString;

@interface IFlySpeechRecognizer : NSObject <IFlySpeechRecognizerDelegate>
{
    _Bool _isListening;
    id <IFlySpeechRecognizerDelegate> _delegate;
    IFlyMscRecognizer *_mscer;
    IFlyStreamRecognizer *_streamMscer;
    NSMutableArray *_mscerQueue;
}

+ (id)sharedInstance;
+ (id)sharedOperationQueue;
@property(retain) NSMutableArray *mscerQueue; // @synthesize mscerQueue=_mscerQueue;
@property(retain) IFlyStreamRecognizer *streamMscer; // @synthesize streamMscer=_streamMscer;
@property(retain) IFlyMscRecognizer *mscer; // @synthesize mscer=_mscer;
@property(nonatomic) id <IFlySpeechRecognizerDelegate> delegate; // @synthesize delegate=_delegate;
- (int)buildGrammarCompletionHandler:(CDUnknownBlockType)arg1 grammarType:(id)arg2 grammarContent:(id)arg3;
- (void)onCancel;
- (void)onError:(id)arg1;
- (void)onResults:(id)arg1 isLast:(_Bool)arg2;
- (void)onVolumeChanged:(int)arg1;
- (void)onEndOfSpeech;
- (void)onBeginOfSpeech;
- (void)cancel;
- (void)stopListening;
- (_Bool)writeAudio:(id)arg1;
- (_Bool)recognizeStream;
- (_Bool)isStreamSource;
@property(readonly, nonatomic) _Bool isListening;
- (id)getParameter:(id)arg1;
- (_Bool)setParameter:(id)arg1 forKey:(id)arg2;
- (_Bool)startListening:(id)arg1 grammar:(id)arg2;
- (_Bool)runService;
- (void)startListeningThread;
- (_Bool)startListening;
- (void)dealloc;
- (_Bool)destroy;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
