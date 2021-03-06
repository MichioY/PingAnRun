//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSString, UIButton, UILabel;

@interface PARSHealthCircleBottomView : UIView
{
    _Bool _isButtonHidden;
    long long _msgCount;
    id <PARSHealthCircleDelegate> _delegate;
    NSString *_buttonTitle;
    UIButton *_chatButton;
    UIButton *_moreButton;
    UIButton *_welfareButton;
    UIView *_horizontalLine;
    UIView *_verticalLine;
    UILabel *_redDot;
    UIView *_separator;
}

@property(retain, nonatomic) UIView *separator; // @synthesize separator=_separator;
@property(retain, nonatomic) UILabel *redDot; // @synthesize redDot=_redDot;
@property(retain, nonatomic) UIView *verticalLine; // @synthesize verticalLine=_verticalLine;
@property(retain, nonatomic) UIView *horizontalLine; // @synthesize horizontalLine=_horizontalLine;
@property(retain, nonatomic) UIButton *welfareButton; // @synthesize welfareButton=_welfareButton;
@property(retain, nonatomic) UIButton *moreButton; // @synthesize moreButton=_moreButton;
@property(retain, nonatomic) UIButton *chatButton; // @synthesize chatButton=_chatButton;
@property(copy, nonatomic) NSString *buttonTitle; // @synthesize buttonTitle=_buttonTitle;
@property(nonatomic) _Bool isButtonHidden; // @synthesize isButtonHidden=_isButtonHidden;
@property(nonatomic) __weak id <PARSHealthCircleDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long msgCount; // @synthesize msgCount=_msgCount;
- (void).cxx_destruct;
- (void)update;
- (void)clickWelfareButton;
- (void)moreAction:(id)arg1;
- (void)chatAction:(id)arg1;
- (void)setupSubviews;
- (id)init;
- (id)initWithMessageCount:(long long)arg1;

@end

