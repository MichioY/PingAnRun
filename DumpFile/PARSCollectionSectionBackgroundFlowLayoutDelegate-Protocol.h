//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CALayer, NSString, UICollectionView, UICollectionViewLayout, UIColor, UIImage;

@protocol PARSCollectionSectionBackgroundFlowLayoutDelegate <NSObject>

@optional
- (UIColor *)collectionView:(UICollectionView *)arg1 layout:(UICollectionViewLayout *)arg2 backgroundColorForViewAtSection:(long long)arg3;
- (UIImage *)collectionView:(UICollectionView *)arg1 layout:(UICollectionViewLayout *)arg2 backgroundImageForViewAtSection:(long long)arg3;
- (NSString *)collectionView:(UICollectionView *)arg1 layout:(UICollectionViewLayout *)arg2 backgroundImageUrlForViewAtSection:(long long)arg3;
- (CALayer *)collectionView:(UICollectionView *)arg1 layout:(UICollectionViewLayout *)arg2 backgroundLayerForViewAtSection:(long long)arg3;
@end

