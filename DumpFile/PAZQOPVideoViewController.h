//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

@class NSString, UIAlertView, UILabel, UIView;

@interface PAZQOPVideoViewController : UIViewController
{
    UIView *_myView;
    UIAlertView *_alert;
    _Bool isAlert;
    NSString *alertStr;
    _Bool _isVideo;
    int _localvideoviewerid;
    int _remotevideoviewerid;
    CDUnknownBlockType _returnBlock;
    UIView *_locakBackground;
    UIView *_remoteBackground;
    UILabel *_queuedLabel;
}

@property(retain, nonatomic) UILabel *queuedLabel; // @synthesize queuedLabel=_queuedLabel;
@property(nonatomic) int remotevideoviewerid; // @synthesize remotevideoviewerid=_remotevideoviewerid;
@property(nonatomic) int localvideoviewerid; // @synthesize localvideoviewerid=_localvideoviewerid;
@property(retain, nonatomic) UIView *remoteBackground; // @synthesize remoteBackground=_remoteBackground;
@property(retain, nonatomic) UIView *locakBackground; // @synthesize locakBackground=_locakBackground;
@property(copy, nonatomic) CDUnknownBlockType returnBlock; // @synthesize returnBlock=_returnBlock;
@property(nonatomic) _Bool isVideo; // @synthesize isVideo=_isVideo;
- (void).cxx_destruct;
- (id)getCompareQueuePosition:(id)arg1 newNum:(id)arg2;
- (void)hungupAction:(id)arg1;
- (void)dismissViewController;
- (void)loadDataVideo;
- (void)setStartVideoView;
- (void)queuedLabelHidden;
- (void)setQueuedLabelText:(id)arg1;
- (void)getQueuedLabelView;
- (void)getHangupBtnView;
- (void)addNavigationView;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (id)init;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;

@end

