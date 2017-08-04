//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class PARSRedPacketRunInfo, UIButton, UILabel;

@interface PARSRedPacketRunTableViewCell : UITableViewCell
{
    PARSRedPacketRunInfo *_redPacketRunInfo;
    UILabel *_prizeLable;
    UILabel *_resultLable;
    UIButton *_receiveButton;
    UIButton *_unreceiveButton;
}

+ (id)cellWithTableView:(id)arg1;
@property(retain, nonatomic) UIButton *unreceiveButton; // @synthesize unreceiveButton=_unreceiveButton;
@property(retain, nonatomic) UIButton *receiveButton; // @synthesize receiveButton=_receiveButton;
@property(retain, nonatomic) UILabel *resultLable; // @synthesize resultLable=_resultLable;
@property(retain, nonatomic) UILabel *prizeLable; // @synthesize prizeLable=_prizeLable;
@property(retain, nonatomic) PARSRedPacketRunInfo *redPacketRunInfo; // @synthesize redPacketRunInfo=_redPacketRunInfo;
- (void).cxx_destruct;
- (void)updateReceiveButtonStatue;
- (void)receivePrize:(id)arg1;
- (void)setupUI;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
