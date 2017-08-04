//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PARSBaseViewController.h"

#import "PARSCommentStarViewDelegate.h"
#import "UITextViewDelegate.h"

@class NSArray, NSString, PARSMyProductLifeAidInfo, PARSProductCommentTextView, PARSProductCommentView;

@interface PARSProductCommentViewController : PARSBaseViewController <PARSCommentStarViewDelegate, UITextViewDelegate>
{
    PARSMyProductLifeAidInfo *_lifeAidInfo;
    PARSProductCommentTextView *_commentTextView;
    PARSProductCommentView *_commentView;
    NSArray *_commentStarViews;
    long long _descScore;
    long long _shopServiceScore;
    long long _logisticsServiceScore;
}

@property(nonatomic) long long logisticsServiceScore; // @synthesize logisticsServiceScore=_logisticsServiceScore;
@property(nonatomic) long long shopServiceScore; // @synthesize shopServiceScore=_shopServiceScore;
@property(nonatomic) long long descScore; // @synthesize descScore=_descScore;
@property(retain, nonatomic) NSArray *commentStarViews; // @synthesize commentStarViews=_commentStarViews;
@property(retain, nonatomic) PARSProductCommentView *commentView; // @synthesize commentView=_commentView;
@property(retain, nonatomic) PARSProductCommentTextView *commentTextView; // @synthesize commentTextView=_commentTextView;
@property(retain, nonatomic) PARSMyProductLifeAidInfo *lifeAidInfo; // @synthesize lifeAidInfo=_lifeAidInfo;
- (void).cxx_destruct;
- (void)textViewDidChange:(id)arg1;
- (void)ratingBarView:(id)arg1 score:(long long)arg2;
- (void)commentAction:(id)arg1;
- (void)gotoOnlineCustomerServicesCenter;
- (void)dismissKeyBoard:(id)arg1;
- (void)refreshComment;
- (void)initCommentInfo;
- (void)initUI;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
