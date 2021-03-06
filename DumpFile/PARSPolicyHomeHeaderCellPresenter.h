//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PARSZoneSectionController.h"

@class NSArray, NSString;

@interface PARSPolicyHomeHeaderCellPresenter : PARSZoneSectionController
{
    NSString *_policyCount;
    NSArray *_notificationList;
    id <PARSPolicyHomeHeaderCellPresenterDelegate> _anoDelegate;
}

@property(nonatomic) __weak id <PARSPolicyHomeHeaderCellPresenterDelegate> anoDelegate; // @synthesize anoDelegate=_anoDelegate;
@property(retain, nonatomic) NSArray *notificationList; // @synthesize notificationList=_notificationList;
@property(copy, nonatomic) NSString *policyCount; // @synthesize policyCount=_policyCount;
- (void).cxx_destruct;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)initWithDelegate:(id)arg1 collectionView:(id)arg2;

@end

