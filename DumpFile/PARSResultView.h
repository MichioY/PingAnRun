//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSMutableArray, NSString, UIImage, UIImageView, UILabel;

@interface PARSResultView : UIView
{
    CDUnknownBlockType _handler;
    UILabel *_tipsLabel;
    UILabel *_detailTipsLabel;
    unsigned long long _type;
    UIImageView *_imageView;
    UIImage *_image;
    NSString *_tips;
    NSString *_detailTips;
    NSMutableArray *_buttons;
    NSMutableArray *_buttonHandlers;
}

+ (id)resultViewWithType:(unsigned long long)arg1 handler:(CDUnknownBlockType)arg2;
@property(retain, nonatomic) NSMutableArray *buttonHandlers; // @synthesize buttonHandlers=_buttonHandlers;
@property(retain, nonatomic) NSMutableArray *buttons; // @synthesize buttons=_buttons;
@property(copy, nonatomic) NSString *detailTips; // @synthesize detailTips=_detailTips;
@property(copy, nonatomic) NSString *tips; // @synthesize tips=_tips;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(retain, nonatomic) UILabel *detailTipsLabel; // @synthesize detailTipsLabel=_detailTipsLabel;
@property(retain, nonatomic) UILabel *tipsLabel; // @synthesize tipsLabel=_tipsLabel;
@property(copy, nonatomic) CDUnknownBlockType handler; // @synthesize handler=_handler;
- (void).cxx_destruct;
- (void)attendMoreActivity:(id)arg1;
- (void)handleExtraButtonTapAction:(id)arg1;
- (void)handleButtonTapAction:(id)arg1;
- (void)tapAction:(id)arg1;
- (id)buildButton;
- (void)setupSubviews;
- (void)willMoveToSuperview:(id)arg1;
- (void)addDestructiveButton:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)addButton:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (id)initWithImage:(id)arg1 tips:(id)arg2 detailTips:(id)arg3 type:(unsigned long long)arg4 handler:(CDUnknownBlockType)arg5;
- (id)initWithImage:(id)arg1 tips:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (id)initWithHandler:(CDUnknownBlockType)arg1;
- (id)initWithDefault;

@end

