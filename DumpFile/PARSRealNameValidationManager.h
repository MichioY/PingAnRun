//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIViewController;

@interface PARSRealNameValidationManager : NSObject
{
    UIViewController *_viewDelegate;
}

+ (id)sharedManager;
@property(retain, nonatomic) UIViewController *viewDelegate; // @synthesize viewDelegate=_viewDelegate;
- (void).cxx_destruct;
- (void)handleLoginFromPolicyValidatingBusiness:(CDUnknownBlockType)arg1;
- (void)doValidateWithCompletion:(CDUnknownBlockType)arg1;
- (void)doValidateWithResult:(CDUnknownBlockType)arg1;
- (void)fetchRealNameValidationStatus:(CDUnknownBlockType)arg1;
- (void)fetchRealNameInfo:(CDUnknownBlockType)arg1;

@end

