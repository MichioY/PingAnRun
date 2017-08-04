//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PAIMChatBaseCell.h"

@class PAIMFLAnimatedImageView, UIButton, UILabel, UIView;

@interface PAIMChatVideoCell : PAIMChatBaseCell
{
    UIButton *_videoButton;
    PAIMFLAnimatedImageView *_animateImageView;
    UIView *_videoInfoView;
    UILabel *_videoSizeLabel;
    UILabel *_videoTimeLabel;
    UILabel *_uploadProgress;
}

+ (double)suitableHeightWithMessage:(id)arg1;
@property(retain, nonatomic) UILabel *uploadProgress; // @synthesize uploadProgress=_uploadProgress;
@property(retain, nonatomic) UILabel *videoTimeLabel; // @synthesize videoTimeLabel=_videoTimeLabel;
@property(retain, nonatomic) UILabel *videoSizeLabel; // @synthesize videoSizeLabel=_videoSizeLabel;
@property(retain, nonatomic) UIView *videoInfoView; // @synthesize videoInfoView=_videoInfoView;
@property(retain, nonatomic) PAIMFLAnimatedImageView *animateImageView; // @synthesize animateImageView=_animateImageView;
@property(retain, nonatomic) UIButton *videoButton; // @synthesize videoButton=_videoButton;
- (void).cxx_destruct;
- (id)getVideoTimeLength;
- (id)getVideoFileSize;
- (id)getPreviewImageWithPath:(id)arg1;
- (void)updateUploadProgress:(double)arg1;
- (void)resendFailedMessage;
- (void)handleMenuHiddenNotification:(id)arg1;
- (void)handleLongPressVideoAction:(id)arg1;
- (void)handleClickVideoAction;
- (void)handleSendingMessage;
- (void)handleFailureMessage;
- (void)handleSuccessMessage;
- (void)setChatMessageData:(id)arg1;
- (id)initWithChatStyle:(unsigned long long)arg1 reuseIdentifier:(id)arg2;
- (void)dealloc;

@end
