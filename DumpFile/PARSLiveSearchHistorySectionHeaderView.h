//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewHeaderFooterView.h"

@class UIButton, UILabel;

@interface PARSLiveSearchHistorySectionHeaderView : UITableViewHeaderFooterView
{
    UILabel *_titleLabel;
    UIButton *_clearButton;
}

@property(retain, nonatomic) UIButton *clearButton; // @synthesize clearButton=_clearButton;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)updateWithHasHistory:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
