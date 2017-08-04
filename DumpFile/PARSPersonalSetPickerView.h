//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "FSMediaPickerDelegate.h"

@class NSArray, NSString;

@interface PARSPersonalSetPickerView : UIView <FSMediaPickerDelegate>
{
    id <PARSPersonalSetPickerViewDelegate> _delegate;
    UIView *_mainView;
    NSArray *_imageNames;
}

@property(retain, nonatomic) NSArray *imageNames; // @synthesize imageNames=_imageNames;
@property(retain, nonatomic) UIView *mainView; // @synthesize mainView=_mainView;
@property(nonatomic) __weak id <PARSPersonalSetPickerViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)dismiss;
- (void)show;
- (void)cancelAction;
- (void)headImageViewTapAction:(id)arg1;
- (void)checkAuthorizationWithType:(unsigned long long)arg1 complete:(CDUnknownBlockType)arg2;
- (void)photoLibButtonAction;
- (void)cameraButtonAction;
- (void)backgroundTapAction:(id)arg1;
- (void)mediaPickerDidCancel:(id)arg1;
- (void)mediaPicker:(id)arg1 didFinishWithMediaInfo:(id)arg2;
- (void)initUI;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
