//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PARSCollectionSectionBackgroundFlowLayoutDelegate.h"
#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegate.h"
#import "UICollectionViewDelegateFlowLayout.h"

@class PARSZoneConfigInfo;

@protocol PARSZoneSectionController <UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout, PARSCollectionSectionBackgroundFlowLayoutDelegate>
- (void)loadData:(PARSZoneConfigInfo *)arg1 withCompetion:(void (^)(_Bool, NSError *))arg2;
- (void)refreshData:(void (^)(_Bool, NSError *))arg1;
@end

