//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class AdrMsgCenterLoginView, AdrMsgCenterPluginView, AdrMsgCenterUserInfoView, AdrPluginListItem, NSArray, NSString;

@interface AdrMsgCenterInformationView : UIView
{
    struct CGRect loginViewNoneEntryFrame;
    struct CGRect userInfoViewNoneEntryFrame;
    struct CGRect loginViewSingleEntryFrame;
    struct CGRect userInfoViewSingleEntryFrame;
    struct CGRect pluginViewSingleEntryFrame;
    struct CGRect loginViewDoubleEntryFrame;
    struct CGRect userInfoViewDoubleEntryFrame;
    struct CGRect secondViewDoubleEntryFrame;
    struct CGRect thirdViewDoubleEntryFrame;
    struct CGRect loginViewThreeEntryFrame;
    struct CGRect userInfoViewThreeEntryFrame;
    struct CGRect secondViewThreeEntryFrame;
    struct CGRect thirdViewThreeEntryFrame;
    struct CGRect fourthViewThreeEntryFrame;
    AdrMsgCenterLoginView *_loginView;
    AdrMsgCenterUserInfoView *_userInfoView;
    AdrMsgCenterPluginView *_secondView;
    AdrMsgCenterPluginView *_thirdView;
    AdrMsgCenterPluginView *_fourthView;
    NSArray *_personalCenterConfigArr;
    AdrPluginListItem *_firstLocationPlugin;
    AdrPluginListItem *_secondLocationPlugin;
    AdrPluginListItem *_thirdLocationPlugin;
    AdrPluginListItem *_fourthLocationPlugin;
    NSString *_userNameStr;
    struct CGPoint _msgRedPoint;
}

@property(retain, nonatomic) NSString *userNameStr; // @synthesize userNameStr=_userNameStr;
@property(retain, nonatomic) AdrPluginListItem *fourthLocationPlugin; // @synthesize fourthLocationPlugin=_fourthLocationPlugin;
@property(retain, nonatomic) AdrPluginListItem *thirdLocationPlugin; // @synthesize thirdLocationPlugin=_thirdLocationPlugin;
@property(retain, nonatomic) AdrPluginListItem *secondLocationPlugin; // @synthesize secondLocationPlugin=_secondLocationPlugin;
@property(retain, nonatomic) AdrPluginListItem *firstLocationPlugin; // @synthesize firstLocationPlugin=_firstLocationPlugin;
@property(retain, nonatomic) NSArray *personalCenterConfigArr; // @synthesize personalCenterConfigArr=_personalCenterConfigArr;
@property(nonatomic) struct CGPoint msgRedPoint; // @synthesize msgRedPoint=_msgRedPoint;
@property(retain, nonatomic) AdrMsgCenterPluginView *fourthView; // @synthesize fourthView=_fourthView;
@property(retain, nonatomic) AdrMsgCenterPluginView *thirdView; // @synthesize thirdView=_thirdView;
@property(retain, nonatomic) AdrMsgCenterPluginView *secondView; // @synthesize secondView=_secondView;
@property(retain, nonatomic) AdrMsgCenterUserInfoView *userInfoView; // @synthesize userInfoView=_userInfoView;
@property(retain, nonatomic) AdrMsgCenterLoginView *loginView; // @synthesize loginView=_loginView;
- (void).cxx_destruct;
- (void)dealloc;
- (void)handleLoginUserInfoView;
- (void)threePluginViewFrame;
- (void)handleThreePluginView;
- (void)twoPluginViewFrame;
- (void)handleTwoPluginView;
- (void)singlePluginViewFrame;
- (void)handleSinglePluginView;
- (void)handleNoneEntryUserInfoViewFrame;
- (void)nonePluginViewFrame;
- (void)handleNonePluginView;
- (void)setDefaultViewFrame;
- (void)openPluginWebViewWithPluginListItem:(id)arg1;
- (void)openFirstLocationViewWithPluginListItem:(id)arg1 isLogin:(id)arg2;
- (void)initSubViews;
- (void)handleEntry;
- (void)getUserSettingInformationFromPluginList;
- (void)refreshUserInfo;
- (void)resetUserInfoData;
- (void)registeNotification;
- (id)initWithFrame:(struct CGRect)arg1;

@end

