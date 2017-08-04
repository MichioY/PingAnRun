//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PARSUploadUserIdentityViewController.h"

@class NSString, PARSMainAccountApplyForUnbindParam, PARSUploadUserUnBindInfoTableHeaderView;

@interface PARSUnBindCardUploadPersonalDataViewController : PARSUploadUserIdentityViewController
{
    PARSUploadUserUnBindInfoTableHeaderView *_headerView;
    NSString *_bankCardNum;
    id <PARSUnBindCardUploadPersonalDataDelegate> _delegate;
    PARSMainAccountApplyForUnbindParam *_inputResultData;
}

@property(retain, nonatomic) PARSMainAccountApplyForUnbindParam *inputResultData; // @synthesize inputResultData=_inputResultData;
@property(nonatomic) __weak id <PARSUnBindCardUploadPersonalDataDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSString *bankCardNum; // @synthesize bankCardNum=_bankCardNum;
- (void).cxx_destruct;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
@property(retain, nonatomic) PARSUploadUserUnBindInfoTableHeaderView *headerView; // @dynamic headerView;
- (void)didFinishUploadPicturesWithData:(id)arg1;
- (void)didTapConfirmButton:(id)arg1;
- (void)viewDidLoad;

@end
