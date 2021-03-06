//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSArray, NSMutableArray;

@interface TentacleView : UIView
{
    struct CGPoint lineStartPoint;
    struct CGPoint lineEndPoint;
    NSMutableArray *touchesArray;
    NSMutableArray *touchedArray;
    _Bool success;
    NSArray *buttonArray;
    id <VerificationDelegate> rerificationDelegate;
    id <ResetDelegate> resetDelegate;
    id <TouchBeginDelegate> touchBeginDelegate;
    long long style;
}

@property(nonatomic) long long style; // @synthesize style;
@property(nonatomic) __weak id <TouchBeginDelegate> touchBeginDelegate; // @synthesize touchBeginDelegate;
@property(nonatomic) __weak id <ResetDelegate> resetDelegate; // @synthesize resetDelegate;
@property(nonatomic) __weak id <VerificationDelegate> rerificationDelegate; // @synthesize rerificationDelegate;
@property(retain, nonatomic) NSArray *buttonArray; // @synthesize buttonArray;
- (void).cxx_destruct;
- (void)enterArgin;
- (void)drawRect:(struct CGRect)arg1;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

