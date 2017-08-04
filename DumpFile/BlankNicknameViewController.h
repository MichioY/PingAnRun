//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PARSBaseViewController.h"

@class NSString, PARSActivityDetailModel, UIButton, UITextField;

@interface BlankNicknameViewController : PARSBaseViewController
{
    NSString *_groupID;
    UITextField *_nickNameTF;
    UIButton *_doneButton;
    int _fromType;
    id <PARSNicknameViewControllerDelegate> _delegate;
    NSString *_nickName;
    NSString *_agentNum;
    NSString *_agentName;
    NSString *_activityID;
    PARSActivityDetailModel *_activityInfo;
}

@property(retain, nonatomic) PARSActivityDetailModel *activityInfo; // @synthesize activityInfo=_activityInfo;
@property(copy, nonatomic) NSString *activityID; // @synthesize activityID=_activityID;
@property(nonatomic) int fromType; // @synthesize fromType=_fromType;
@property(retain, nonatomic) NSString *agentName; // @synthesize agentName=_agentName;
@property(retain, nonatomic) NSString *agentNum; // @synthesize agentNum=_agentNum;
@property(retain, nonatomic) NSString *nickName; // @synthesize nickName=_nickName;
@property(nonatomic) __weak id <PARSNicknameViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)didReceiveMemoryWarning;
- (void)viewDidAppear:(_Bool)arg1;
- (void)complete;
- (void)doneClick;
@property(readonly, nonatomic) NSString *phoneNum;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end
