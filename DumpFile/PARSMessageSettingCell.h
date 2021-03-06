//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class PARSMessageCenterInfo, UILabel, UISwitch;

@interface PARSMessageSettingCell : UITableViewCell
{
    id <PARSMessageSettingCellDelegate> _delegate;
    PARSMessageCenterInfo *_centerInfo;
    UILabel *_typeLabel;
    UISwitch *_switchBtn;
}

@property(retain, nonatomic) UISwitch *switchBtn; // @synthesize switchBtn=_switchBtn;
@property(retain, nonatomic) UILabel *typeLabel; // @synthesize typeLabel=_typeLabel;
@property(retain, nonatomic) PARSMessageCenterInfo *centerInfo; // @synthesize centerInfo=_centerInfo;
@property(nonatomic) __weak id <PARSMessageSettingCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)switchBtnStateChange:(id)arg1;
- (void)updateWithCenterInfo:(id)arg1;
- (void)setupSubViews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

