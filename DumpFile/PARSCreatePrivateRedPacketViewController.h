//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PARSCreateRedPacketViewController.h"

@class NSString, UITextField;

@interface PARSCreatePrivateRedPacketViewController : PARSCreateRedPacketViewController
{
    NSString *_userSocialCloudId;
    UITextField *_rpSumTF;
}

@property(retain, nonatomic) UITextField *rpSumTF; // @synthesize rpSumTF=_rpSumTF;
@property(copy, nonatomic) NSString *userSocialCloudId; // @synthesize userSocialCloudId=_userSocialCloudId;
- (void).cxx_destruct;
- (void)textFieldDidBeginEditing:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (long long)getMemberCount;
- (id)getInputInfo;
- (_Bool)checkBeforeEnableCreateBtnWithMoney:(double)arg1;
- (_Bool)checkBeforeSend;
- (id)getInputContentView;
- (id)initWithResult:(CDUnknownBlockType)arg1;

@end

