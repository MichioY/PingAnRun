//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

#import "UITextFieldDelegate.h"

@class NSIndexPath, NSString, UILabel, UITextField;

@interface PARSFeedbackEditableDetailItemCell : UITableViewCell <UITextFieldDelegate>
{
    NSIndexPath *_indexPath;
    UITextField *_valueField;
    id <PARSFeedbackEditableDetailItemCellDelegate> _delegate;
    UILabel *_descLabel;
}

@property(retain, nonatomic) UILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(nonatomic) __weak id <PARSFeedbackEditableDetailItemCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UITextField *valueField; // @synthesize valueField=_valueField;
@property(retain, nonatomic) NSIndexPath *indexPath; // @synthesize indexPath=_indexPath;
- (void).cxx_destruct;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)addTopLine;
- (void)updateCellWithItemInfo:(id)arg1;
- (struct UIEdgeInsets)layoutMargins;
- (struct UIEdgeInsets)separatorInset;
- (void)initUI;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

