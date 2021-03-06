//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class PARSMyRedPacketListInfo, UIButton, UIImageView, UILabel, UIView;

@interface PARSMyRedPacketCell : UITableViewCell
{
    long long _type;
    PARSMyRedPacketListInfo *_redPacketListInfo;
    UIView *_mainView;
    UIImageView *_headImageView;
    UILabel *_nameLabel;
    UILabel *_timeLabel;
    UILabel *_priceLabel;
    UIButton *_stateButton;
}

@property(retain, nonatomic) UIButton *stateButton; // @synthesize stateButton=_stateButton;
@property(retain, nonatomic) UILabel *priceLabel; // @synthesize priceLabel=_priceLabel;
@property(retain, nonatomic) UILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) UIImageView *headImageView; // @synthesize headImageView=_headImageView;
@property(retain, nonatomic) UIView *mainView; // @synthesize mainView=_mainView;
@property(retain, nonatomic) PARSMyRedPacketListInfo *redPacketListInfo; // @synthesize redPacketListInfo=_redPacketListInfo;
@property(nonatomic) long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (void)reloadDataWithSentType;
- (void)reloadStateBtn;
- (void)reloadDataWithReceiveType;
- (void)reloadData;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)stateButtonAction:(id)arg1;
- (void)setConstraints;
- (void)initUI;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

