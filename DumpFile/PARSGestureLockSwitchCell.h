//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class UISwitch;

@interface PARSGestureLockSwitchCell : UITableViewCell
{
    id <PARSGesturePasswordSwitchDelegate> _delegate;
    UISwitch *_pwdSwitch;
}

@property(retain, nonatomic) UISwitch *pwdSwitch; // @synthesize pwdSwitch=_pwdSwitch;
@property(nonatomic) __weak id <PARSGesturePasswordSwitchDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)setSwitchStatus:(_Bool)arg1;
- (void)switchGesturePwd:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

