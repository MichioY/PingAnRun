//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CustomWebAlertView, UIView;

@protocol CustomAlertViewDelegate <NSObject>

@optional
- (void)hideCurrentKeyBoard;
- (void)willPresentCustomAlertView:(UIView *)arg1;
- (void)alertViewClosed:(CustomWebAlertView *)arg1;
- (void)alertView:(CustomWebAlertView *)arg1 clickedButtonAtIndex:(long long)arg2 IsView:(_Bool)arg3;
@end
