//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "TouchBeginDelegate.h"

@class NSMutableArray, NSString, TentacleView, ThumbView, UIButton, UIImageView, UILabel;

@interface GesturePasswordView : UIView <TouchBeginDelegate>
{
    UIImageView *imgView;
    UIButton *forgetButton;
    UIButton *otherButton;
    UIButton *resetButton;
    ThumbView *thumb;
    TentacleView *tentacleView;
    UILabel *state;
    long long style;
    id <GesturePasswordDelegate> gesturePasswordDelegate;
    UIImageView *_img;
    UIView *_linkNodesContainerView;
    NSMutableArray *_buttonArray;
    struct CGPoint _lineStartPoint;
    struct CGPoint _lineEndPoint;
}

@property(nonatomic) struct CGPoint lineEndPoint; // @synthesize lineEndPoint=_lineEndPoint;
@property(nonatomic) struct CGPoint lineStartPoint; // @synthesize lineStartPoint=_lineStartPoint;
@property(retain, nonatomic) NSMutableArray *buttonArray; // @synthesize buttonArray=_buttonArray;
@property(retain, nonatomic) UIView *linkNodesContainerView; // @synthesize linkNodesContainerView=_linkNodesContainerView;
@property(retain, nonatomic) UIImageView *img; // @synthesize img=_img;
@property(nonatomic) __weak id <GesturePasswordDelegate> gesturePasswordDelegate; // @synthesize gesturePasswordDelegate;
@property(nonatomic, setter=setStyle:) long long style; // @synthesize style;
@property(retain, nonatomic) UILabel *state; // @synthesize state;
@property(retain, nonatomic) TentacleView *tentacleView; // @synthesize tentacleView;
@property(retain, nonatomic) ThumbView *thumb; // @synthesize thumb;
@property(retain, nonatomic) UIButton *resetButton; // @synthesize resetButton;
@property(retain, nonatomic) UIButton *otherButton; // @synthesize otherButton;
@property(retain, nonatomic) UIButton *forgetButton; // @synthesize forgetButton;
@property(retain, nonatomic) UIImageView *imgView; // @synthesize imgView;
- (void).cxx_destruct;
- (void)eraseRoute;
- (void)resetGesture;
- (void)forget;
- (void)other;
- (void)gestureTouchBegin;
- (void)layoutSubviews;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

