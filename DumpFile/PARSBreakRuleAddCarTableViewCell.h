//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

#import "UITextFieldDelegate.h"

@class NSIndexPath, NSString, UIButton, UILabel, UITextField;

@interface PARSBreakRuleAddCarTableViewCell : UITableViewCell <UITextFieldDelegate>
{
    _Bool _showCarNumBtn;
    NSString *_title;
    NSString *_placeholder;
    NSString *_text;
    NSString *_carNum;
    NSIndexPath *_indexPath;
    id <PARSBreakRuleAddCarTableViewCellDelegate> _delegate;
    UILabel *_titleLabel;
    UIButton *_carNumBtn;
    UITextField *_inputField;
}

@property(retain, nonatomic) UITextField *inputField; // @synthesize inputField=_inputField;
@property(retain, nonatomic) UIButton *carNumBtn; // @synthesize carNumBtn=_carNumBtn;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak id <PARSBreakRuleAddCarTableViewCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool showCarNumBtn; // @synthesize showCarNumBtn=_showCarNumBtn;
@property(retain, nonatomic) NSIndexPath *indexPath; // @synthesize indexPath=_indexPath;
@property(copy, nonatomic) NSString *carNum; // @synthesize carNum=_carNum;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(copy, nonatomic) NSString *placeholder; // @synthesize placeholder=_placeholder;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (void)resignKeyBoard;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)pressCarNumBtn:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)awakeFromNib;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

