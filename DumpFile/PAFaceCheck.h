//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "AVAudioPlayerDelegate.h"
#import "AVCaptureVideoDataOutputSampleBufferDelegate.h"
#import "AVSpeechSynthesizerDelegate.h"
#import "MGLivenessProtocolDelegate.h"
#import "PAFaceRequestDelegate.h"
#import "PAPromptDelegate.h"
#import "SendViewDelegate.h"
#import "UIAlertViewDelegate.h"

@class AVAudioPlayer, AVCaptureDeviceInput, AVCaptureSession, AVCaptureVideoDataOutput, AVCaptureVideoPreviewLayer, AVSpeechSynthesisVoice, AVSpeechSynthesizer, AVSpeechUtterance, MGLivenessDetectionFrame, MGLivenessDetector, NSMutableArray, NSString, NSTimer, PABottomView, PACircularRing, PAFaceRequest, PAPromptView, SendFailView, UIButton, UIImage, UIImageView, UILabel;

@interface PAFaceCheck : UIViewController <MGLivenessProtocolDelegate, AVCaptureVideoDataOutputSampleBufferDelegate, AVAudioPlayerDelegate, PAPromptDelegate, PAFaceRequestDelegate, SendViewDelegate, AVSpeechSynthesizerDelegate, UIAlertViewDelegate>
{
    long long _curStep;
    AVAudioPlayer *facePlayer;
    UIImageView *barImage;
    UILabel *barStep;
    PAPromptView *promptView;
    NSTimer *playerTimer;
    NSString *soundStr;
    SendFailView *sendView;
    UIImage *personImage;
    NSString *imageId;
    MGLivenessDetectionFrame *personImageDetection;
    PAFaceRequest *url1004;
    PAFaceRequest *url1005;
    NSTimer *lineTimer;
    NSString *type;
    PACircularRing *noFaceConterRing;
    long long _maxTime;
    long long _count;
    UIImageView *line;
    UIImageView *promptTitle;
    UIButton *skipBut;
    double thresholdValue;
    double fuzzyValue;
    UIImage *okImage;
    int timedelay;
    _Bool _starLiveness;
    _Bool _soundContor;
    _Bool _faceControl;
    _Bool _simplificationContor;
    _Bool _countDown;
    _Bool _isOk;
    _Bool _firstOk;
    _Bool _glassesSwitch;
    _Bool _advertisingSwitch;
    int _types;
    int _currentStep;
    id <PACheckDelegate> _delegate;
    AVCaptureSession *_session;
    AVCaptureVideoDataOutput *_output;
    AVCaptureDeviceInput *_videoInput;
    AVCaptureVideoPreviewLayer *_previewLayer;
    NSString *_cardId;
    MGLivenessDetector *_livenessDetector;
    PABottomView *_bottomView;
    NSMutableArray *_actionArray;
    NSString *_interfaceType;
    UILabel *_numLabel;
    UILabel *_advertising;
    NSTimer *_timerCoundDown;
    UIImageView *_rotationView;
    NSString *_advertisingStr;
    AVSpeechSynthesizer *_synthesizer;
    AVSpeechUtterance *_utterance;
    AVSpeechSynthesisVoice *_voiceType;
    double _brightness;
}

+ (void)setFaceEnvironment:(int)arg1 uuid:(id)arg2 appKey:(id)arg3 systemId:(id)arg4;
+ (void)setFaceEnvironmentWithDict:(id)arg1;
@property(nonatomic) int currentStep; // @synthesize currentStep=_currentStep;
@property(nonatomic) double brightness; // @synthesize brightness=_brightness;
@property(retain, nonatomic) AVSpeechSynthesisVoice *voiceType; // @synthesize voiceType=_voiceType;
@property(retain, nonatomic) AVSpeechUtterance *utterance; // @synthesize utterance=_utterance;
@property(retain, nonatomic) AVSpeechSynthesizer *synthesizer; // @synthesize synthesizer=_synthesizer;
@property(retain, nonatomic) NSString *advertisingStr; // @synthesize advertisingStr=_advertisingStr;
@property(retain, nonatomic) UIImageView *rotationView; // @synthesize rotationView=_rotationView;
@property(retain, nonatomic) NSTimer *timerCoundDown; // @synthesize timerCoundDown=_timerCoundDown;
@property(retain, nonatomic) UILabel *advertising; // @synthesize advertising=_advertising;
@property(retain, nonatomic) UILabel *numLabel; // @synthesize numLabel=_numLabel;
@property(nonatomic) _Bool advertisingSwitch; // @synthesize advertisingSwitch=_advertisingSwitch;
@property(nonatomic) _Bool glassesSwitch; // @synthesize glassesSwitch=_glassesSwitch;
@property(nonatomic) _Bool firstOk; // @synthesize firstOk=_firstOk;
@property(nonatomic) _Bool isOk; // @synthesize isOk=_isOk;
@property(nonatomic) _Bool countDown; // @synthesize countDown=_countDown;
@property(nonatomic) _Bool simplificationContor; // @synthesize simplificationContor=_simplificationContor;
@property(nonatomic) _Bool faceControl; // @synthesize faceControl=_faceControl;
@property(nonatomic) _Bool soundContor; // @synthesize soundContor=_soundContor;
@property(retain, nonatomic) NSString *interfaceType; // @synthesize interfaceType=_interfaceType;
@property(retain, nonatomic) NSMutableArray *actionArray; // @synthesize actionArray=_actionArray;
@property(retain, nonatomic) PABottomView *bottomView; // @synthesize bottomView=_bottomView;
@property(nonatomic) _Bool starLiveness; // @synthesize starLiveness=_starLiveness;
@property(nonatomic) int types; // @synthesize types=_types;
@property(retain, nonatomic) MGLivenessDetector *livenessDetector; // @synthesize livenessDetector=_livenessDetector;
@property(retain, nonatomic) NSString *cardId; // @synthesize cardId=_cardId;
@property(retain, nonatomic) AVCaptureVideoPreviewLayer *previewLayer; // @synthesize previewLayer=_previewLayer;
@property(retain, nonatomic) AVCaptureDeviceInput *videoInput; // @synthesize videoInput=_videoInput;
@property(retain, nonatomic) AVCaptureVideoDataOutput *output; // @synthesize output=_output;
@property(retain, nonatomic) AVCaptureSession *session; // @synthesize session=_session;
@property(nonatomic) __weak id <PACheckDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)image:(id)arg1 didFinishSavingWithError:(id)arg2 contextInfo:(void *)arg3;
- (void)saveImageToPhotos:(id)arg1;
- (void)dealloc;
- (_Bool)shouldAutorotate;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)sendViewClickedButtonAtIndex:(long long)arg1;
- (void)requestFinish:(id)arg1 error:(id)arg2 tag:(long long)arg3;
- (void)recheck;
- (void)checkFail:(int)arg1;
- (void)checkSuccess;
- (_Bool)qualityCheck;
- (int)onDetectionSuccess:(id)arg1;
- (void)onDetectionFailed:(int)arg1;
- (void)onFrameDetected:(id)arg1 andTimeout:(float)arg2;
- (void)captureOutput:(id)arg1 didOutputSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 fromConnection:(id)arg3;
- (void)audioPlayerEndInterruption:(id)arg1;
- (void)audioPlayerDidFinishPlaying:(id)arg1 successfully:(_Bool)arg2;
- (void)audioPlayerBeginInterruption:(id)arg1;
- (void)promptViewwillFinish;
- (void)initHardCode:(_Bool)arg1;
- (void)toggleCamera:(id)arg1;
- (id)backCamera;
- (id)frontCamera;
- (id)cameraWithPosition:(long long)arg1;
- (void)playerStop;
- (void)initAVSpeech;
- (void)initialSession;
- (void)backToAppAnimated:(_Bool)arg1;
- (void)restArray;
- (int)randActionType;
- (void)textToAudioWithStirng:(id)arg1;
- (void)playAudioFilePath:(id)arg1;
- (void)playSound;
- (void)playerWith:(int)arg1;
- (void)starAnimation:(int)arg1;
- (void)setUpCameraLayer;
- (void)startSession;
- (void)stopcheckFace;
- (void)starLivenessWithBuff;
- (void)startcheckFace;
- (void)promptViewFinish;
- (void)showSendIngView;
- (void)faceStartFinish;
- (void)createPAPromptView;
- (void)initFaceActionView;
- (void)lineAnimation;
- (void)createFacecheck;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)initBar;
- (id)image:(id)arg1 rotation:(long long)arg2;
- (void)comparedImage;
- (void)sendImage:(id)arg1;
- (void)timeChanges;
- (void)stopAnimations;
- (void)startAnimation;
- (void)createNoFaceContorTimeView:(int)arg1;
- (void)createTheBackButton;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithPAcheck:(int)arg1 cardId:(id)arg2 andTheInterfaceType:(id)arg3 andTheSoundContor:(_Bool)arg4 andTheFaceControls:(_Bool)arg5 andQualitySwitch:(_Bool)arg6 andTheCountdown:(_Bool)arg7 andTheSimplificationContor:(_Bool)arg8 andTheGlassesSwitch:(_Bool)arg9 andTheAdvertising:(id)arg10 delegate:(id)arg11;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

