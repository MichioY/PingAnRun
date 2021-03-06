//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PARSBaseViewController.h"

#import "UIScrollViewDelegate.h"

@class NSString, NSURL, UIImageView, UIScrollView;

@interface PARSPreviewPictureViewController : PARSBaseViewController <UIScrollViewDelegate>
{
    UIScrollView *_scrollView;
    UIImageView *_imageView;
    NSURL *_imageUrl;
}

@property(retain, nonatomic) NSURL *imageUrl; // @synthesize imageUrl=_imageUrl;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (_Bool)shouldHideNavigationBar;
- (void)tapAction:(id)arg1;
- (void)scrollViewDidZoom:(id)arg1;
- (id)viewForZoomingInScrollView:(id)arg1;
- (void)setupImageViewWithImage:(id)arg1;
- (void)downloadImageWithUrl:(id)arg1;
- (void)setupUI;
- (void)viewDidLoad;
- (id)initWithImageUrl:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

