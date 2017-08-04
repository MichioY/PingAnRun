//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PARSBaseViewController.h"

#import "PARSAcceptPrizeTableViewCellDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSArray, NSString, PARSAcceptPrizeHeadView, PARSPrizeModel, UITableView;

@interface PARSAcceptPrizeViewController : PARSBaseViewController <UITableViewDataSource, UITableViewDelegate, PARSAcceptPrizeTableViewCellDelegate>
{
    id <PARSAcceptPrizeViewControllerDelegate> _delegate;
    UITableView *_tableView;
    PARSAcceptPrizeHeadView *_headView;
    PARSPrizeModel *_prizeModel;
    NSArray *_acceptInfos;
    NSString *_addressStr;
}

@property(copy, nonatomic) NSString *addressStr; // @synthesize addressStr=_addressStr;
@property(retain, nonatomic) NSArray *acceptInfos; // @synthesize acceptInfos=_acceptInfos;
@property(retain, nonatomic) PARSPrizeModel *prizeModel; // @synthesize prizeModel=_prizeModel;
@property(retain, nonatomic) PARSAcceptPrizeHeadView *headView; // @synthesize headView=_headView;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) __weak id <PARSAcceptPrizeViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (_Bool)textViewShouldEndEditing:(id)arg1;
- (void)textViewDidEndEditing:(id)arg1;
- (void)textViewDidBeginEditing:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)textFieldDidEndEditing:(id)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (_Bool)textFieldShouldBeginEditing:(id)arg1;
- (void)tableViewCell:(id)arg1 needToFetchMobilPhoneVerificationCode:(CDUnknownBlockType)arg2;
- (void)reloadRequsetData;
- (void)sendCode:(id)arg1;
- (void)submitMessage;
- (void)cancle:(id)arg1;
- (void)hideKeyBoard;
- (void)keyboardFrameChange:(id)arg1;
- (_Bool)isNumOfString:(id)arg1;
- (void)getFavorAddress;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithPrizeInfo:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
