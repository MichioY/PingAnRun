//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JKNWebViewController.h"

@class UIButton;

@interface JKNPresentWebViewController : JKNWebViewController
{
    _Bool _showClose;
    UIButton *_btnClose;
}

@property(retain, nonatomic) UIButton *btnClose; // @synthesize btnClose=_btnClose;
@property(nonatomic) _Bool showClose; // @synthesize showClose=_showClose;
- (void).cxx_destruct;
- (void)setCloseBtn;
- (void)closeWithAnimated:(_Bool)arg1;
- (void)customShowCloseBtn:(_Bool)arg1;
- (void)initView;
- (void)viewDidLoad;
- (id)init;

@end

