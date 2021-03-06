//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIButton, UIImage, UIImageView, UILabel;

@interface PARSFGBottomView : UIView
{
    _Bool _isFifth;
    long long _msgCount;
    id <PARSFGBottomViewDelegate> _delegate;
    UIView *_horizontalLine;
    UIView *_verticalLine;
    UIButton *_chatButton;
    UIButton *_walkButton;
    UIImageView *_bageView;
    UIView *_line;
    UILabel *_redDot;
    UIImage *_atImage;
    double _screenHeight;
    long long _season;
}

@property(nonatomic) long long season; // @synthesize season=_season;
@property(nonatomic) double screenHeight; // @synthesize screenHeight=_screenHeight;
@property(retain, nonatomic) UIImage *atImage; // @synthesize atImage=_atImage;
@property(retain, nonatomic) UILabel *redDot; // @synthesize redDot=_redDot;
@property(retain, nonatomic) UIView *line; // @synthesize line=_line;
@property(retain, nonatomic) UIImageView *bageView; // @synthesize bageView=_bageView;
@property(retain, nonatomic) UIButton *walkButton; // @synthesize walkButton=_walkButton;
@property(retain, nonatomic) UIButton *chatButton; // @synthesize chatButton=_chatButton;
@property(retain, nonatomic) UIView *verticalLine; // @synthesize verticalLine=_verticalLine;
@property(retain, nonatomic) UIView *horizontalLine; // @synthesize horizontalLine=_horizontalLine;
@property(nonatomic) _Bool isFifth; // @synthesize isFifth=_isFifth;
@property(nonatomic) __weak id <PARSFGBottomViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) long long msgCount; // @synthesize msgCount=_msgCount;
- (void).cxx_destruct;
- (void)walkAction:(id)arg1;
- (void)chatAction:(id)arg1;
- (void)showBageView:(_Bool)arg1;
- (void)showMessageCount:(long long)arg1;
- (void)showAtButton:(_Bool)arg1;
- (void)setupSubviewsForFifth;
- (void)setupSubviews;
- (id)init;
- (id)initWithDelegate:(id)arg1 isFifth:(_Bool)arg2 season:(long long)arg3;

@end

