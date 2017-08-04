//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PARSCreateRedPacketViewController.h"

@class PARSRPGroupInfo, UILabel, UITextField;

@interface PARSCreateGroupRedPacketViewController : PARSCreateRedPacketViewController
{
    PARSRPGroupInfo *_groupInfo;
    unsigned long long _redPacketType;
    UITextField *_rpCountTF;
    UITextField *_rpSumTF;
    UITextField *_rpAverageSumTF;
    UILabel *_redPacketTips;
}

@property(retain, nonatomic) UILabel *redPacketTips; // @synthesize redPacketTips=_redPacketTips;
@property(retain, nonatomic) UITextField *rpAverageSumTF; // @synthesize rpAverageSumTF=_rpAverageSumTF;
@property(retain, nonatomic) UITextField *rpSumTF; // @synthesize rpSumTF=_rpSumTF;
@property(retain, nonatomic) UITextField *rpCountTF; // @synthesize rpCountTF=_rpCountTF;
@property(nonatomic) unsigned long long redPacketType; // @synthesize redPacketType=_redPacketType;
@property(retain, nonatomic) PARSRPGroupInfo *groupInfo; // @synthesize groupInfo=_groupInfo;
- (void).cxx_destruct;
- (void)textFieldDidBeginEditing:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)changeRedPacketType:(id)arg1;
- (id)createChangeRedPacketTypeButtonWithFrame:(struct CGRect)arg1;
- (long long)getMemberCount;
- (id)getInputInfo;
- (_Bool)checkBeforeEnableCreateBtnWithMoney:(double)arg1;
- (_Bool)checkBeforeSend;
- (id)getInputContentView;
- (void)viewDidLoad;
- (id)initWithGroupInfo:(id)arg1 result:(CDUnknownBlockType)arg2;
- (void)dealloc;

@end
