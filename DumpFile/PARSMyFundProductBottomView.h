//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSArray;

@interface PARSMyFundProductBottomView : UIView
{
    id <PARSMyFundProductBottomViewDelegate> _delegate;
    NSArray *_actionInfoList;
    long long _latestAction;
}

@property(nonatomic) long long latestAction; // @synthesize latestAction=_latestAction;
@property(retain, nonatomic) NSArray *actionInfoList; // @synthesize actionInfoList=_actionInfoList;
@property(nonatomic) __weak id <PARSMyFundProductBottomViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)tabAction:(id)arg1;
- (id)buildActionButton:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
