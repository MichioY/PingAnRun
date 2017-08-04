//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CDVPlugin.h"

#import "UIImagePickerControllerDelegate.h"
#import "UINavigationControllerDelegate.h"

@class CDVImagePicker, NSString;

@interface CDVCapture : CDVPlugin <UIImagePickerControllerDelegate, UINavigationControllerDelegate>
{
    CDVImagePicker *pickerController;
    _Bool inUse;
}

@property _Bool inUse; // @synthesize inUse;
- (void).cxx_destruct;
- (void)imagePickerControllerDidCancel:(id)arg1;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)imagePickerController:(id)arg1 didFinishPickingImage:(id)arg2 editingInfo:(id)arg3;
- (id)getMediaDictionaryFromPath:(id)arg1 ofType:(id)arg2;
- (void)getFormatData:(id)arg1;
- (void)getMediaModes:(id)arg1;
- (id)processVideo:(id)arg1 forCallbackId:(id)arg2;
- (void)captureVideo:(id)arg1;
- (id)processImage:(id)arg1 type:(id)arg2 forCallbackId:(id)arg3;
- (void)captureImage:(id)arg1;
- (void)captureAudio:(id)arg1;
- (id)initWithWebView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
