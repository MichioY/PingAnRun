//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSIndexPath, UICollectionView;

@protocol PARSHomePageViewDelegate <NSObject>
- (void)homePageView:(UICollectionView *)arg1 didPressMoreBtnAtIndexPath:(NSIndexPath *)arg2;
- (void)homePageView:(UICollectionView *)arg1 didScroll:(double)arg2;
- (void)homePageView:(UICollectionView *)arg1 didSelectItemAtIndexPath:(NSIndexPath *)arg2;
@end
