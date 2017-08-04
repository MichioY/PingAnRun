//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSMutableDictionary, PAIMApiFriendModel, PAIMApiMessageModel, UIButton;

@interface PAIMExternalTools : NSObject
{
    _Bool vedioIsPlaying;
    _Bool _canContinuousVoice;
    _Bool _isRemindSomeOne;
    PAIMApiFriendModel *_friendInfo;
    UIButton *_rightButton;
    UIButton *_leftButton;
    NSMutableDictionary *_upLoadProgressDic;
    NSMutableArray *_remindFriendNameArr;
    PAIMApiMessageModel *_resendMessageModel;
    NSMutableArray *_remindFriendUserNameArr;
}

+ (_Bool)isValidArray:(id)arg1;
+ (id)objectAtIndex:(long long)arg1 array:(id)arg2;
+ (long long)getFreeSpace;
+ (id)getUserFromJid:(id)arg1;
+ (struct CGSize)getStringSize:(id)arg1 font:(id)arg2 size:(struct CGSize)arg3 lineBreakModel:(long long)arg4;
+ (float)calculateAudioBoxLen:(id)arg1;
+ (id)share;
@property(retain, nonatomic) NSMutableArray *remindFriendUserNameArr; // @synthesize remindFriendUserNameArr=_remindFriendUserNameArr;
@property(retain, nonatomic) PAIMApiMessageModel *resendMessageModel; // @synthesize resendMessageModel=_resendMessageModel;
@property(retain, nonatomic) NSMutableArray *remindFriendNameArr; // @synthesize remindFriendNameArr=_remindFriendNameArr;
@property _Bool isRemindSomeOne; // @synthesize isRemindSomeOne=_isRemindSomeOne;
@property(retain, nonatomic) NSMutableDictionary *upLoadProgressDic; // @synthesize upLoadProgressDic=_upLoadProgressDic;
@property(nonatomic) _Bool canContinuousVoice; // @synthesize canContinuousVoice=_canContinuousVoice;
@property(retain, nonatomic) UIButton *leftButton; // @synthesize leftButton=_leftButton;
@property(retain, nonatomic) UIButton *rightButton; // @synthesize rightButton=_rightButton;
@property(retain, nonatomic) PAIMApiFriendModel *friendInfo; // @synthesize friendInfo=_friendInfo;
- (void).cxx_destruct;
- (void)setVedioIsPlaying:(_Bool)arg1;
- (_Bool)vedioIsPlaying;
- (void)getImageOfMessageWithModel:(id)arg1 outImage:(id *)arg2 outAnimatedImage:(id *)arg3;
- (float)getCellHeight:(id)arg1 isShowNickName:(_Bool)arg2;
- (_Bool)searchResult:(id)arg1 searchText:(id)arg2;
- (id)generatorSecionName:(id)arg1;
- (_Bool)stringContainsEmoji:(id)arg1;
- (id)getNameFromFriendModel:(id)arg1;
- (void)clickedImageButton;
- (void)addRoomlargeImage:(id)arg1 andType:(unsigned long long)arg2;
- (void)addlargeImage:(id)arg1;
- (void)removeLargeImage;
- (void)disenablePopGesture:(id)arg1;
- (id)createLeftBarButtonItem:(id)arg1 target:(id)arg2 selector:(SEL)arg3 ImageName:(id)arg4;
- (id)createRightBarButtonItem:(id)arg1 target:(id)arg2 selector:(SEL)arg3 ImageName:(id)arg4;
- (id)init;

@end
