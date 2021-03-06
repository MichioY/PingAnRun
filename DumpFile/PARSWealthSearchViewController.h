//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PARSBaseViewController.h"

#import "PARSWealthSearchHistoryViewControllerDelegate.h"
#import "PARSWealthSearchInputViewDelegate.h"
#import "PARSWealthSearchResultViewControllerDelegate.h"

@class NSString, PARSWealthSearchHistoryViewController, PARSWealthSearchInputView, PARSWealthSearchResultViewController;

@interface PARSWealthSearchViewController : PARSBaseViewController <PARSWealthSearchInputViewDelegate, PARSWealthSearchHistoryViewControllerDelegate, PARSWealthSearchResultViewControllerDelegate>
{
    NSString *_keyword;
    PARSWealthSearchInputView *_searchInputView;
    PARSWealthSearchHistoryViewController *_searchHistoryVC;
    PARSWealthSearchResultViewController *_searchResultVC;
}

@property(retain, nonatomic) PARSWealthSearchResultViewController *searchResultVC; // @synthesize searchResultVC=_searchResultVC;
@property(retain, nonatomic) PARSWealthSearchHistoryViewController *searchHistoryVC; // @synthesize searchHistoryVC=_searchHistoryVC;
@property(retain, nonatomic) PARSWealthSearchInputView *searchInputView; // @synthesize searchInputView=_searchInputView;
@property(copy, nonatomic) NSString *keyword; // @synthesize keyword=_keyword;
- (void).cxx_destruct;
- (void)searchResultVC:(id)arg1 searchKeyword:(id)arg2;
- (void)searchInputView:(id)arg1 didSearchKeyword:(id)arg2;
- (void)searchInputView:(id)arg1 didTapCancelButton:(id)arg2;
- (void)searchInputView:(id)arg1 didInputString:(id)arg2;
- (void)wealthSearchHistoryVC:(id)arg1 searchKeyword:(id)arg2;
- (void)searchKeyword:(id)arg1;
- (void)setupSubViews;
- (void)didReceiveMemoryWarning;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)init;
- (id)initWithKeywork:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

