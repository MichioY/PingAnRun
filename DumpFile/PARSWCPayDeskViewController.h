//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PARSBaseViewController.h"

#import "PARSPayResultViewDelegate.h"
#import "PARSWCPayPasscodeViewDelegate.h"
#import "PARSWCPayVerifyCodeViewControllerDelegate.h"
#import "PARSWCPayWayDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSString, PARSBankCardInfo, PARSMainAccountWCTransferResult, PARSOrderInfo, PARSOrderInfoRequestParam, PARSPayResultView, PARSWCPayPasscodeViewController, PARSWCPayResultInfo, PARSWCPayWayViewController, UIButton, UIImage, UILabel, UITableView, UIView;

@interface PARSWCPayDeskViewController : PARSBaseViewController <UITableViewDataSource, UITableViewDelegate, PARSWCPayWayDelegate, PARSWCPayPasscodeViewDelegate, PARSPayResultViewDelegate, PARSWCPayVerifyCodeViewControllerDelegate>
{
    _Bool _needAddBankCard;
    id <PARSWCPayDeskViewControllerDelegate> _delegate;
    UIView *_deskView;
    UIView *_deskHeaderView;
    UITableView *_optionsTableView;
    UIView *_amountView;
    UILabel *_amountLabel;
    UIButton *_payButton;
    PARSWCPayWayViewController *_payWayViewController;
    PARSWCPayPasscodeViewController *_passcodeViewController;
    PARSOrderInfoRequestParam *_orderInfoParam;
    PARSOrderInfo *_orderInfo;
    NSString *_payWayText;
    UIImage *_payWayIconImage;
    long long _payType;
    PARSBankCardInfo *_payBankCardInfo;
    PARSWCPayResultInfo *_payResult;
    PARSMainAccountWCTransferResult *_mainAccountPayResult;
    UIView *_paySuccessView;
    UIView *_bankCardInsufficientTips;
    PARSPayResultView *_payResultView;
}

@property(retain, nonatomic) PARSPayResultView *payResultView; // @synthesize payResultView=_payResultView;
@property(retain, nonatomic) UIView *bankCardInsufficientTips; // @synthesize bankCardInsufficientTips=_bankCardInsufficientTips;
@property(retain, nonatomic) UIView *paySuccessView; // @synthesize paySuccessView=_paySuccessView;
@property(retain, nonatomic) PARSMainAccountWCTransferResult *mainAccountPayResult; // @synthesize mainAccountPayResult=_mainAccountPayResult;
@property(retain, nonatomic) PARSWCPayResultInfo *payResult; // @synthesize payResult=_payResult;
@property(retain, nonatomic) PARSBankCardInfo *payBankCardInfo; // @synthesize payBankCardInfo=_payBankCardInfo;
@property(nonatomic) long long payType; // @synthesize payType=_payType;
@property(retain, nonatomic) UIImage *payWayIconImage; // @synthesize payWayIconImage=_payWayIconImage;
@property(retain, nonatomic) NSString *payWayText; // @synthesize payWayText=_payWayText;
@property(retain, nonatomic) PARSOrderInfo *orderInfo; // @synthesize orderInfo=_orderInfo;
@property(retain, nonatomic) PARSOrderInfoRequestParam *orderInfoParam; // @synthesize orderInfoParam=_orderInfoParam;
@property(retain, nonatomic) PARSWCPayPasscodeViewController *passcodeViewController; // @synthesize passcodeViewController=_passcodeViewController;
@property(retain, nonatomic) PARSWCPayWayViewController *payWayViewController; // @synthesize payWayViewController=_payWayViewController;
@property(retain, nonatomic) UIButton *payButton; // @synthesize payButton=_payButton;
@property(nonatomic) _Bool needAddBankCard; // @synthesize needAddBankCard=_needAddBankCard;
@property(retain, nonatomic) UILabel *amountLabel; // @synthesize amountLabel=_amountLabel;
@property(retain, nonatomic) UIView *amountView; // @synthesize amountView=_amountView;
@property(retain, nonatomic) UITableView *optionsTableView; // @synthesize optionsTableView=_optionsTableView;
@property(retain, nonatomic) UIView *deskHeaderView; // @synthesize deskHeaderView=_deskHeaderView;
@property(retain, nonatomic) UIView *deskView; // @synthesize deskView=_deskView;
@property(nonatomic) __weak id <PARSWCPayDeskViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)OTPPayDidFinished:(id)arg1;
- (void)closePayDeskOnPayFinish;
- (void)payResultView:(id)arg1 didFinishAnimation:(_Bool)arg2;
- (void)cancelSelect:(id)arg1;
- (void)changeBankCard:(id)arg1;
- (void)useOtherPayWay:(id)arg1;
- (void)dismissBankCardInsufficientTips;
- (id)buildActionButtonWithTitle:(id)arg1;
- (id)buildBankCardInsufficientTips;
- (void)hidePayDeskView;
- (void)closePaySuccessView;
- (id)buildPaySuccessView;
- (void)showBankCardInsufficientTips;
- (void)showPaySuccessResult;
- (void)showPaySuccessTips;
- (void)wCPayWithPayPasscodeViewController:(id)arg1 didFinishTypedPasswd:(id)arg2;
- (void)mainAccountWCPayWithPayPasscodeViewController:(id)arg1 didFinishTypedPasswd:(id)arg2;
- (id)buildPayChannelList;
- (void)payPasscodeViewController:(id)arg1 didFinishTypedPasswd:(id)arg2;
- (void)payWayViewController:(id)arg1 didSelectPayType:(long long)arg2 text:(id)arg3 iconUrl:(id)arg4 bankCardInfo:(id)arg5;
- (_Bool)shouldHideNavigationBar;
- (void)wcPayDidUpdateBankCard:(id)arg1;
- (void)doPayAction:(id)arg1;
- (void)doAddBankCard:(id)arg1;
- (void)showDesk:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)showDesk:(_Bool)arg1;
- (void)tapHelpButton:(id)arg1;
- (void)closeDesk;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)buildOptionsTableView;
- (void)refreshCardLogo;
- (void)downloadImageWithUrl:(id)arg1;
- (id)buildPayResultView;
- (void)reloadPayWayViewController;
- (id)buildPayButton;
- (void)updateAmountViewWithOrderAmount:(id)arg1;
- (void)setUpAmountView;
- (id)buildDeskHeaderView;
- (void)updateWithOrderInfo:(id)arg1 error:(id)arg2;
- (void)setUpDeskView;
- (void)initPayWay;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (id)initWithOrderInfo:(id)arg1 withOrderInfoRequestParam:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

