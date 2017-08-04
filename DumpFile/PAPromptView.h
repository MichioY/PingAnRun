//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSTimer, UIImageView, UILabel;

@interface PAPromptView : UIView
{
    UIImageView *timeView;
    UILabel *label;
    UIImageView *imageView;
    NSTimer *showTimer;
    NSTimer *changeTimer;
    int kSoundTime;
    id <PAPromptDelegate> _delegate;
}

@property(retain, nonatomic) id <PAPromptDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)stopTimeView;
- (void)startTimer;
- (void)closeShowTimer;
- (void)closeChangeTimer;
- (void)reSet;
- (void)hidePrompt;
- (void)showPrompt;
- (id)initWithFrame:(struct CGRect)arg1 andTheSoundContor:(_Bool)arg2;

@end
