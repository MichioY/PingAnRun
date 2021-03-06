//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class UIButton, UILabel;

@interface PARSLiveSearchHistoryCell : UITableViewCell
{
    id <PARSLiveSearchHistoryCellDelegate> _delegate;
    UILabel *_titleLabel;
    UIButton *_deleteButton;
}

@property(retain, nonatomic) UIButton *deleteButton; // @synthesize deleteButton=_deleteButton;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak id <PARSLiveSearchHistoryCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)didTapDeleteButton:(id)arg1;
- (void)updateWithKeyword:(id)arg1;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)awakeFromNib;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

