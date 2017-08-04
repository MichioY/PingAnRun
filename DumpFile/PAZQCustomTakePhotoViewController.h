//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "UIImagePickerControllerDelegate.h"
#import "UINavigationControllerDelegate.h"

@class NSString, UIButton, UIImage, UIImagePickerController, UIImageView, UIView;

@interface PAZQCustomTakePhotoViewController : UIViewController <UIImagePickerControllerDelegate, UINavigationControllerDelegate>
{
    int _type;
    UIView *_overlayView;
    UIImagePickerController *_imagePikerViewController;
    UIImageView *_boarderImageView;
    UIView *_photoView;
    UIImage *_photoImage;
    UIButton *_btn_left;
    UIButton *_btn_center;
}

@property(retain, nonatomic) UIButton *btn_center; // @synthesize btn_center=_btn_center;
@property(retain, nonatomic) UIButton *btn_left; // @synthesize btn_left=_btn_left;
@property(retain, nonatomic) UIImage *photoImage; // @synthesize photoImage=_photoImage;
@property(retain, nonatomic) UIView *photoView; // @synthesize photoView=_photoView;
@property(retain, nonatomic) UIImageView *boarderImageView; // @synthesize boarderImageView=_boarderImageView;
@property(retain, nonatomic) UIImagePickerController *imagePikerViewController; // @synthesize imagePikerViewController=_imagePikerViewController;
@property(retain, nonatomic) UIView *overlayView; // @synthesize overlayView=_overlayView;
@property(nonatomic) int type; // @synthesize type=_type;
- (void).cxx_destruct;
- (void)handlePanGestures:(id)arg1;
- (void)imagePickerControllerDidCancel:(id)arg1;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)swapFrontAndBackCameras:(id)arg1;
- (void)cameraTorchOn:(id)arg1;
- (void)sureDone:(id)arg1;
- (void)aginPhoto:(id)arg1;
- (void)cancelTakePicture:(id)arg1;
- (void)takePicture:(id)arg1;
- (void)getBoarderViewImage;
- (void)gotoCosCamera;
- (void)viewDidLoad;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
