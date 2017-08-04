//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class AdrBannerItem, AdrGIFImageView, NSDictionary;

@interface AdrBannerView : UIView
{
    AdrBannerItem *_adrBannerItem;
    AdrGIFImageView *_bannerImageView;
    NSDictionary *_bannerCodeDict;
    double _startDisplayTime;
    double _endDisplayTime;
    _Bool _isFullDisplay;
}

+ (id)convertStringToDate:(id)arg1;
+ (_Bool)isBannerReady:(id)arg1;
+ (_Bool)isBannerInDisplayPeriod:(id)arg1;
+ (_Bool)isBannerUseful:(id)arg1;
- (void).cxx_destruct;
- (void)dealloc;
- (void)addObserver;
- (void)trackBannerClick;
- (void)trackBannerDisplayDuration;
- (void)trackBannerDisplay;
- (void)bannerShowDone;
- (void)removeBannerView;
- (void)allowScrollAndRemoveView;
- (void)loadLocalBannerImage;
- (void)clickBanner;
- (void)createImageButton;
- (void)createDoraemonImageView;
- (void)createBannerImageView;
- (void)showBanner:(id)arg1;

@end
