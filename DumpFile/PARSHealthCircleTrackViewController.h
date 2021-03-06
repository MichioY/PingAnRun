//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PARSBaseViewController.h"

#import "PARSHealthCircleTrackPanel.h"

@class AVSpeechSynthesizer, MKMapView, NSString, PARSActivityDetailModel, PARSHealthCircleMapViewController, PARSHealthCircleTrackPanel, PARSTrackPedometerHandler, UIButton;

@interface PARSHealthCircleTrackViewController : PARSBaseViewController <PARSHealthCircleTrackPanel>
{
    _Bool _disableSpeech;
    _Bool _matchCompletionSpeeched;
    MKMapView *_mapView;
    UIButton *_returnButton;
    PARSHealthCircleMapViewController *_mapController;
    PARSHealthCircleTrackPanel *_trackPanel;
    PARSTrackPedometerHandler *_pedometerHandler;
    PARSActivityDetailModel *_cachedActivityInfo;
    AVSpeechSynthesizer *_speechSynthesizer;
    unsigned long long _walkedKilometer;
}

+ (id)trackViewControllerForCircleWithCircleInfo:(id)arg1;
@property(nonatomic) unsigned long long walkedKilometer; // @synthesize walkedKilometer=_walkedKilometer;
@property(nonatomic) _Bool matchCompletionSpeeched; // @synthesize matchCompletionSpeeched=_matchCompletionSpeeched;
@property(nonatomic) _Bool disableSpeech; // @synthesize disableSpeech=_disableSpeech;
@property(retain, nonatomic) AVSpeechSynthesizer *speechSynthesizer; // @synthesize speechSynthesizer=_speechSynthesizer;
@property(retain, nonatomic) PARSActivityDetailModel *cachedActivityInfo; // @synthesize cachedActivityInfo=_cachedActivityInfo;
@property(retain, nonatomic) PARSTrackPedometerHandler *pedometerHandler; // @synthesize pedometerHandler=_pedometerHandler;
@property(retain, nonatomic) PARSHealthCircleTrackPanel *trackPanel; // @synthesize trackPanel=_trackPanel;
@property(retain, nonatomic) PARSHealthCircleMapViewController *mapController; // @synthesize mapController=_mapController;
@property(retain, nonatomic) UIButton *returnButton; // @synthesize returnButton=_returnButton;
@property(retain, nonatomic) MKMapView *mapView; // @synthesize mapView=_mapView;
- (void).cxx_destruct;
- (void)handleEndTrackAction:(_Bool)arg1;
- (void)panelPerformAction:(unsigned long long)arg1;
- (_Bool)panelShouldPerformAction:(unsigned long long)arg1;
- (void)panelEndScale;
- (void)panelScaling:(double)arg1;
- (void)reset;
- (_Bool)isBusinessEnableTracking;
- (_Bool)isGPSEnableTracking;
- (void)userDidEndTrackingRecords:(id)arg1 shouldDismiss:(_Bool)arg2;
- (void)showUnqualifiedConfirm:(_Bool)arg1;
- (void)showStopTrackingConfirm:(_Bool)arg1;
- (void)returnBack;
- (void)popBack:(id)arg1;
- (void)speechWithText:(id)arg1;
- (id)getTimeUsedTextWithDuration:(double)arg1;
- (void)handleWalkingInfo:(id)arg1;
- (void)buildSubviews;
- (void)viewDidLoad;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

