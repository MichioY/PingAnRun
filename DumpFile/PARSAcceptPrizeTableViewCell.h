//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

#import "PARSAcceptPrizeTableViewCellDelegate.h"

@class NSString, NSTimer, PARSAcceptPrizeInfo, UIButton, UIImageView, UILabel, UITextField, UITextView;

@interface PARSAcceptPrizeTableViewCell : UITableViewCell <PARSAcceptPrizeTableViewCellDelegate>
{
    PARSAcceptPrizeInfo *_acceptInfo;
    id <PARSAcceptPrizeTableViewCellDelegate> _delegate;
    UIImageView *_iconView;
    UILabel *_titleLabel;
    UITextField *_textField;
    UIButton *_getMsgBtn;
    UILabel *_tipLabel;
    UITextView *_textView;
    NSTimer *_timer;
    long long _countDownTime;
}

@property(nonatomic) long long countDownTime; // @synthesize countDownTime=_countDownTime;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(nonatomic) __weak UITextView *textView; // @synthesize textView=_textView;
@property(nonatomic) __weak UILabel *tipLabel; // @synthesize tipLabel=_tipLabel;
@property(nonatomic) __weak UIButton *getMsgBtn; // @synthesize getMsgBtn=_getMsgBtn;
@property(nonatomic) __weak UITextField *textField; // @synthesize textField=_textField;
@property(nonatomic) __weak UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak UIImageView *iconView; // @synthesize iconView=_iconView;
@property(nonatomic) __weak id <PARSAcceptPrizeTableViewCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) PARSAcceptPrizeInfo *acceptInfo; // @synthesize acceptInfo=_acceptInfo;
- (void).cxx_destruct;
- (void)showSeparator:(_Bool)arg1;
- (void)cellResignFirstResponder:(id)arg1;
- (void)countingDown;
- (void)didClickGetMsgButton:(id)arg1;
- (void)setupUI;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
