//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UIScrollViewDelegate.h"

@class AdrCropRectView, NSString, UIImage, UIImageView, UIScrollView;

@interface AdrCropView : UIView <UIScrollViewDelegate>
{
    UIImage *_image;
    UIImage *_croppedImage;
    UIScrollView *_scrollView;
    UIImageView *_imageView;
    UIView *_overlayView;
    AdrCropRectView *_cropRectView;
    struct CGSize _imageCropSize;
    struct CGRect _insetRect;
    struct CGRect _cropRect;
}

@property(nonatomic) struct CGRect cropRect; // @synthesize cropRect=_cropRect;
@property(nonatomic) struct CGRect insetRect; // @synthesize insetRect=_insetRect;
@property(retain, nonatomic) AdrCropRectView *cropRectView; // @synthesize cropRectView=_cropRectView;
@property(retain, nonatomic) UIView *overlayView; // @synthesize overlayView=_overlayView;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(nonatomic) struct CGSize imageCropSize; // @synthesize imageCropSize=_imageCropSize;
@property(retain, nonatomic) UIImage *croppedImage; // @synthesize croppedImage=_croppedImage;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
- (void).cxx_destruct;
- (id)viewForZoomingInScrollView:(id)arg1;
- (void)resetImage;
- (void)rotateImage;
- (void)overlayClipping;
- (void)setupImageView;
- (void)layoutCropRectViewWithCropRect:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)drawUI;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
