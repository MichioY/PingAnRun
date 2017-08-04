//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITextView.h"

@class NSString, UILabel, UIResponder;

@interface PAIMUIExpandingTextViewInternal : UITextView
{
    UILabel *_placeHolderLabel;
    UIResponder *_overrideNextResponder;
}

@property(nonatomic) __weak UIResponder *overrideNextResponder; // @synthesize overrideNextResponder=_overrideNextResponder;
- (void).cxx_destruct;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (id)nextResponder;
- (void)textViewDidChange:(id)arg1;
@property(copy, nonatomic) NSString *placeHolder;
@property(readonly, nonatomic) UILabel *placeHolderLabel; // @synthesize placeHolderLabel=_placeHolderLabel;
- (void)setText:(id)arg1;
- (void)setContentInset:(struct UIEdgeInsets)arg1;
- (void)setContentOffset:(struct CGPoint)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end
