//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSArray, UILabel;

@interface PARSFundProductSortView : UIView
{
    id <PARSFundProductSortViewDelegate> _delegate;
    NSArray *_sortButtons;
    long long _sortType;
    UILabel *_sortNameLabel;
}

@property(retain, nonatomic) UILabel *sortNameLabel; // @synthesize sortNameLabel=_sortNameLabel;
@property(nonatomic) long long sortType; // @synthesize sortType=_sortType;
@property(retain, nonatomic) NSArray *sortButtons; // @synthesize sortButtons=_sortButtons;
@property(nonatomic) __weak id <PARSFundProductSortViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)sortItemAction:(id)arg1;
- (id)sortTitleOfType:(long long)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

