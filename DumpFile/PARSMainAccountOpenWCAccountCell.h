//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class PARSOptButton, UIImageView, UITextField;

@interface PARSMainAccountOpenWCAccountCell : UITableViewCell
{
    UIImageView *_iconImg;
    UITextField *_textField;
    PARSOptButton *_captchaBtn;
}

@property(retain, nonatomic) PARSOptButton *captchaBtn; // @synthesize captchaBtn=_captchaBtn;
@property(retain, nonatomic) UITextField *textField; // @synthesize textField=_textField;
@property(retain, nonatomic) UIImageView *iconImg; // @synthesize iconImg=_iconImg;
- (void).cxx_destruct;
- (void)updateWithTextField:(id)arg1 captchaBtn:(id)arg2 iconImage:(id)arg3;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
