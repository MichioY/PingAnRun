//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIControl.h"

@class NSTimer, PARSWaterAnimationView, UIPanGestureRecognizer, UIScrollView;

@interface PARSRefreshControl : UIControl
{
    _Bool _isRefreshing;
    _Bool _finishRefreshing;
    id <PARSRefreshAnimationViewProtocol> _animationView;
    UIScrollView *_scrollView;
    PARSWaterAnimationView *_waterAnimationView;
    double _originTopInset;
    NSTimer *_timeoutTimer;
    UIPanGestureRecognizer *_panGestureRecognizer;
}

@property(retain, nonatomic) UIPanGestureRecognizer *panGestureRecognizer; // @synthesize panGestureRecognizer=_panGestureRecognizer;
@property(retain, nonatomic) NSTimer *timeoutTimer; // @synthesize timeoutTimer=_timeoutTimer;
@property(nonatomic) double originTopInset; // @synthesize originTopInset=_originTopInset;
@property(retain, nonatomic) PARSWaterAnimationView *waterAnimationView; // @synthesize waterAnimationView=_waterAnimationView;
@property(nonatomic) _Bool finishRefreshing; // @synthesize finishRefreshing=_finishRefreshing;
@property(nonatomic) __weak UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(nonatomic) _Bool isRefreshing; // @synthesize isRefreshing=_isRefreshing;
@property(retain, nonatomic) id <PARSRefreshAnimationViewProtocol> animationView; // @synthesize animationView=_animationView;
- (void).cxx_destruct;
- (void)endRefreshing;
- (void)beginRefreshing;
- (void)reset;
- (void)recover;
- (void)refreshTimeout;
- (void)startRefreshAnimation;
- (void)removeObservers;
- (void)addObservers;
- (void)scrollViewContentOffsetChange:(id)arg1;
- (void)scrollViewPanStateChange:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;
- (void)didMoveToSuperview;
- (void)willMoveToSuperview:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
