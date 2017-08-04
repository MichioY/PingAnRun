//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

@class Config, NSString, UIColor;

@interface MutiSignViewController : UIViewController
{
    NSString *myMessage;
    NSString *myId;
    UIColor *color;
    NSString *commitment;
    double scaleValue;
    struct CGSize SignImageSize;
    struct CGRect myRect;
    _Bool _isEcho;
    _Bool _screenKey;
    float _strockWidth;
    int _lineMax;
    Config *_myConfig;
}

@property(nonatomic) _Bool screenKey; // @synthesize screenKey=_screenKey;
@property(nonatomic) _Bool isEcho; // @synthesize isEcho=_isEcho;
@property(nonatomic) int lineMax; // @synthesize lineMax=_lineMax;
@property(nonatomic) float strockWidth; // @synthesize strockWidth=_strockWidth;
@property(retain, nonatomic) Config *myConfig; // @synthesize myConfig=_myConfig;
- (void)setSignFrame:(struct CGRect)arg1;
- (id)initWithCommitment:(id)arg1;
- (void)setImageSize:(struct CGSize)arg1;
- (void)setScale:(double)arg1;
- (void)setHandWriteColor:(id)arg1;
- (void)setMyId:(id)arg1;
- (void)setMessage:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;

@end
