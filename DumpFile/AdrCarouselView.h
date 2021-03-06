//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSMutableArray, NSTimer, UIColor, UILabel;

@interface AdrCarouselView : UIView
{
    _Bool _hasUnReadMsg;
    UILabel *_currentMessageLabel;
    UILabel *_nextMessageLabel;
    NSTimer *_animationTimer;
    long long _carouseState;
    unsigned long long _currentMessageIndex;
    NSMutableArray *_carouseMessageArray;
    UIColor *_messageFontColor;
    double _messageFontSize;
}

@property(nonatomic) double messageFontSize; // @synthesize messageFontSize=_messageFontSize;
@property(retain, nonatomic) UIColor *messageFontColor; // @synthesize messageFontColor=_messageFontColor;
@property(copy, nonatomic) NSMutableArray *carouseMessageArray; // @synthesize carouseMessageArray=_carouseMessageArray;
@property(readonly, nonatomic) unsigned long long currentMessageIndex; // @synthesize currentMessageIndex=_currentMessageIndex;
@property(nonatomic) long long carouseState; // @synthesize carouseState=_carouseState;
- (void).cxx_destruct;
- (void)dealloc;
- (void)doCarouseAnimation;
- (void)startCarouseAnimation;
- (id)getMessageURL;
- (void)stopCarouse;
- (void)startCarouse;
- (void)loadBlueOperationMsg;
- (void)loadUnreadMessage;
- (void)loadCurrentMessage;
- (void)loadMessage;
- (void)loadIndexMessage;
- (void)initCarouseLabel;
- (void)defaultConfig;
- (id)initWithFrame:(struct CGRect)arg1;

@end

