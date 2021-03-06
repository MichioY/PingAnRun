//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "PARSExpressResultViewDelegate.h"
#import "UISearchBarDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSArray, NSString, PARSExpressParseTool, PARSExpressSearchResultView, UIButton, UISearchBar, UITableView;

@interface PARSExpressListViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, UISearchBarDelegate, PARSExpressResultViewDelegate>
{
    long long _type;
    NSString *_expressNum;
    CDUnknownBlockType _selectBlock;
    NSArray *_companyInfoList;
    PARSExpressSearchResultView *_resultView;
    UISearchBar *_searchBar;
    UIButton *_cancelButton;
    UITableView *_tableView;
    NSArray *_contentArray;
    NSArray *_markContents;
    PARSExpressParseTool *_parseTool;
}

@property(retain, nonatomic) PARSExpressParseTool *parseTool; // @synthesize parseTool=_parseTool;
@property(retain, nonatomic) NSArray *markContents; // @synthesize markContents=_markContents;
@property(retain, nonatomic) NSArray *contentArray; // @synthesize contentArray=_contentArray;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) UIButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(retain, nonatomic) UISearchBar *searchBar; // @synthesize searchBar=_searchBar;
@property(retain, nonatomic) PARSExpressSearchResultView *resultView; // @synthesize resultView=_resultView;
@property(retain, nonatomic) NSArray *companyInfoList; // @synthesize companyInfoList=_companyInfoList;
@property(copy, nonatomic) CDUnknownBlockType selectBlock; // @synthesize selectBlock=_selectBlock;
@property(copy, nonatomic) NSString *expressNum; // @synthesize expressNum=_expressNum;
@property(nonatomic) long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (void)didSelectCompanyInfo:(id)arg1;
- (void)didDismissSearchResultView;
- (id)companyInfoAtIndexPath:(id)arg1;
- (void)storageLogisticListWithCompanyInfo:(id)arg1;
- (void)fetchAllCompany;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)searchBarCancelButtonClicked:(id)arg1;
- (void)searchBarTextDidEndEditing:(id)arg1;
- (void)searchBarTextDidBeginEditing:(id)arg1;
- (long long)tableView:(id)arg1 sectionForSectionIndexTitle:(id)arg2 atIndex:(long long)arg3;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)sectionIndexTitlesForTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

