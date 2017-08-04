//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PARSBaseViewController.h"

@class NSTimer, PARSSplashAdvertInfo, UIButton, UIImageView, UIView;

@interface PARSSplashAdvertViewController : PARSBaseViewController
{
    _Bool _hasEnterAdvertDetail;
    CDUnknownBlockType _completion;
    UIView *_contentView;
    UIButton *_countButton;
    NSTimer *_countTimer;
    long long _count;
    UIImageView *_advertImageView;
    PARSSplashAdvertInfo *_splashAdvertInfo;
}

@property(nonatomic) _Bool hasEnterAdvertDetail; // @synthesize hasEnterAdvertDetail=_hasEnterAdvertDetail;
@property(retain, nonatomic) PARSSplashAdvertInfo *splashAdvertInfo; // @synthesize splashAdvertInfo=_splashAdvertInfo;
@property(retain, nonatomic) UIImageView *advertImageView; // @synthesize advertImageView=_advertImageView;
@property(nonatomic) long long count; // @synthesize count=_count;
@property(retain, nonatomic) NSTimer *countTimer; // @synthesize countTimer=_countTimer;
@property(retain, nonatomic) UIButton *countButton; // @synthesize countButton=_countButton;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
- (void).cxx_destruct;
- (void)enterAdvertDetail;
- (void)skip:(id)arg1;
- (void)countMinus;
- (_Bool)shouldHideNavigationBar;
- (id)defaultLaunchImage;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidLoad;

@end
