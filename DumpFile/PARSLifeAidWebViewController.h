//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PARSPALHWebViewController.h"

#import "PALHServiceHandler.h"
#import "PARSLifeAidTipsViewDelegate.h"

@class NSMutableArray, NSString, PARSCarInfo, PARSLifeAidHomePageProductInfo, PARSResultView;

@interface PARSLifeAidWebViewController : PARSPALHWebViewController <PALHServiceHandler, PARSLifeAidTipsViewDelegate>
{
    PARSLifeAidHomePageProductInfo *_product;
    PARSCarInfo *_carInfo;
    NSMutableArray *_hostArray;
    CDUnknownBlockType _resultBlock;
    NSString *_productUrl;
    long long _webViewType;
    PARSResultView *_resultView;
    NSString *_prepose;
    NSString *_jssdkTitle;
}

@property(copy, nonatomic) NSString *jssdkTitle; // @synthesize jssdkTitle=_jssdkTitle;
@property(copy, nonatomic) NSString *prepose; // @synthesize prepose=_prepose;
@property(retain, nonatomic) PARSResultView *resultView; // @synthesize resultView=_resultView;
@property(nonatomic) long long webViewType; // @synthesize webViewType=_webViewType;
@property(copy, nonatomic) NSString *productUrl; // @synthesize productUrl=_productUrl;
@property(copy, nonatomic) CDUnknownBlockType resultBlock; // @synthesize resultBlock=_resultBlock;
@property(retain, nonatomic) NSMutableArray *hostArray; // @synthesize hostArray=_hostArray;
@property(readonly, nonatomic) PARSCarInfo *carInfo; // @synthesize carInfo=_carInfo;
@property(retain, nonatomic) PARSLifeAidHomePageProductInfo *product; // @synthesize product=_product;
- (void).cxx_destruct;
- (id)nowDateStr;
- (void)uploadInfomation:(id)arg1;
- (void)lifeAidTipsView:(id)arg1 didClickUrl:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)lifeAidTipsView:(id)arg1 forceToJumpUrl:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)isValidHost:(id)arg1 whiteList:(id)arg2;
- (_Bool)isAllowToLoad:(id)arg1;
- (_Bool)parsWebView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (id)noRespondMsgForAction:(id)arg1;
- (void)handleMessage:(id)arg1 result:(CDUnknownBlockType)arg2;
- (_Bool)canHandleAction:(id)arg1;
- (id)actions;
- (void)getAddress:(id)arg1 resultBlock:(CDUnknownBlockType)arg2;
- (void)loadIntegralProduct;
- (void)loadBreakRule;
- (void)loadProduct;
- (void)viewDidLoad;
- (id)initWithIntegralProductUrl:(id)arg1 prepose:(id)arg2 title:(id)arg3;
- (id)initWithCarInfo:(id)arg1;
- (id)initWithProduct:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

