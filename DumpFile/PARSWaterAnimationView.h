//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "PARSRefreshAnimationViewProtocol.h"
#import "UICollisionBehaviorDelegate.h"

@class CADisplayLink, CAShapeLayer, NSString, UICollisionBehavior, UIColor, UIDynamicAnimator, UIDynamicItemBehavior, UIGravityBehavior, UIImageView;

@interface PARSWaterAnimationView : UIView <UICollisionBehaviorDelegate, PARSRefreshAnimationViewProtocol>
{
    UIImageView *_refreshingImageView;
    UIColor *_waterColor;
    long long _waterState;
    CAShapeLayer *_topWaterLayer;
    CAShapeLayer *_bottomWaterLayer;
    CAShapeLayer *_waveLayer;
    CAShapeLayer *_refreshingImageViewMaskLayer;
    UIView *_bottomWaterView;
    UIView *_waterWavingView;
    double _maxDragDistance;
    double _topWaterPositionY;
    UIDynamicAnimator *_bottomWaterAnimator;
    UIGravityBehavior *_bottomGravityBehavior;
    UICollisionBehavior *_bottomCollisionBehavior;
    UIDynamicItemBehavior *_bottomWaterDropBehavior;
    double _bottomWatterPositionY;
    double _bottomWatterAngle;
    double _bottomWaterMaxAngle;
    double _bottomWaterAngleChange;
    CADisplayLink *_bottomWaterDivergenceDisplayLink;
    double _waveUpSpeed;
    double _waterCycle;
    double _offsetX;
    double _currentWavePositionY;
    double _percent;
    CADisplayLink *_waveDisplayLink;
    CDUnknownBlockType _refreshCompleteBlock;
}

@property(copy, nonatomic) CDUnknownBlockType refreshCompleteBlock; // @synthesize refreshCompleteBlock=_refreshCompleteBlock;
@property(retain, nonatomic) CADisplayLink *waveDisplayLink; // @synthesize waveDisplayLink=_waveDisplayLink;
@property(nonatomic) double percent; // @synthesize percent=_percent;
@property(nonatomic) double currentWavePositionY; // @synthesize currentWavePositionY=_currentWavePositionY;
@property(nonatomic) double offsetX; // @synthesize offsetX=_offsetX;
@property(nonatomic) double waterCycle; // @synthesize waterCycle=_waterCycle;
@property(nonatomic) double waveUpSpeed; // @synthesize waveUpSpeed=_waveUpSpeed;
@property(retain, nonatomic) CADisplayLink *bottomWaterDivergenceDisplayLink; // @synthesize bottomWaterDivergenceDisplayLink=_bottomWaterDivergenceDisplayLink;
@property(nonatomic) double bottomWaterAngleChange; // @synthesize bottomWaterAngleChange=_bottomWaterAngleChange;
@property(nonatomic) double bottomWaterMaxAngle; // @synthesize bottomWaterMaxAngle=_bottomWaterMaxAngle;
@property(nonatomic) double bottomWatterAngle; // @synthesize bottomWatterAngle=_bottomWatterAngle;
@property(nonatomic) double bottomWatterPositionY; // @synthesize bottomWatterPositionY=_bottomWatterPositionY;
@property(retain, nonatomic) UIDynamicItemBehavior *bottomWaterDropBehavior; // @synthesize bottomWaterDropBehavior=_bottomWaterDropBehavior;
@property(retain, nonatomic) UICollisionBehavior *bottomCollisionBehavior; // @synthesize bottomCollisionBehavior=_bottomCollisionBehavior;
@property(retain, nonatomic) UIGravityBehavior *bottomGravityBehavior; // @synthesize bottomGravityBehavior=_bottomGravityBehavior;
@property(retain, nonatomic) UIDynamicAnimator *bottomWaterAnimator; // @synthesize bottomWaterAnimator=_bottomWaterAnimator;
@property(nonatomic) double topWaterPositionY; // @synthesize topWaterPositionY=_topWaterPositionY;
@property(nonatomic) double maxDragDistance; // @synthesize maxDragDistance=_maxDragDistance;
@property(retain, nonatomic) UIView *waterWavingView; // @synthesize waterWavingView=_waterWavingView;
@property(retain, nonatomic) UIView *bottomWaterView; // @synthesize bottomWaterView=_bottomWaterView;
@property(retain, nonatomic) CAShapeLayer *refreshingImageViewMaskLayer; // @synthesize refreshingImageViewMaskLayer=_refreshingImageViewMaskLayer;
@property(retain, nonatomic) CAShapeLayer *waveLayer; // @synthesize waveLayer=_waveLayer;
@property(retain, nonatomic) CAShapeLayer *bottomWaterLayer; // @synthesize bottomWaterLayer=_bottomWaterLayer;
@property(retain, nonatomic) CAShapeLayer *topWaterLayer; // @synthesize topWaterLayer=_topWaterLayer;
@property(nonatomic) long long waterState; // @synthesize waterState=_waterState;
@property(retain, nonatomic) UIColor *waterColor; // @synthesize waterColor=_waterColor;
@property(retain, nonatomic) UIImageView *refreshingImageView; // @synthesize refreshingImageView=_refreshingImageView;
- (void).cxx_destruct;
- (void)setupDynamic;
- (void)reset;
- (void)cancelRefreshing;
- (void)endRefreshing:(CDUnknownBlockType)arg1;
- (void)beginRefreshing;
- (void)updateFrameWithDragPercent:(double)arg1;
- (void)collisionBehavior:(id)arg1 endedContactForItem:(id)arg2 withBoundaryIdentifier:(id)arg3;
- (void)waveUp:(id)arg1;
- (void)waterStartWaveUp;
- (void)updateBottomWaterDisperseShape;
- (void)bottomWaterDisperse:(id)arg1;
- (void)bottomWaterOnCollision;
- (void)bottomWaterDropDown;
- (void)topWaterRollBack:(id)arg1;
- (void)breakWater;
- (void)updateShapeWithDragDistance:(double)arg1;
- (void)updateShapeWithDragPercent:(double)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
