//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSString, PARSRedPacketDetailInfo, UIButton, UIImageView, UILabel;

@interface PARSRedPacketAlertView : UIView
{
    id <PARSRedPacketAlertDelegate> _delegate;
    UIImageView *_contentView;
    UIImageView *_headImageView;
    UILabel *_nicknameLabel;
    UILabel *_titleLabel;
    UIButton *_openButton;
    UILabel *_validTimeLabel;
    UILabel *_detailLabel;
    UIButton *_checkLogButton;
    UIButton *_dismissButton;
    long long _redPacketAlertType;
    PARSRedPacketDetailInfo *_detailInfo;
    NSString *_groupID;
    NSString *_curUserGroupNickName;
}

+ (void)showRedPacketWithDelegate:(id)arg1 type:(long long)arg2 groupID:(id)arg3 currentUserName:(id)arg4 detailInfo:(id)arg5;
@property(copy, nonatomic) NSString *curUserGroupNickName; // @synthesize curUserGroupNickName=_curUserGroupNickName;
@property(copy, nonatomic) NSString *groupID; // @synthesize groupID=_groupID;
@property(retain, nonatomic) PARSRedPacketDetailInfo *detailInfo; // @synthesize detailInfo=_detailInfo;
@property(nonatomic) long long redPacketAlertType; // @synthesize redPacketAlertType=_redPacketAlertType;
@property(retain, nonatomic) UIButton *dismissButton; // @synthesize dismissButton=_dismissButton;
@property(retain, nonatomic) UIButton *checkLogButton; // @synthesize checkLogButton=_checkLogButton;
@property(retain, nonatomic) UILabel *detailLabel; // @synthesize detailLabel=_detailLabel;
@property(retain, nonatomic) UILabel *validTimeLabel; // @synthesize validTimeLabel=_validTimeLabel;
@property(retain, nonatomic) UIButton *openButton; // @synthesize openButton=_openButton;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UILabel *nicknameLabel; // @synthesize nicknameLabel=_nicknameLabel;
@property(retain, nonatomic) UIImageView *headImageView; // @synthesize headImageView=_headImageView;
@property(retain, nonatomic) UIImageView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) __weak id <PARSRedPacketAlertDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)setupAnimate;
- (void)dismissAction;
- (void)dismissAction:(id)arg1;
- (void)checkLogAction;
- (void)openAction;
- (void)updateOpenButtonState:(unsigned long long)arg1;
- (void)addValidTimeLabel;
- (void)addCheckLogButton;
- (void)addDetailLabel;
- (void)addOpenButton;
- (void)addTitleLabel;
- (void)setupConstraints;
- (void)initUI;
- (id)initWithFrame:(struct CGRect)arg1 redPacketAlertType:(long long)arg2 groupID:(id)arg3 curUserGroupNickName:(id)arg4 detailInfo:(id)arg5;

@end
