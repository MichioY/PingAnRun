//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class UIImageView, UILabel, UIView;

@interface PARSMyHealthCell : UITableViewCell
{
    UIImageView *_bGImageView;
    UIImageView *_bannerImageView;
    UILabel *_myLabel;
    UIView *_containerView;
    UILabel *_todayStepLabel;
    UILabel *_todayStepNumLabel;
    UILabel *_stepUploadLabel;
}

@property(nonatomic) __weak UILabel *stepUploadLabel; // @synthesize stepUploadLabel=_stepUploadLabel;
@property(nonatomic) __weak UILabel *todayStepNumLabel; // @synthesize todayStepNumLabel=_todayStepNumLabel;
@property(nonatomic) __weak UILabel *todayStepLabel; // @synthesize todayStepLabel=_todayStepLabel;
@property(nonatomic) __weak UIView *containerView; // @synthesize containerView=_containerView;
@property(nonatomic) __weak UILabel *myLabel; // @synthesize myLabel=_myLabel;
@property(nonatomic) __weak UIImageView *bannerImageView; // @synthesize bannerImageView=_bannerImageView;
@property(nonatomic) __weak UIImageView *bGImageView; // @synthesize bGImageView=_bGImageView;
- (void).cxx_destruct;
- (void)hideSteps;
- (void)showStepsWithToday:(long long)arg1 uploaded:(id)arg2;
- (void)updateWithZoneItemInfo:(id)arg1;
- (void)setupUI;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
