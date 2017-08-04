//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class UILabel;

@interface PARSFeedbackDetailItemCell : UITableViewCell
{
    UILabel *_descLabel;
    UILabel *_valueLabel;
}

@property(retain, nonatomic) UILabel *valueLabel; // @synthesize valueLabel=_valueLabel;
@property(retain, nonatomic) UILabel *descLabel; // @synthesize descLabel=_descLabel;
- (void).cxx_destruct;
- (void)addBottomLine;
- (void)updateCellWithItemInfo:(id)arg1;
- (void)showIndicator;
- (struct UIEdgeInsets)layoutMargins;
- (struct UIEdgeInsets)separatorInset;
- (void)initUI;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
