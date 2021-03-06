//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JKNWebViewController.h"

@class UIButton;

@interface JKNPushWebViewController : JKNWebViewController
{
    _Bool _showBack;
    _Bool _catchBackBtn;
    _Bool _showClose;
    _Bool _needNavigationBar;
    _Bool _beforeIsHidenNavigationBar;
    UIButton *_btnBack;
    UIButton *_btnClose;
}

@property(nonatomic) _Bool beforeIsHidenNavigationBar; // @synthesize beforeIsHidenNavigationBar=_beforeIsHidenNavigationBar;
@property(nonatomic) _Bool needNavigationBar; // @synthesize needNavigationBar=_needNavigationBar;
@property(retain, nonatomic) UIButton *btnClose; // @synthesize btnClose=_btnClose;
@property(nonatomic) _Bool showClose; // @synthesize showClose=_showClose;
@property(retain, nonatomic) UIButton *btnBack; // @synthesize btnBack=_btnBack;
@property(nonatomic) _Bool catchBackBtn; // @synthesize catchBackBtn=_catchBackBtn;
@property(nonatomic) _Bool showBack; // @synthesize showBack=_showBack;
- (void).cxx_destruct;
- (void)needNavigationBar:(_Bool)arg1;
- (void)setLeftBarBtns;
- (void)back;
- (void)needCatchBackBtn:(_Bool)arg1;
- (void)closeWithAnimated:(_Bool)arg1;
- (void)customShowCloseBtn:(_Bool)arg1;
- (void)initView;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)init;

@end

