//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UIScrollViewDelegate.h"

@class AdrCoverWallViewLeft, AdrCoverWallViewRight, AdrScrollView, NSArray, NSString, UIColor;

@interface AdrCoverWallView : UIView <UIScrollViewDelegate>
{
    UIColor *_bgColor;
    double _alphe;
    double _beginContentOffSetX;
    _Bool _isScrolling;
    AdrCoverWallViewLeft *_coverWallViewLeft;
    AdrCoverWallViewRight *_coverWallViewRight;
    AdrScrollView *_mainScrollView;
    NSArray *_leftCoverViewsArray;
    NSArray *_rightCoverViewsArray;
}

@property(retain, nonatomic) NSArray *rightCoverViewsArray; // @synthesize rightCoverViewsArray=_rightCoverViewsArray;
@property(retain, nonatomic) NSArray *leftCoverViewsArray; // @synthesize leftCoverViewsArray=_leftCoverViewsArray;
@property(nonatomic) _Bool isScrolling; // @synthesize isScrolling=_isScrolling;
@property(retain, nonatomic) AdrScrollView *mainScrollView; // @synthesize mainScrollView=_mainScrollView;
@property(retain, nonatomic) AdrCoverWallViewRight *coverWallViewRight; // @synthesize coverWallViewRight=_coverWallViewRight;
@property(retain, nonatomic) AdrCoverWallViewLeft *coverWallViewLeft; // @synthesize coverWallViewLeft=_coverWallViewLeft;
- (void).cxx_destruct;
- (void)dealloc;
- (void)showOrHiddenExchangeButton;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)setBackgroundAlpha:(double)arg1 backGroundColor:(id)arg2;
- (void)initSubViews;
- (void)initScrollView;
- (void)startNewPluginGuide;
- (void)registNotification;
- (id)initWithFrame:(struct CGRect)arg1 withLeftCoverViews:(id)arg2 withRightCoverViews:(id)arg3 isNeedLeftPluginViewSpot:(_Bool)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

