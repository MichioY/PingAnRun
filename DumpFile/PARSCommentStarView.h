//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSArray;

@interface PARSCommentStarView : UIView
{
    id <PARSCommentStarViewDelegate> _delegate;
    NSArray *_starArray;
}

@property(retain, nonatomic) NSArray *starArray; // @synthesize starArray=_starArray;
@property(nonatomic) __weak id <PARSCommentStarViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)setRatingBarState:(long long)arg1;
- (void)updateRatingBarState:(id)arg1;
- (void)buildViewWithTitle:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 title:(id)arg2;

@end
