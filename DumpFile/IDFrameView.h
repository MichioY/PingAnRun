//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSTimer, UIImageView, UILabel;

@interface IDFrameView : UIView
{
    int LINE_LENGTH;
    int SCANLINE_WIDTH;
    int scan_num;
    _Bool _isDown;
    UILabel *promptLabel;
    NSTimer *timer;
    NSTimer *line_timer;
    UIImageView *_line;
}

@property(nonatomic) _Bool isDown; // @synthesize isDown=_isDown;
@property(retain, nonatomic) UIImageView *line; // @synthesize line=_line;
@property(retain, nonatomic) NSTimer *line_timer; // @synthesize line_timer;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer;
@property(retain, nonatomic) UILabel *promptLabel; // @synthesize promptLabel;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (void)timerFire:(id)arg1;
- (void)lineAnimation;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

