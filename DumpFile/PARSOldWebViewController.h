//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PARSEasyWebViewController.h"

@class PARSCertificatePicUploadManager, UIView;

@interface PARSOldWebViewController : PARSEasyWebViewController
{
    UIView *_statusBarBGView;
    PARSCertificatePicUploadManager *_certificatePicUploadManager;
}

@property(retain, nonatomic) PARSCertificatePicUploadManager *certificatePicUploadManager; // @synthesize certificatePicUploadManager=_certificatePicUploadManager;
@property(retain, nonatomic) UIView *statusBarBGView; // @synthesize statusBarBGView=_statusBarBGView;
- (void).cxx_destruct;
- (void)cancel;
- (void)getPhoto:(id)arg1 callbackObject:(id)arg2 jsonData:(id)arg3;
- (void)takeOneRiderImg:(id)arg1 taskId:(id)arg2 imageWidth:(id)arg3 imageHeight:(id)arg4 callback:(id)arg5;
- (void)evaluateJavaScript:(id)arg1;
- (void)executeCallbackJsWithParams:(id)arg1 callbackMethodName:(id)arg2;
- (void)updateNavBarWithHidden:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

