//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, PARSWealthSearchInputView, UIButton;

@protocol PARSWealthSearchInputViewDelegate <NSObject>
- (void)searchInputView:(PARSWealthSearchInputView *)arg1 didSearchKeyword:(NSString *)arg2;
- (void)searchInputView:(PARSWealthSearchInputView *)arg1 didTapCancelButton:(UIButton *)arg2;
- (void)searchInputView:(PARSWealthSearchInputView *)arg1 didInputString:(NSString *)arg2;
@end

