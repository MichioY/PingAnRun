//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString, PARSBaseActivityInfo;

@protocol SignUpViewControllerDelegate <NSObject>
- (void)gotoPlayGame:(NSDictionary *)arg1;
- (void)signUpViewControllerDoneWith:(NSString *)arg1;
- (void)signUpViewControllerDidCancel;

@optional
- (void)signUPViewControllerDoneOnline:(NSString *)arg1 info:(PARSBaseActivityInfo *)arg2;
- (void)signUpViewControllerDone:(NSString *)arg1 info:(PARSBaseActivityInfo *)arg2;
@end
