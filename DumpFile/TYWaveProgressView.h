//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class TYWaterWaveView, UIColor, UIImageView, UILabel;

@interface TYWaveProgressView : UIView
{
    UIColor *_waveColor;
    TYWaterWaveView *_waterWaveView;
    UIImageView *_backgroundImageView;
    UILabel *_numberLabel;
    UILabel *_unitLabel;
    UILabel *_explainLabel;
    double _percent;
    struct UIEdgeInsets _waveViewMargin;
}

@property(nonatomic) struct UIEdgeInsets waveViewMargin; // @synthesize waveViewMargin=_waveViewMargin;
@property(nonatomic) double percent; // @synthesize percent=_percent;
@property(nonatomic) __weak UILabel *explainLabel; // @synthesize explainLabel=_explainLabel;
@property(nonatomic) __weak UILabel *unitLabel; // @synthesize unitLabel=_unitLabel;
@property(nonatomic) __weak UILabel *numberLabel; // @synthesize numberLabel=_numberLabel;
@property(nonatomic) __weak UIImageView *backgroundImageView; // @synthesize backgroundImageView=_backgroundImageView;
@property(nonatomic) __weak TYWaterWaveView *waterWaveView; // @synthesize waterWaveView=_waterWaveView;
@property(retain, nonatomic) UIColor *waveColor; // @synthesize waveColor=_waveColor;
- (void).cxx_destruct;
- (void)dealloc;
- (void)layoutSubviews;
- (void)setWaveGrowthSpeed:(double)arg1;
- (void)resetWave;
- (void)stopWave;
- (void)startWave;
- (void)addExplainLabel;
- (void)addUnitLabel;
- (void)addNumberlabel;
- (void)addWaterWaveView;
- (void)addBackgroudImageView;
- (void)setupView;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 andWaveColor:(id)arg2;

@end

