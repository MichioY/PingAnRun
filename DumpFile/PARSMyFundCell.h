//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class UILabel;

@interface PARSMyFundCell : UITableViewCell
{
    UILabel *_totalValueLabel;
    UILabel *_floatValueLabel;
}

@property(retain, nonatomic) UILabel *floatValueLabel; // @synthesize floatValueLabel=_floatValueLabel;
@property(retain, nonatomic) UILabel *totalValueLabel; // @synthesize totalValueLabel=_totalValueLabel;
- (void).cxx_destruct;
- (struct UIEdgeInsets)layoutMargins;
- (struct UIEdgeInsets)separatorInset;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
