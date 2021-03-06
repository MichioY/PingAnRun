//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MutiSignViewController.h"

#import "CustomViewDelegate.h"

@class Config, CustomView, NSMutableArray, NSMutableAttributedString, NSString, PainterView, UIButton, UIImage, UIImageView, UILabel, UIView;

@interface MutiSignIphoneViewController : MutiSignViewController <CustomViewDelegate>
{
    PainterView *paintview;
    CustomView *myscrol;
    UIImageView *backBar;
    struct CGPoint point;
    double BigPictx;
    double BigPicty;
    double saveWidth;
    UIImage *viewImage;
    UIView *backview;
    UILabel *alertlabel;
    UIImageView *backviewbackground;
    UIButton *signFrameBtn;
    UIImageView *signLogo;
    UIView *scrollFrame;
    UIImageView *animatedView;
    UIButton *savebutton;
    UIButton *cancelButton;
    UIButton *clearButton;
    UIView *myscrolBack;
    float height_off;
    float width_off;
    int index;
    NSString *showAdviceText;
    UILabel *lable;
    UIImageView *subPicView;
    int myOrientation;
    NSMutableArray *scalePictures;
    struct CGRect signRect;
    float myWidth;
    float myHeight;
    NSMutableAttributedString *attrM;
    Config *myConfig;
}

- (void)setMyConfig:(id)arg1;
- (id)myConfig;
- (void)notifyChange:(id)arg1;
- (id)settimechangetext;
- (id)showBigPict:(id)arg1;
- (id)showPict:(id)arg1;
- (int)showMutPict;
- (void)showImage:(id)arg1;
- (void)changeLalbe:(id)arg1;
- (id)getImage;
- (void)setImageSize:(struct CGSize)arg1;
- (void)setScale:(double)arg1;
- (void)saveImage:(id)arg1 PicWidth:(double)arg2 PicHeight:(double)arg3;
- (void)saveImage:(id)arg1;
- (id)scaleImage:(id)arg1 toSize:(struct CGSize)arg2;
- (int)save;
- (void)cancel_all_sign;
- (void)cancel;
- (void)clearmulti;
- (void)clear;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (void)viewDidUnload;
- (void)dealloc;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)didReceiveMemoryWarning;
- (id)initWithCommitment:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)sendIndex:(double)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

