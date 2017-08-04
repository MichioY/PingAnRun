//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PAIMChatBaseCell.h"

@class PAIMFLAnimatedImageView, UILabel, UITapGestureRecognizer, UIView;

@interface PAIMChatImageCell : PAIMChatBaseCell
{
    PAIMFLAnimatedImageView *imageView;
    UITapGestureRecognizer *tapGesture;
    UILabel *_progressTip;
    UIView *_progressBar;
}

+ (void)getImageOfMessageWithModel:(id)arg1 outImage:(id *)arg2 outAnimatedImage:(id *)arg3;
+ (double)suitableHeightWithMessage:(id)arg1;
@property(retain, nonatomic) UIView *progressBar; // @synthesize progressBar=_progressBar;
@property(retain, nonatomic) UILabel *progressTip; // @synthesize progressTip=_progressTip;
- (void).cxx_destruct;
- (id)getThumbnail;
- (void)handleMenuHiddenNotification:(id)arg1;
- (void)bubbleDidLongPressed:(id)arg1;
- (void)makeCorner:(_Bool)arg1;
- (void)updateFrame:(double)arg1;
- (void)updateUploadProgress:(double)arg1;
- (void)resendFailedMessage;
- (void)imageDidTaped:(id)arg1;
- (void)handleSendingMessage;
- (void)handleFailureMessage;
- (void)handleSuccessMessage;
- (void)setChatMessageData:(id)arg1;
- (void)setupCommonUI;
- (id)initWithChatStyle:(unsigned long long)arg1 reuseIdentifier:(id)arg2;
- (void)dealloc;

@end
