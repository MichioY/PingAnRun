//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UILabel;

@interface PARSLiveSearchHistoryTableHeaderView : UIView
{
    id <PARSLiveSearchHistoryTableHeaderViewDelegate> _delegate;
    UILabel *_titleLabel;
}

@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak id <PARSLiveSearchHistoryTableHeaderViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)updateWithKeyword:(id)arg1;
- (void)didTapTitleLabel:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

