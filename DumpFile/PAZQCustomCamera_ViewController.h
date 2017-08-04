//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "CustomAlertViewDelegate.h"

@class BlurClearLayer, LYCameraView, NSString, UIButton, UIImageView, UILabel, UIView;

@interface PAZQCustomCamera_ViewController : UIViewController <CustomAlertViewDelegate>
{
    _Bool _useBlur;
    int _type;
    UIView *_showbackView;
    UIImageView *_imageView;
    UIButton *_rephotographButton;
    UIButton *_usePictureButton;
    UIView *_camerabackview;
    LYCameraView *_cameraview;
    UIButton *_cancelButton;
    UIButton *_takepictureButton;
    UIButton *_flashButton;
    UIImageView *_overlay;
    BlurClearLayer *_blurLayer;
    UILabel *_titleLabel;
    UILabel *_bottomLabel;
}

+ (void)showAlertForPhotoLib;
+ (void)showAlertForCamera;
+ (void)checkPhotoLibAvailable:(CDUnknownBlockType)arg1;
+ (void)checkCameraAvailable:(CDUnknownBlockType)arg1;
+ (id)share;
@property(retain, nonatomic) UILabel *bottomLabel; // @synthesize bottomLabel=_bottomLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) BlurClearLayer *blurLayer; // @synthesize blurLayer=_blurLayer;
@property(retain, nonatomic) UIImageView *overlay; // @synthesize overlay=_overlay;
@property(retain, nonatomic) UIButton *flashButton; // @synthesize flashButton=_flashButton;
@property(retain, nonatomic) UIButton *takepictureButton; // @synthesize takepictureButton=_takepictureButton;
@property(retain, nonatomic) UIButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(retain, nonatomic) LYCameraView *cameraview; // @synthesize cameraview=_cameraview;
@property(retain, nonatomic) UIView *camerabackview; // @synthesize camerabackview=_camerabackview;
@property(retain, nonatomic) UIButton *usePictureButton; // @synthesize usePictureButton=_usePictureButton;
@property(retain, nonatomic) UIButton *rephotographButton; // @synthesize rephotographButton=_rephotographButton;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UIView *showbackView; // @synthesize showbackView=_showbackView;
@property(nonatomic) int type; // @synthesize type=_type;
@property(nonatomic) _Bool useBlur; // @synthesize useBlur=_useBlur;
- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (double)maxWidthForString:(id)arg1 WithFont:(id)arg2 height:(double)arg3;
- (struct CGRect)calculateClipRect;
- (struct CGRect)clipRectWithSize:(struct CGSize)arg1;
- (id)image:(id)arg1 rotation:(long long)arg2;
- (id)flipImageHorizontal:(id)arg1;
- (void)resetFlashImage;
- (void)usePictureButtonClick:(id)arg1;
- (void)rephotographButtonClick:(id)arg1;
- (void)flashButtonClick:(id)arg1;
- (void)cancelButtonClick:(id)arg1;
- (void)takePictureButtonClick:(id)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2 IsView:(_Bool)arg3;
- (void)showAlert:(id)arg1;
- (void)addCameraView;
- (void)addShowBackView;
- (void)viewDidLoad;
- (_Bool)prefersStatusBarHidden;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
