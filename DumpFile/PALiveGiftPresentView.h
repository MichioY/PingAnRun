//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSString, NSTimer, PALiveGiftAnimModel, PALiveGiftShakeLabel, UIImageView, UILabel;

@interface PALiveGiftPresentView : UIView
{
    _Bool _finished;
    NSString *_userID;
    PALiveGiftAnimModel *_model;
    UIView *_bgView;
    UIImageView *_giftImageView;
    UILabel *_nameLabel;
    UILabel *_giftLabel;
    PALiveGiftShakeLabel *_skLabel;
    long long _animCount;
    NSTimer *_delayTimer;
    UIImageView *_bgImageView;
    NSTimer *_timer;
    CDUnknownBlockType _completeBlock;
}

@property(copy, nonatomic) CDUnknownBlockType completeBlock; // @synthesize completeBlock=_completeBlock;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) UIImageView *bgImageView; // @synthesize bgImageView=_bgImageView;
@property(retain, nonatomic) NSTimer *delayTimer; // @synthesize delayTimer=_delayTimer;
@property(nonatomic, getter=isFinished) _Bool finished; // @synthesize finished=_finished;
@property(nonatomic) long long animCount; // @synthesize animCount=_animCount;
@property(retain, nonatomic) PALiveGiftShakeLabel *skLabel; // @synthesize skLabel=_skLabel;
@property(retain, nonatomic) UILabel *giftLabel; // @synthesize giftLabel=_giftLabel;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) UIImageView *giftImageView; // @synthesize giftImageView=_giftImageView;
@property(retain, nonatomic) UIView *bgView; // @synthesize bgView=_bgView;
@property(retain, nonatomic) PALiveGiftAnimModel *model; // @synthesize model=_model;
@property(retain, nonatomic) NSString *userID; // @synthesize userID=_userID;
- (void).cxx_destruct;
- (void)setUI;
- (void)layoutSubviews;
- (void)dealloc;
- (id)init;
- (void)reset;
- (void)hidePresendView;
- (void)animateNumberLabel;
- (void)animateWithCompleteBlock:(CDUnknownBlockType)arg1;

@end
