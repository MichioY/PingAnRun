//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class PARSPrizeDetailHeadContainerView, PARSPrizeModel, UILabel;

@interface PARSPrizeDetailHeaderView : UIView
{
    PARSPrizeModel *_prizeModel;
    PARSPrizeDetailHeadContainerView *_containerView;
    UILabel *_headLabel;
}

@property(nonatomic) __weak UILabel *headLabel; // @synthesize headLabel=_headLabel;
@property(nonatomic) __weak PARSPrizeDetailHeadContainerView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) PARSPrizeModel *prizeModel; // @synthesize prizeModel=_prizeModel;
- (void).cxx_destruct;
- (void)setupUI;
- (id)initWithFrame:(struct CGRect)arg1;

@end

