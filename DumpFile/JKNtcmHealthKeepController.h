//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JKNInsuranceHomeViewController.h"

@class NSArray, NSString, PAApi_MEPHISTOPAGE_PlateData, UIImageView;

@interface JKNtcmHealthKeepController : JKNInsuranceHomeViewController
{
    PAApi_MEPHISTOPAGE_PlateData *_tcmHealthKeepModel;
    UIImageView *_leftImg;
    UIImageView *_rightImg;
    NSString *_leftImgPageUrl;
    NSString *_rightImgPageUrl;
    NSArray *_dataArray;
    NSString *_headTitle;
    NSString *_subTitle;
    NSString *_linkTitle;
    NSString *_moreInfoUrl;
}

@property(copy, nonatomic) NSString *moreInfoUrl; // @synthesize moreInfoUrl=_moreInfoUrl;
@property(copy, nonatomic) NSString *linkTitle; // @synthesize linkTitle=_linkTitle;
@property(copy, nonatomic) NSString *subTitle; // @synthesize subTitle=_subTitle;
@property(copy, nonatomic) NSString *headTitle; // @synthesize headTitle=_headTitle;
@property(copy, nonatomic) NSArray *dataArray; // @synthesize dataArray=_dataArray;
@property(retain, nonatomic) NSString *rightImgPageUrl; // @synthesize rightImgPageUrl=_rightImgPageUrl;
@property(retain, nonatomic) NSString *leftImgPageUrl; // @synthesize leftImgPageUrl=_leftImgPageUrl;
@property(retain, nonatomic) UIImageView *rightImg; // @synthesize rightImg=_rightImg;
@property(retain, nonatomic) UIImageView *leftImg; // @synthesize leftImg=_leftImg;
@property(retain, nonatomic) PAApi_MEPHISTOPAGE_PlateData *tcmHealthKeepModel; // @synthesize tcmHealthKeepModel=_tcmHealthKeepModel;
- (void).cxx_destruct;
- (void)titleAction;
- (id)subTitleString;
- (id)summaryString;
- (id)titleString;
- (_Bool)needTitleBar;
- (double)calHeight;
- (void)rightImgTapAction;
- (void)leftImgTapAction;
- (void)configData;
- (void)configTcmHealthKeepView;
- (void)viewDidLoad;

@end
