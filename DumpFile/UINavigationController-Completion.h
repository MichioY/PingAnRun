//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UINavigationController.h"

#import "UINavigationControllerDelegate.h"

@class NSString;

@interface UINavigationController (Completion) <UINavigationControllerDelegate>
+ (void)load;
- (id)popViewControllerAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)pushViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (id)pars_popViewControllerAnimated:(_Bool)arg1;
- (void)pars_pushViewController:(id)arg1 animated:(_Bool)arg2;
@property(copy, nonatomic) NSString *pars_operation; // @dynamic pars_operation;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end
