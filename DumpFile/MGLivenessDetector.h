//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MGLivenessDetectionFrame, NSDate, NSMutableArray, NSMutableString;

@interface MGLivenessDetector : NSObject
{
    struct _00372 *_sessionManager;
    unsigned long long _actionState;
    int _curDetectionType;
    struct dispatch_queue_s *_queue;
    _Bool _failed;
    _Bool _tracking;
    NSMutableArray *_validFrame;
    NSDate *_curStepStartTime;
    MGLivenessDetectionFrame *_bestFrame;
    long long _sessionHash;
    long long _taskQueueSize;
    NSObject *_taskMutex;
    struct _DetectorConfig _config;
    char *grayRawData;
    NSMutableString *algorithmLog;
    id <MGLivenessProtocolDelegate> delegate;
}

+ (id)getVersion;
+ (id)detectorOfOptions:(id)arg1 andDispatchQueue:(struct dispatch_queue_s *)arg2;
+ (id)detectorOfOptions:(id)arg1;
@property(nonatomic) id <MGLivenessProtocolDelegate> delegate; // @synthesize delegate;
- (id).cxx_construct;
- (id)getAlgorithmLog;
- (id)getFaceIDData;
- (id)getFaceIDDataWithMaxImageSize:(int)arg1;
- (id)getValidFrame;
- (int)getCurDetectType;
- (void)resetAction;
- (void)reset;
- (void)clearInternalData;
- (void)processImage:(id)arg1 hash:(long long)arg2;
- (void)taskFailed:(int)arg1;
- (void)appendAlgorithmLog:(id)arg1;
- (void)changeDetectionType:(int)arg1;
- (unsigned long long)getActionState:(int)arg1;
- (_Bool)detectWithImage:(id)arg1;
- (_Bool)detectWithBuffer:(struct opaqueCMSampleBuffer *)arg1 orientation:(long long)arg2;
- (id)imageFromSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 orientation:(long long)arg2;
- (void)setOptions:(id)arg1;
- (void)dealloc;
- (id)initWithQueue:(struct dispatch_queue_s *)arg1 andModelData:(id)arg2;

@end

