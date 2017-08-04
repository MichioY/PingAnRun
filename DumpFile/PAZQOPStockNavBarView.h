//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSString, UIButton, UIImageView, UILabel;

@interface PAZQOPStockNavBarView : UIView
{
    _Bool _isBackButtonExist;
    _Bool _isCloseButtonExist;
    NSString *_backCallBack;
    NSString *_closeCallBack;
    UIButton *_btnLeft;
    UIButton *_btnRight;
    UILabel *_lbNavTitle;
    CDUnknownBlockType _backBlock;
    CDUnknownBlockType _closeBlock;
    UIImageView *_navBarButtonLine;
}

@property(retain, nonatomic) UIImageView *navBarButtonLine; // @synthesize navBarButtonLine=_navBarButtonLine;
@property(copy, nonatomic) CDUnknownBlockType closeBlock; // @synthesize closeBlock=_closeBlock;
@property(copy, nonatomic) CDUnknownBlockType backBlock; // @synthesize backBlock=_backBlock;
@property(retain, nonatomic) UILabel *lbNavTitle; // @synthesize lbNavTitle=_lbNavTitle;
@property(retain, nonatomic) UIButton *btnRight; // @synthesize btnRight=_btnRight;
@property(retain, nonatomic) UIButton *btnLeft; // @synthesize btnLeft=_btnLeft;
@property(retain, nonatomic) NSString *closeCallBack; // @synthesize closeCallBack=_closeCallBack;
@property(retain, nonatomic) NSString *backCallBack; // @synthesize backCallBack=_backCallBack;
@property(nonatomic) _Bool isCloseButtonExist; // @synthesize isCloseButtonExist=_isCloseButtonExist;
@property(nonatomic) _Bool isBackButtonExist; // @synthesize isBackButtonExist=_isBackButtonExist;
- (void).cxx_destruct;
- (void)doActionToClose;
- (void)doActionToPreview;
- (void)updateRightButton:(id)arg1;
- (void)initView;
- (id)init;

@end
