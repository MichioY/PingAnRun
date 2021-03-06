//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIScrollView.h"

#import "AdrBreathViewDelegate.h"
#import "AdrMessageRedPointViewDelegate.h"
#import "UIGestureRecognizerDelegate.h"
#import "UIScrollViewDelegate.h"

@class AdrAnimationManager, AdrBreathView, AdrCenterPageGuideAnimationViewContainer, AdrLeftView, AdrPluginListView, NSObject<OS_dispatch_group>, NSString, UITapGestureRecognizer;

@interface AdrMainScrollView : UIScrollView <AdrBreathViewDelegate, UIGestureRecognizerDelegate, UIScrollViewDelegate, AdrMessageRedPointViewDelegate>
{
    double _beginOffsetX;
    struct CGRect _originalFrame;
    AdrAnimationManager *_animationManager;
    _Bool _isScrolling;
    _Bool _isShowBreathView;
    _Bool _isShowLeftView;
    _Bool _isBannerShowing;
    _Bool _isDeviceMoveBack;
    int _scrollDirection;
    AdrLeftView *_leftView;
    AdrPluginListView *_pluginListView;
    AdrBreathView *_breathView;
    UITapGestureRecognizer *_tapGestureRecognizer;
    NSObject<OS_dispatch_group> *_msgListDispatchGroup;
    AdrCenterPageGuideAnimationViewContainer *_centerPageGuideAnimationViewContainer;
}

@property(retain, nonatomic) AdrCenterPageGuideAnimationViewContainer *centerPageGuideAnimationViewContainer; // @synthesize centerPageGuideAnimationViewContainer=_centerPageGuideAnimationViewContainer;
@property(nonatomic) _Bool isDeviceMoveBack; // @synthesize isDeviceMoveBack=_isDeviceMoveBack;
@property(retain, nonatomic) NSObject<OS_dispatch_group> *msgListDispatchGroup; // @synthesize msgListDispatchGroup=_msgListDispatchGroup;
@property(retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer; // @synthesize tapGestureRecognizer=_tapGestureRecognizer;
@property(nonatomic) int scrollDirection; // @synthesize scrollDirection=_scrollDirection;
@property(nonatomic) _Bool isBannerShowing; // @synthesize isBannerShowing=_isBannerShowing;
@property(nonatomic) _Bool isShowLeftView; // @synthesize isShowLeftView=_isShowLeftView;
@property(nonatomic) _Bool isShowBreathView; // @synthesize isShowBreathView=_isShowBreathView;
@property(nonatomic) _Bool isScrolling; // @synthesize isScrolling=_isScrolling;
@property(retain, nonatomic) AdrBreathView *breathView; // @synthesize breathView=_breathView;
@property(retain, nonatomic) AdrPluginListView *pluginListView; // @synthesize pluginListView=_pluginListView;
@property(retain, nonatomic) AdrLeftView *leftView; // @synthesize leftView=_leftView;
- (void).cxx_destruct;
- (void)dealloc;
- (void)afterHideBreathView;
- (void)hideBreathViewAnimation;
- (void)hideBreathView;
- (void)showBreathViewAnimation;
- (void)showBreathView;
- (void)clickAnimationDown:(id)arg1 withMessageType:(long long)arg2;
- (void)drawBreathView;
- (_Bool)touchesShouldCancelInContentView:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (_Bool)isRightScrollOnMainScreen;
- (_Bool)isMainScrollOnMainScreen;
- (void)doAnimationForLeftView;
- (void)resetScrollDirection;
- (void)redPointClick;
- (void)configAnimationManager;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (_Bool)shouldLoseClickAtPointInside:(struct CGPoint)arg1;
- (_Bool)couldClickAtPoint:(struct CGPoint)arg1;
- (_Bool)couldClickAtpluginListViewAtPoint:(struct CGPoint)arg1;
- (_Bool)couldClickAtMiddleViewAtPoint:(struct CGPoint)arg1;
- (_Bool)couldClickAtView:(id)arg1 viewFrameY:(double)arg2 atPoint:(struct CGPoint)arg3;
- (unsigned long long)viewTypeOnClicked;
- (void)createBannerView;
- (_Bool)checkBannerShouldDisplay:(id)arg1;
- (void)showCenterPageGuideAnimationOrBannerView;
- (void)webviewControllerDisapper:(id)arg1;
- (void)showNewPluginGuideAnimation;
- (void)clearCenterPageGuideAnimationView;
- (void)registerTipsNewMessageGuideNotification;
- (void)showTipsNewMessageGuideAnimation:(id)arg1;
- (void)createCenterGuideAnimationViewContainerWithTypes:(id)arg1;
- (void)showCenterPageGuideAnimation:(id)arg1;
- (void)showPluginListView;
- (void)initScreenViews;
- (void)scrollToAnyDoorHomePage;
- (void)mainScrollViewTapped;
- (void)initOriginalAndScollSetting;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

