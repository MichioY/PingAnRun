//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class Config, NSMutableArray, NSMutableDictionary, NSTimer, UIColor, UIImage, UIImageView, bezierLine;

@interface PainterView : UIView
{
    NSMutableDictionary *squigglesDic;
    NSMutableArray *finishSquiggles;
    float lineWidth;
    struct CGPoint locationsave;
    struct CGRect renderRect;
    struct CGPoint minX;
    struct CGPoint minY;
    struct CGPoint maxX;
    struct CGPoint maxY;
    int myId;
    bezierLine *bez;
    int index;
    _Bool clearflag;
    UIImage *SignerImage;
    NSMutableArray *saveArray;
    NSTimer *myTimer;
    UIImageView *signImageView;
    _Bool imageFlag;
    struct CGRect picRect;
    _Bool _isIphoneMassSign;
    Config *_myConfig;
    UIColor *_fillColor;
}

@property(retain, nonatomic) UIColor *fillColor; // @synthesize fillColor=_fillColor;
@property(nonatomic) _Bool isIphoneMassSign; // @synthesize isIphoneMassSign=_isIphoneMassSign;
@property(retain, nonatomic) Config *myConfig; // @synthesize myConfig=_myConfig;
@property struct CGRect renderRect; // @synthesize renderRect;
@property float lineWidth; // @synthesize lineWidth;
- (void)sendmessage;
- (void)stopr;
- (void)timer;
- (void)drawBez:(struct CGContext *)arg1;
- (struct CGRect)getRect;
- (void)dealloc;
- (struct CGRect)appRect:(struct CGPoint)arg1;
- (void)save;
- (id)getPointStr:(id)arg1;
- (void)savePointStr;
- (void)savePoint;
- (void)cleanSaveArry;
- (void)resetView;
- (void)setMyId:(int)arg1;
- (void)setLineWidt:(float)arg1;
- (struct CGRect)appRect_new:(struct CGPoint)arg1;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)drawSquiggle:(id)arg1 inContext:(struct CGContext *)arg2;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

@end
