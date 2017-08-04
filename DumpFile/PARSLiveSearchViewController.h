//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PARSBaseViewController.h"

#import "PARSLiveSearchHistoryControllerDelegate.h"
#import "PARSLiveSearchInputViewDelegate.h"
#import "PARSLiveSearchResultViewControllerDelegate.h"

@class NSString, PARSLiveSearchHistoryController, PARSLiveSearchInputView, PARSLiveSearchResultViewController;

@interface PARSLiveSearchViewController : PARSBaseViewController <PARSLiveSearchInputViewDelegate, PARSLiveSearchResultViewControllerDelegate, PARSLiveSearchHistoryControllerDelegate>
{
    NSString *_keyword;
    PARSLiveSearchInputView *_liveInputView;
    PARSLiveSearchResultViewController *_searchResultVc;
    PARSLiveSearchHistoryController *_searchHistoryVc;
}

@property(retain, nonatomic) PARSLiveSearchHistoryController *searchHistoryVc; // @synthesize searchHistoryVc=_searchHistoryVc;
@property(retain, nonatomic) PARSLiveSearchResultViewController *searchResultVc; // @synthesize searchResultVc=_searchResultVc;
@property(retain, nonatomic) PARSLiveSearchInputView *liveInputView; // @synthesize liveInputView=_liveInputView;
@property(copy, nonatomic) NSString *keyword; // @synthesize keyword=_keyword;
- (void).cxx_destruct;
- (void)searchResultVC:(id)arg1 searchKeyword:(id)arg2;
- (void)searchInputView:(id)arg1 didSearchKeyword:(id)arg2;
- (void)searchInputView:(id)arg1 didTapCancelButton:(id)arg2;
- (void)searchInputView:(id)arg1 didInputString:(id)arg2;
- (void)liveSearchHistoryVC:(id)arg1 searchKeyword:(id)arg2;
- (void)searchKeyword:(id)arg1;
- (void)setupSubViews;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (id)init;
- (id)initWithKeywork:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
