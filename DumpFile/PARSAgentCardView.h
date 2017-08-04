//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "PARSRefreshViewCtrDelegate.h"

@class NSString, PARSCustomerAgentInfo, UIButton, UIImageView, UILabel;

@interface PARSAgentCardView : UIView <PARSRefreshViewCtrDelegate>
{
    UIImageView *_headImageView;
    UIView *_contentView;
    UILabel *_descriptionLabel;
    UILabel *_nameLabel;
    UILabel *_numberLabel;
    UILabel *_mobileLabel;
    UIButton *_detailBtn;
    NSString *_tips;
    PARSCustomerAgentInfo *_agentInfo;
    CDUnknownBlockType _handler;
    UILabel *_blankLabel;
}

@property(retain, nonatomic) UILabel *blankLabel; // @synthesize blankLabel=_blankLabel;
@property(copy, nonatomic) CDUnknownBlockType handler; // @synthesize handler=_handler;
@property(copy, nonatomic) PARSCustomerAgentInfo *agentInfo; // @synthesize agentInfo=_agentInfo;
@property(copy, nonatomic) NSString *tips; // @synthesize tips=_tips;
@property(retain, nonatomic) UIButton *detailBtn; // @synthesize detailBtn=_detailBtn;
@property(retain, nonatomic) UILabel *mobileLabel; // @synthesize mobileLabel=_mobileLabel;
@property(retain, nonatomic) UILabel *numberLabel; // @synthesize numberLabel=_numberLabel;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) UILabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) UIImageView *headImageView; // @synthesize headImageView=_headImageView;
- (void).cxx_destruct;
- (void)detailButtonClicked:(id)arg1;
- (void)setuSubviews;
- (id)baseLabel;
- (id)getResignAgentTitleWithName:(id)arg1;
- (void)updateAgentCartInfo:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 agentInfo:(id)arg2 title:(id)arg3 handler:(CDUnknownBlockType)arg4;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
