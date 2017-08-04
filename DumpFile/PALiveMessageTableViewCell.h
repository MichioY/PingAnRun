//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class PALiveIMMsgViewModel, PAZNLabel, UILabel, UIView;

@interface PALiveMessageTableViewCell : UITableViewCell
{
    UIView *_msgBack;
    UILabel *_msgLabel;
    PAZNLabel *_msgYYLabel;
    PALiveIMMsgViewModel *_msgViewModel;
}

@property(retain, nonatomic) PALiveIMMsgViewModel *msgViewModel; // @synthesize msgViewModel=_msgViewModel;
@property(retain, nonatomic) PAZNLabel *msgYYLabel; // @synthesize msgYYLabel=_msgYYLabel;
@property(retain, nonatomic) UILabel *msgLabel; // @synthesize msgLabel=_msgLabel;
@property(retain, nonatomic) UIView *msgBack; // @synthesize msgBack=_msgBack;
- (void).cxx_destruct;
- (void)relayoutFrameOfSubViews;
- (void)layoutSubviews;
- (void)config:(id)arg1;
- (void)prepareForReuse;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
