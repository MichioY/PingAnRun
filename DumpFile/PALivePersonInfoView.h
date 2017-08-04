//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class PALivePersonInfo, PALiveRoomInfo, UIButton, UIImageView, UILabel;

@interface PALivePersonInfoView : UIView
{
    PALiveRoomInfo *_roomInfo;
    PALivePersonInfo *_personInfo;
    CDUnknownBlockType _homepageBlock;
    CDUnknownBlockType _reportBlock;
    CDUnknownBlockType _followBlock;
    UIView *_backView;
    UIView *_contentView;
    UIImageView *_headImage;
    UILabel *_name;
    UIImageView *_genderImv;
    UIImageView *_levelImv;
    UILabel *_company;
    UIButton *_report;
    UIButton *_host;
    UILabel *_signature;
    UIView *_verticalLineView;
    UILabel *_follow;
    UILabel *_follower;
    UILabel *_likeNumber;
    UILabel *_likeDes;
    UILabel *_giftNumber;
    UILabel *_giftDes;
    UILabel *_prestigeNumber;
    UILabel *_prestigeDes;
    UIView *_horizontalLineView;
    UIButton *_followBtn;
}

+ (id)showWithRoomInfo:(id)arg1 personInfo:(id)arg2 homepageBlock:(CDUnknownBlockType)arg3 reportBlock:(CDUnknownBlockType)arg4 followBlock:(CDUnknownBlockType)arg5;
@property(retain, nonatomic) UIButton *followBtn; // @synthesize followBtn=_followBtn;
@property(retain, nonatomic) UIView *horizontalLineView; // @synthesize horizontalLineView=_horizontalLineView;
@property(retain, nonatomic) UILabel *prestigeDes; // @synthesize prestigeDes=_prestigeDes;
@property(retain, nonatomic) UILabel *prestigeNumber; // @synthesize prestigeNumber=_prestigeNumber;
@property(retain, nonatomic) UILabel *giftDes; // @synthesize giftDes=_giftDes;
@property(retain, nonatomic) UILabel *giftNumber; // @synthesize giftNumber=_giftNumber;
@property(retain, nonatomic) UILabel *likeDes; // @synthesize likeDes=_likeDes;
@property(retain, nonatomic) UILabel *likeNumber; // @synthesize likeNumber=_likeNumber;
@property(retain, nonatomic) UILabel *follower; // @synthesize follower=_follower;
@property(retain, nonatomic) UILabel *follow; // @synthesize follow=_follow;
@property(retain, nonatomic) UIView *verticalLineView; // @synthesize verticalLineView=_verticalLineView;
@property(retain, nonatomic) UILabel *signature; // @synthesize signature=_signature;
@property(retain, nonatomic) UIButton *host; // @synthesize host=_host;
@property(retain, nonatomic) UIButton *report; // @synthesize report=_report;
@property(retain, nonatomic) UILabel *company; // @synthesize company=_company;
@property(retain, nonatomic) UIImageView *levelImv; // @synthesize levelImv=_levelImv;
@property(retain, nonatomic) UIImageView *genderImv; // @synthesize genderImv=_genderImv;
@property(retain, nonatomic) UILabel *name; // @synthesize name=_name;
@property(retain, nonatomic) UIImageView *headImage; // @synthesize headImage=_headImage;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) UIView *backView; // @synthesize backView=_backView;
@property(copy, nonatomic) CDUnknownBlockType followBlock; // @synthesize followBlock=_followBlock;
@property(copy, nonatomic) CDUnknownBlockType reportBlock; // @synthesize reportBlock=_reportBlock;
@property(copy, nonatomic) CDUnknownBlockType homepageBlock; // @synthesize homepageBlock=_homepageBlock;
@property(retain, nonatomic) PALivePersonInfo *personInfo; // @synthesize personInfo=_personInfo;
@property(retain, nonatomic) PALiveRoomInfo *roomInfo; // @synthesize roomInfo=_roomInfo;
- (void).cxx_destruct;
- (void)handleTap;
- (void)onFollow;
- (void)onHostPage;
- (void)onReport;
- (void)dismiss;
- (void)show;
- (id)changeNumberValue:(id)arg1;
- (void)setDispalyInfo:(id)arg1 personInfo:(id)arg2;
- (void)layoutViews;
- (void)addViews;
- (id)initWithRoomInfo:(id)arg1 personInfo:(id)arg2 homepageBlock:(CDUnknownBlockType)arg3 reportBlock:(CDUnknownBlockType)arg4 followBlock:(CDUnknownBlockType)arg5;

@end
