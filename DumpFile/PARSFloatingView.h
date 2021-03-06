//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UILabel, UIPanGestureRecognizer;

@interface PARSFloatingView : UIView
{
    UILabel *_lblFPS;
    UILabel *_lblMemorySys;
    UILabel *_lblCPUSys;
    UIPanGestureRecognizer *_panRecognizer;
    struct CGPoint _startPoint;
    struct CGPoint _originCenter;
}

@property(nonatomic) struct CGPoint originCenter; // @synthesize originCenter=_originCenter;
@property(nonatomic) struct CGPoint startPoint; // @synthesize startPoint=_startPoint;
@property(retain, nonatomic) UIPanGestureRecognizer *panRecognizer; // @synthesize panRecognizer=_panRecognizer;
@property __weak UILabel *lblCPUSys; // @synthesize lblCPUSys=_lblCPUSys;
@property __weak UILabel *lblMemorySys; // @synthesize lblMemorySys=_lblMemorySys;
@property __weak UILabel *lblFPS; // @synthesize lblFPS=_lblFPS;
- (void).cxx_destruct;
- (void)didPanFloatingView:(id)arg1;
- (void)willMoveToSuperview:(id)arg1;

@end

