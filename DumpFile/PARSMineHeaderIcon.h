//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIImageView, UILabel;

@interface PARSMineHeaderIcon : UIView
{
    UIImageView *_iconView;
    UILabel *_redDot;
    CDUnknownBlockType _action;
}

@property(copy, nonatomic) CDUnknownBlockType action; // @synthesize action=_action;
@property(retain, nonatomic) UILabel *redDot; // @synthesize redDot=_redDot;
@property(retain, nonatomic) UIImageView *iconView; // @synthesize iconView=_iconView;
- (void).cxx_destruct;
- (void)tapAction;
- (void)refreshRedDotWithCount:(long long)arg1;
- (void)setupUIWithTitle:(id)arg1 icon:(id)arg2 showSeparate:(_Bool)arg3;
- (id)initWithTitle:(id)arg1 icon:(id)arg2 tag:(long long)arg3 showSeparate:(_Bool)arg4 action:(CDUnknownBlockType)arg5;

@end
