//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PARSPopupViewDelegate.h"
#import "PARSWealthHomePresenter.h"
#import "PARSWealthWangCaiCellDelegate.h"
#import "PARSWealthWangCaiTipsViewDelegate.h"

@class NSString, PARSPopupView, PARSWangCaiBrefInfo, PARSWealthWangCaiCell, UICollectionView;

@interface PARSWealthWangCaiCellPresenter : NSObject <PARSPopupViewDelegate, PARSWealthWangCaiTipsViewDelegate, PARSWealthWangCaiCellDelegate, PARSWealthHomePresenter>
{
    _Bool _isLoading;
    _Bool _canShake;
    id <PARSWealthHomePresenterDelegate> _delegate;
    id <PARSWealthWangCaiCellPresenterDelegate> _presenterDelegate;
    PARSWangCaiBrefInfo *_wangCaiBrefInfo;
    UICollectionView *_collectionView;
    PARSWealthWangCaiCell *_wangCaiCell;
    PARSPopupView *_popupView;
}

@property(nonatomic) _Bool canShake; // @synthesize canShake=_canShake;
@property(retain, nonatomic) PARSPopupView *popupView; // @synthesize popupView=_popupView;
@property(retain, nonatomic) PARSWealthWangCaiCell *wangCaiCell; // @synthesize wangCaiCell=_wangCaiCell;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) PARSWangCaiBrefInfo *wangCaiBrefInfo; // @synthesize wangCaiBrefInfo=_wangCaiBrefInfo;
@property(nonatomic) _Bool isLoading; // @synthesize isLoading=_isLoading;
@property(nonatomic) __weak id <PARSWealthWangCaiCellPresenterDelegate> presenterDelegate; // @synthesize presenterDelegate=_presenterDelegate;
@property(nonatomic) __weak id <PARSWealthHomePresenterDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)didTapCreditCardButton;
- (void)didTapCustomButton;
- (void)didTapFansButton;
- (void)didTapDetailButton;
- (void)didTapShakeButton;
- (void)didTapWangCaiImage;
- (void)tipsViewDidDismiss;
- (void)popupViewDidDismiss:(id)arg1;
- (void)showWangCaiTips:(id)arg1;
- (void)loadWangCaiTips;
- (void)startShakeAndLoadTips;
- (struct CGSize)sizeForWealthWangCaiCell;
- (id)wangCaiCellForIndexPath:(id)arg1;
- (void)loadData:(_Bool)arg1;
- (id)initWithCollectionView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

