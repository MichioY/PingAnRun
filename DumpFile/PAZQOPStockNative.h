//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CustomAlertViewDelegate.h"
#import "UIAlertViewDelegate.h"
#import "UIImagePickerControllerDelegate.h"
#import "UINavigationControllerDelegate.h"

@class NSMutableDictionary, NSString, PAZQOPCamera, PDOPStockMainViewController, UIWebView;

@interface PAZQOPStockNative : NSObject <UIAlertViewDelegate, CustomAlertViewDelegate, UINavigationControllerDelegate, UIImagePickerControllerDelegate>
{
    NSString *_telStr;
    _Bool bolface;
    PAZQOPCamera *_camera;
    NSString *callbackStr;
    NSMutableDictionary *carmeraDic;
    _Bool isopen;
    UIWebView *_currentWebView;
    NSString *_function_callback;
    PDOPStockMainViewController *_currentViewController;
}

+ (id)sharedUtil;
@property(nonatomic) __weak PDOPStockMainViewController *currentViewController; // @synthesize currentViewController=_currentViewController;
@property(retain, nonatomic) NSString *function_callback; // @synthesize function_callback=_function_callback;
@property(retain, nonatomic) UIWebView *currentWebView; // @synthesize currentWebView=_currentWebView;
- (void).cxx_destruct;
- (_Bool)checkString:(id)arg1 formatType:(id)arg2;
- (long long)iOSVersionCompare:(id)arg1:(id)arg2;
- (id)URLEncodedString:(id)arg1;
- (_Bool)isEmpty:(id)arg1;
- (void)gotoCosCamera;
- (void)customCamera;
- (void)systemPhotoLib;
- (void)CosCameraCompletedNotification:(id)arg1;
- (id)getNetWorkStates;
- (id)getPhoneModel:(id)arg1;
- (id)deviceString;
- (int)convertToInt:(id)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2 IsView:(_Bool)arg3;
- (void)extDone:(id)arg1;
- (void)sureDone:(id)arg1;
- (void)imagePickerControllerDidCancel:(id)arg1;
- (void)uploadCosImage:(id)arg1;
- (id)zipImageData:(id)arg1;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)imageWasSavedSuccessfully:(id)arg1 didFinishSavingWithError:(id)arg2 contextInfo:(void *)arg3;
- (id)image2DataURL:(id)arg1;
- (_Bool)imageHasAlpha:(id)arg1;
- (id)imageCorrectedForCaptureOrientation:(id)arg1;
- (id)imageCorrectedForCam:(id)arg1;
- (id)imageByScalingNotCroppingForSize:(id)arg1 toSize:(struct CGSize)arg2;
- (id)removeNewLine:(id)arg1;
- (void)upLoadImage:(id)arg1;
- (void)uploadImageForNewFramework:(id)arg1;
- (void)setCarmeraData:(id)arg1;
- (_Bool)isConnectionAvailable;
- (_Bool)canUserPickPhotosFromPhotoLibrary;
- (_Bool)canUserPickVideosFromPhotoLibrary;
- (_Bool)isPhotoLibraryAvailable;
- (_Bool)doesCameraSupportTakingPhotos;
- (_Bool)doesCameraSupportShootingVideos;
- (_Bool)cameraSupportsMedia:(id)arg1 sourceType:(long long)arg2;
- (_Bool)isRearCameraAvailable;
- (_Bool)isFrontCameraAvailable;
- (_Bool)isCameraAvailable;
- (void)toH5recommenderNoId:(id)arg1 ViewController:(id)arg2;
- (void)hideDoorPlugin:(id)arg1 ViewController:(id)arg2;
- (void)showDoorPlugin:(id)arg1 ViewController:(id)arg2;
- (void)deviceInfoPlugin:(id)arg1 ViewController:(id)arg2;
- (void)iLayerClose:(id)arg1 ViewController:(id)arg2;
- (void)layerCustom:(id)arg1 ViewController:(id)arg2;
- (void)iCustomClose:(id)arg1 ViewController:(id)arg2;
- (void)iMsg:(id)arg1 ViewController:(id)arg2;
- (void)iConfirm:(id)arg1 ViewController:(id)arg2;
- (void)iAlert:(id)arg1 ViewController:(id)arg2;
- (void)iLoading:(id)arg1 ViewController:(id)arg2;
- (void)getRecommenderPlugin:(id)arg1 ViewController:(id)arg2;
- (void)recommenderPlugin:(id)arg1 ViewController:(id)arg2;
- (void)keyboardCallBackPlugin:(id)arg1 ViewController:(id)arg2;
- (void)regVideoPlugin:(id)arg1 ViewController:(id)arg2;
- (void)TDOnEvent:(id)arg1 ViewController:(id)arg2;
- (void)callPhonePlugin:(id)arg1 ViewController:(id)arg2;
- (void)calendarPlugin:(id)arg1 ViewController:(id)arg2;
- (void)isNetAvailablePlugin:(id)arg1 ViewController:(id)arg2;
- (void)initZsPlugin:(id)arg1 ViewController:(id)arg2;
- (void)createKeyPlugin:(id)arg1 ViewController:(id)arg2;
- (void)signPlugin:(id)arg1 ViewController:(id)arg2;
- (void)startThirdAppPlugin:(id)arg1 ViewController:(id)arg2;
- (void)closeAppPlugin:(id)arg1 ViewController:(id)arg2;
- (void)videoPlugin:(id)arg1 ViewController:(id)arg2;
- (void)softKeyboardPlugin:(id)arg1 ViewController:(id)arg2;
- (void)carmeraPlugin:(id)arg1 ViewController:(id)arg2;
- (void)getIpMacPLugin:(id)arg1 ViewController:(id)arg2;
- (void)getPhoneNoPlugin:(id)arg1 ViewController:(id)arg2;
- (void)updateManagerPlugin:(id)arg1 ViewController:(id)arg2;
- (void)webViewPlugin:(id)arg1 ViewController:(id)arg2;
- (id)colorWithHexString:(id)arg1;
- (id)colorWithHexString:(id)arg1 alpha:(double)arg2;
- (id)init;
- (void)getInject:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
